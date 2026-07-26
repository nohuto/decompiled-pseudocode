/*
 * XREFs of ndisPnPQueryRemoveDevice @ 0x1C00B4124
 * Callers:
 *     ndisPnPIrpQueryRemove @ 0x1C00B4060 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPQueryStopDevice @ 0x1C010F4F0 (ndisPnPQueryStopDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00B0E0C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C261C (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPQueryRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  _BYTE v4[8]; // [rsp+20h] [rbp-C8h] BYREF
  int v5; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x55u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a1, a1->UserModeOpenReferences);
  if ( (a1->Flags & 0x40000000) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    ndisInitializeNetPnPEvent(v4, 0LL);
    v5 = 2;
    v2 = ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, (__int64)v4);
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x56u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, (__int64)a1, v2);
  return v2;
}
