/*
 * XREFs of ndisStartNsiClient @ 0x1C00136BC
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0012D10 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 */

__int64 ndisStartNsiClient()
{
  int v0; // ebx
  _QWORD v2[10]; // [rsp+20h] [rbp-50h] BYREF

  LODWORD(v2[0]) = 0;
  memset(&v2[1], 0, 0x40uLL);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_(31LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids);
  LODWORD(v2[0]) = 0;
  v2[1] = &NPI_MS_NDIS_MODULEID;
  LOBYTE(v2[4]) = 1;
  v2[3] = &ndisNsiClientParameterChangeHandler;
  LODWORD(v2[2]) = 7;
  v2[5] = 7LL;
  v2[8] = &ndisNsiClientCompartmentChangeNotificationHandle;
  v0 = NsiRegisterChangeNotificationEx(v2);
  if ( v0 >= 0 )
  {
    LODWORD(v2[2]) = 6;
    v2[5] = 6LL;
    v2[8] = &ndisNsiClientNetworkChangeNotificationHandle;
    v0 = NsiRegisterChangeNotificationEx(v2);
    if ( v0 >= 0 )
    {
      LODWORD(v2[2]) = 1;
      v2[8] = &ndisNsiClientInterfaceEnumChangeNotificationHandle;
      v2[5] = 1LL;
      v0 = NsiRegisterChangeNotificationEx(v2);
      if ( v0 >= 0 )
      {
        LODWORD(v2[2]) = 0;
        v2[5] = 0LL;
        v2[8] = &ndisNsiClientInterfaceChangeNotificationHandle;
        v0 = NsiRegisterChangeNotificationEx(v2);
      }
    }
  }
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_d(32LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (unsigned int)v0);
  return (unsigned int)v0;
}
