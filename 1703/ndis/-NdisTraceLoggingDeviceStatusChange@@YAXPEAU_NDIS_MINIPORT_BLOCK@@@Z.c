/*
 * XREFs of ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015968
 * Callers:
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0026B74 (-NdisTraceLoggingDiscoverOperationalStatus@@YA-AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDI.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceStatusChange(const struct _TlgProvider_t *a1)
{
  const GUID *v1; // r9
  LPCGUID v2; // r8
  int v3; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v5; // [rsp+60h] [rbp-48h]
  int v6; // [rsp+68h] [rbp-40h]
  int v7; // [rsp+6Ch] [rbp-3Ch]
  const GUID *v8; // [rsp+70h] [rbp-38h]
  int v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+7Ch] [rbp-2Ch]

  if ( (unsigned int)dword_1C0091010 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v7 = 0;
      v10 = 0;
      v3 = NdisTraceLoggingDiscoverOperationalStatus();
      v5 = &v3;
      v8 = v1 + 252;
      v6 = 4;
      v9 = 16;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C007F55E, v2, v1, 4u, &pData);
    }
  }
}
