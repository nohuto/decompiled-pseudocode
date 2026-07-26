/*
 * XREFs of ?NdisTraceLoggingDeviceStatusChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012D70
 * Callers:
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     ?NdisTraceLoggingDiscoverOperationalStatus@@YA?AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024044 (-NdisTraceLoggingDiscoverOperationalStatus@@YA-AW4_NDIS_TRACEFORMAT_OPERATIONAL_STATUS@@PEAU_NDI.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingDeviceStatusChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const GUID *v1; // r8
  LPCGUID v2; // r9
  int v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  const GUID *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider.LevelPlus1 > 5
    && (hProvider.KeywordAny & 0x200000000000LL) != 0
    && (hProvider.KeywordAll & 0x200000000000LL) == hProvider.KeywordAll )
  {
    v7 = 0;
    v10 = 0;
    v3 = NdisTraceLoggingDiscoverOperationalStatus(a1);
    v5 = &v3;
    v8 = v1 + 252;
    v6 = 4;
    v9 = 16;
    TlgWrite(&hProvider, &unk_1C0084036, v1, v2, 4u, &pData);
  }
}
