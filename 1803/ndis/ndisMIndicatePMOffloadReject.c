/*
 * XREFs of ndisMIndicatePMOffloadReject @ 0x1C004A200
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisGetCombinedPMConfig @ 0x1C0020AF0 (ndisGetCombinedPMConfig.c)
 *     ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004B894 (ndisUpdateWmiPMParamsForProtocolOffloads.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00C5BBC (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisMIndicatePMOffloadReject(__int64 a1, __int64 a2)
{
  char v2; // bp
  _QWORD *v5; // rcx
  int v6; // r8d
  __int64 *v7; // rax
  int v8; // r9d
  _QWORD *v9; // rdx
  _QWORD *v10; // r10
  __int64 *v11; // r11
  bool v12; // zf
  __int64 *v13; // rbx
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  void **v16; // rcx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    v5 = (_QWORD *)(a1 + 976);
    v6 = **(_DWORD **)(a2 + 48);
    v7 = (__int64 *)*v5;
    if ( *v5 )
    {
      while ( 1 )
      {
        v8 = *((_DWORD *)v7 + 49);
        v9 = v7;
        v10 = v5;
        v11 = v7;
        v12 = v8 == v6;
        if ( v8 == v6 )
          break;
        v5 = v7;
        v7 = (__int64 *)*v7;
        if ( !v7 )
        {
          v12 = v8 == v6;
          break;
        }
      }
      if ( v12 )
        v9 = v10;
      v13 = 0LL;
      if ( v8 == v6 )
        v13 = v11;
      if ( v13 )
      {
        *v9 = *v7;
        *(_DWORD *)(a2 + 96) = 0;
        v14 = v13 + 1;
        if ( v14 )
        {
          do
          {
            v15 = v14;
            v14 = (_QWORD *)*v14;
            v16 = (void **)(v15 - 1);
            if ( v16[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(v16, 0);
            ++*(_DWORD *)(a2 + 96);
          }
          while ( v14 );
          if ( v2 )
          {
            ndisUpdateWmiPMParamsForProtocolOffloads(a1);
            ndisGetCombinedPMConfig(a1, a1 + 1120);
            ndisMiniportPMParametersUpdated(a1);
          }
        }
      }
    }
  }
}
