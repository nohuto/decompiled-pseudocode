/*
 * XREFs of ndisRejectUnsupportedPMOffloads @ 0x1C00E0E74
 * Callers:
 *     ndisIndicatePMCapabilities @ 0x1C00DF3F0 (ndisIndicatePMCapabilities.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     NdisMIndicateStatusEx @ 0x1C0011180 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C00DF4B4 (ndisIsPMProtocolOffloadSupported.c)
 */

LONG __fastcall ndisRejectUnsupportedPMOffloads(char *MiniportAdapterHandle)
{
  __int64 i; // r8
  __int64 *v3; // r8
  int v4; // r9d
  int v5; // eax
  int v6; // edi
  int SetMiniport; // eax
  _DWORD v9[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v11[248]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v9[0] = 0;
  KeWaitForSingleObject(MiniportAdapterHandle + 3976, Executive, 0, 0, 0LL);
LABEL_2:
  v9[0] = 0;
  for ( i = *((_QWORD *)MiniportAdapterHandle + 122); i; i = *v3 )
  {
    if ( !ndisIsPMProtocolOffloadSupported(*(_DWORD *)(i + 60), (__int64)MiniportAdapterHandle) )
    {
      v5 = *((_DWORD *)v3 + 49);
      v9[0] = v5;
      v6 = *((_DWORD *)v3 + 11);
      if ( !v5 )
        return KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 3976), 0, 1, 0);
      if ( v5 == v4 )
      {
        if ( (unsigned __int8)byte_1C0098755 >= 2u )
          WPP_SF_d(0x7Cu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, v5);
      }
      else
      {
        memset(v11, 0, sizeof(v11));
        *(_DWORD *)&v11[88] |= 0x1800008u;
        *(_QWORD *)&v11[104] = &ndisIntReqGeneric;
        *(_DWORD *)v11 = 15466902;
        *(_QWORD *)&v11[40] = v9;
        *(_DWORD *)&v11[32] = -50265841;
        *(_DWORD *)&v11[4] = 1;
        *(_DWORD *)&v11[8] = v6;
        *(_DWORD *)&v11[48] = 4;
        SetMiniport = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, (struct _NDIS_OID_REQUEST *)v11, 0LL, 0LL);
        if ( !SetMiniport )
        {
          memset(&StatusIndication, 0, sizeof(StatusIndication));
          StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
          StatusIndication.StatusBuffer = v9;
          StatusIndication.SourceHandle = MiniportAdapterHandle;
          StatusIndication.StatusCode = 1073938514;
          StatusIndication.StatusBufferSize = 4;
          NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
          goto LABEL_2;
        }
        if ( (unsigned __int8)byte_1C0098755 >= 2u )
          WPP_SF_d(0x7Du, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, SetMiniport);
      }
      return KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 3976), 0, 1, 0);
    }
  }
  return KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 3976), 0, 1, 0);
}
