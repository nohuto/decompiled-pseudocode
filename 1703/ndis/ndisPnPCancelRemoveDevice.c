/*
 * XREFs of ndisPnPCancelRemoveDevice @ 0x1C00E031C
 * Callers:
 *     ndisPnPCancelStopDevice @ 0x1C00E03B4 (ndisPnPCancelStopDevice.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00E13D0 (ndisPnPIrpCancelRemove.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00B64CC (ndisInitializeNetPnPEvent.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00BBE98 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 */

void __fastcall ndisPnPCancelRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 v2; // [rsp+20h] [rbp-C8h] BYREF
  int v3; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x53u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)a1);
  ndisInitializeNetPnPEvent(&v2, 0LL);
  v3 = 3;
  ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)&v2);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x54u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)a1);
}
