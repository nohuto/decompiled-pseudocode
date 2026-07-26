/*
 * XREFs of ndisPnPCancelRemoveDevice @ 0x1C00ECB2C
 * Callers:
 *     ndisPnPCancelStopDevice @ 0x1C00ECBC4 (ndisPnPCancelStopDevice.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00EDE10 (ndisPnPIrpCancelRemove.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C261C (ndisInitializeNetPnPEvent.c)
 */

void __fastcall ndisPnPCancelRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+20h] [rbp-C8h] BYREF
  int v3; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x57u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a1);
  ndisInitializeNetPnPEvent(&v2, 0LL);
  v3 = 3;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v2);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x58u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a1);
}
