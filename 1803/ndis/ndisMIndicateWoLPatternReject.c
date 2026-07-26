/*
 * XREFs of ndisMIndicateWoLPatternReject @ 0x1C004A30C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisGetCombinedPMConfig @ 0x1C0020AF0 (ndisGetCombinedPMConfig.c)
 *     ndisUpdateWmiPMParamsForPatterns @ 0x1C004B82C (ndisUpdateWmiPMParamsForPatterns.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00C5BBC (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisMIndicateWoLPatternReject(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v5; // r9d
  unsigned __int8 v6; // al
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 *v9; // rax
  int v10; // r8d
  _QWORD *v11; // rdx
  _QWORD *v12; // r10
  __int64 *v13; // r11
  bool v14; // zf
  __int64 *v15; // rbx
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  void **v18; // rcx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    v5 = **(_DWORD **)(a2 + 48);
    v6 = *(_BYTE *)(a1 + 32);
    if ( v6 > 6u || v6 == 6 && *(_BYTE *)(a1 + 33) >= 0x14u )
      v7 = 968LL;
    else
      v7 = 960LL;
    v8 = (_QWORD *)(v7 + a1);
    v9 = (__int64 *)*v8;
    if ( *v8 )
    {
      while ( 1 )
      {
        v10 = *((_DWORD *)v9 + 10);
        v11 = v9;
        v12 = v8;
        v13 = v9;
        v14 = v10 == v5;
        if ( v10 == v5 )
          break;
        v8 = v9;
        v9 = (__int64 *)*v9;
        if ( !v9 )
        {
          v14 = v10 == v5;
          break;
        }
      }
      if ( v14 )
        v11 = v12;
      v15 = 0LL;
      if ( v10 == v5 )
        v15 = v13;
      if ( v15 )
      {
        *v11 = *v9;
        *(_DWORD *)(a2 + 96) = 0;
        v16 = v15 + 1;
        if ( v16 )
        {
          do
          {
            v17 = v16;
            v16 = (_QWORD *)*v16;
            v18 = (void **)(v17 - 1);
            if ( v18[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(v18, 0);
            ++*(_DWORD *)(a2 + 96);
          }
          while ( v16 );
          if ( v2 )
          {
            ndisUpdateWmiPMParamsForPatterns(a1);
            ndisGetCombinedPMConfig(a1, a1 + 1120);
            ndisMiniportPMParametersUpdated(a1);
          }
        }
      }
    }
  }
}
