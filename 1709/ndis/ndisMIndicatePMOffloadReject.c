/*
 * XREFs of ndisMIndicatePMOffloadReject @ 0x1C0048DF4
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ndisGetCombinedPMConfig @ 0x1C0003200 (ndisGetCombinedPMConfig.c)
 *     ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004A8BC (ndisUpdateWmiPMParamsForProtocolOffloads.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ADFCC (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisMIndicatePMOffloadReject(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 **v5; // rcx
  int v6; // edx
  __int64 *v7; // rax
  __int64 *v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  void **v11; // rcx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 56) >= 4u )
  {
    v5 = (__int64 **)(a1 + 976);
    v6 = **(_DWORD **)(a2 + 48);
    v7 = *v5;
    if ( *v5 )
    {
      do
      {
        v8 = v7;
        if ( *((_DWORD *)v7 + 49) == v6 )
          break;
        v5 = (__int64 **)v7;
        v8 = 0LL;
        v7 = (__int64 *)*v7;
      }
      while ( v7 );
      if ( v8 )
      {
        *v5 = (__int64 *)*v7;
        *(_DWORD *)(a2 + 96) = 0;
        v9 = v8 + 1;
        if ( v9 )
        {
          do
          {
            v10 = v9;
            v9 = (_QWORD *)*v9;
            v11 = (void **)(v10 - 1);
            if ( v11[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(v11, 0);
            ++*(_DWORD *)(a2 + 96);
          }
          while ( v9 );
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
