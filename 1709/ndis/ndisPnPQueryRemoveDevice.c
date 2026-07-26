/*
 * XREFs of ndisPnPQueryRemoveDevice @ 0x1C00AC300
 * Callers:
 *     ndisPnPIrpQueryRemove @ 0x1C00AC23C (ndisPnPIrpQueryRemove.c)
 *     ndisPnPQueryStopDevice @ 0x1C010D560 (ndisPnPQueryStopDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C00C4168 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C44BC (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPQueryRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  _BYTE v4[8]; // [rsp+20h] [rbp-C8h] BYREF
  int v5; // [rsp+28h] [rbp-C0h]

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x51u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)a1, a1->UserModeOpenReferences);
  if ( (a1->Flags & 0x40000000) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    ndisInitializeNetPnPEvent(v4, 0LL);
    v5 = 2;
    v2 = ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x52u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)a1, v2);
  return v2;
}
