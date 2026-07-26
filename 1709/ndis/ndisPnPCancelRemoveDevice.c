/*
 * XREFs of ndisPnPCancelRemoveDevice @ 0x1C00EA1BC
 * Callers:
 *     ndisPnPCancelStopDevice @ 0x1C00EA254 (ndisPnPCancelStopDevice.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00EB270 (ndisPnPIrpCancelRemove.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00C4168 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C44BC (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPnPCancelRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+20h] [rbp-C8h] BYREF
  int v3; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x53u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)a1);
  ndisInitializeNetPnPEvent(&v2, 0LL);
  v3 = 3;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v2);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x54u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)a1);
}
