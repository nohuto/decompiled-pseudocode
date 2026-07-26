/*
 * XREFs of ndisOidPostAddPMProtocolOffload @ 0x1C0014340
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C0020AF0 (ndisGetCombinedPMConfig.c)
 *     ndisInsertPatternListEntry @ 0x1C0020C68 (ndisInsertPatternListEntry.c)
 *     ndisEnablePMParamForProtocolOffload @ 0x1C0049E14 (ndisEnablePMParamForProtocolOffload.c)
 *     ndisGetPatternEffectivePriority @ 0x1C0049F90 (ndisGetPatternEffectivePriority.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00C5BBC (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisOidPostAddPMProtocolOffload(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r9
  _QWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int PatternEffectivePriority; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx

  v1 = a1[4];
  v3 = a1[3];
  v4 = *a1;
  v5 = *(_DWORD *)(v1 + 88);
  if ( (v5 & 0x40000) == 0 && (v5 & 0x80000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v3 )
      {
        v17 = *(void **)(v1 + 160);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
      }
      if ( a1[1] )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v18 = *(void **)(v1 + 160);
          if ( v18 )
            ExFreePoolWithTag(v18, 0);
        }
      }
      if ( *a1 )
      {
        v19 = *(void **)(v4 + 192);
        *(_QWORD *)(v4 + 192) = 0LL;
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 192);
        *(_QWORD *)(v4 + 192) = 0LL;
        v7 = (_QWORD *)(v6 + 8);
        v8 = *(_QWORD **)(v6 + 8);
        if ( v8 )
        {
          *v7 = 0LL;
          *v7 = *v8;
          *v8 = v7;
          PatternEffectivePriority = ndisGetPatternEffectivePriority(v8 - 1);
          *(_DWORD *)(v11 + 28) = PatternEffectivePriority;
        }
        else
        {
          ndisInsertPatternListEntry(v4 + 976, v6);
          *(_DWORD *)(v9 + 36) = *(_DWORD *)(v9 + 32);
        }
        if ( (_UNKNOWN *)ndisGetOidSourceHandle(v1) == &ndisIntReqWmi )
        {
          ndisEnablePMParamForProtocolOffload(*(_QWORD *)(v1 + 40), v4 + 1140);
          ndisGetCombinedPMConfig(v4, v4 + 1120);
          ndisMiniportPMParametersUpdated(v4);
        }
      }
      if ( a1[3] )
      {
        v12 = *(_QWORD *)(v1 + 40);
        v13 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v13 + 196) = *(_DWORD *)(v12 + 148);
        *(_DWORD *)(v13 + 40) = *(_DWORD *)(v12 + 148);
        *(_QWORD *)v13 = *(_QWORD *)(v3 + 512);
        *(_QWORD *)(v3 + 512) = v13;
      }
      v14 = a1[1];
      if ( v14 )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v15 = *(_QWORD *)(v1 + 40);
          v16 = *(_QWORD *)(v1 + 160);
          *(_DWORD *)(v16 + 196) = *(_DWORD *)(v15 + 148);
          *(_DWORD *)(v16 + 40) = *(_DWORD *)(v15 + 148);
          *(_QWORD *)v16 = *(_QWORD *)(v14 + 872);
          *(_QWORD *)(v14 + 872) = v16;
        }
      }
    }
  }
}
