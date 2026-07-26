/*
 * XREFs of ndisOidPostPMRemoveWOLPattern @ 0x1C0002460
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C000251C (ndisDeletePatternEntry.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0002550 (ndisMiniportPostRemoveWoLPattern.c)
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C0003200 (ndisGetCombinedPMConfig.c)
 *     ndisPostRemoveMiniportWakeUpPattern @ 0x1C0049F3C (ndisPostRemoveMiniportWakeUpPattern.c)
 *     ndisUpdateWmiPMParamsForPatterns @ 0x1C004A854 (ndisUpdateWmiPMParamsForPatterns.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ADFCC (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisOidPostPMRemoveWOLPattern(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  void *v8; // rbx
  PVOID *v9; // rbx

  v2 = a1[3];
  v3 = *a1;
  v4 = a1[4];
  if ( *((_DWORD *)a1 + 10) )
  {
    v8 = *(void **)(v4 + 144);
    if ( v8 )
    {
      *(_DWORD *)(v4 + 32) = *(_DWORD *)v8;
      *(_QWORD *)(v4 + 40) = *((_QWORD *)v8 + 1);
      *(_DWORD *)(v4 + 48) = *((_DWORD *)v8 + 4);
      ExFreePoolWithTag(*((PVOID *)v8 + 3), 0);
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(v4 + 144) = 0LL;
    }
  }
  else
  {
    if ( v3 )
    {
      v7 = *(_BYTE *)(v3 + 32);
      if ( v7 > 6u || v7 == 6 && *(_BYTE *)(v3 + 33) >= 0x14u )
      {
        ndisMiniportPostRemoveWoLPattern(*a1, a1[4]);
        if ( (_UNKNOWN *)ndisGetOidSourceHandle(v4) == &ndisIntReqWmi )
        {
          ndisUpdateWmiPMParamsForPatterns(v3);
          ndisGetCombinedPMConfig(v3, v3 + 1120);
          ndisMiniportPMParametersUpdated(v3);
        }
      }
      else
      {
        ndisPostRemoveMiniportWakeUpPattern(*a1, a1[4], 0LL);
        v9 = *(PVOID **)(v4 + 144);
        ExFreePoolWithTag(v9[3], 0);
        *(_DWORD *)(v4 + 32) = *(_DWORD *)v9;
        *(_QWORD *)(v4 + 40) = v9[1];
        *(_DWORD *)(v4 + 48) = *((_DWORD *)v9 + 4);
        ExFreePoolWithTag(v9, 0);
        *(_QWORD *)(v4 + 144) = 0LL;
      }
    }
    v5 = **(_DWORD **)(v4 + 40);
    if ( a1[3] )
      ndisDeletePatternEntry(v2 + 504, v5);
    v6 = a1[1];
    if ( v6 )
    {
      if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
        ndisDeletePatternEntry(v6 + 864, v5);
    }
  }
}
