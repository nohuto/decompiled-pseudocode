/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C000B9F4
 * Callers:
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010DFDC (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C000BEE8 (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 *     RIMEndAllActiveContacts @ 0x1C001B040 (RIMEndAllActiveContacts.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 *     rimOnPnpQueryRemove @ 0x1C010F4A8 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C010F548 (rimOnPnpRemoveCancelled.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // esi
  int v6; // ebp
  int v8; // edx
  int v9; // eax

  v2 = *(_DWORD *)(a2 + 184);
  v3 = 0;
  v6 = 1;
  if ( (v2 & 1) != 0 )
  {
    v3 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v3 >= 0 )
      rimDoRimDevChange(a1, a2, 2LL);
  }
  else
  {
    if ( (v2 & 2) != 0 )
      rimOnPnpQueryRemove();
    if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
    }
    if ( (*(_DWORD *)(a2 + 184) & 8) != 0 )
    {
      v3 = rimOnPnpRemoveComplete(a1, a2);
      if ( v3 >= 0 )
      {
        RIMLockExclusive(a1 + 696);
        if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 472), 0LL);
        v9 = *(_DWORD *)(a2 + 184);
        if ( (v9 & 0x1000) == 0
          && (v9 & 0x20) == 0
          && *(_BYTE *)(a2 + 48) != 3
          && ((v9 & 0x20000000) != 0 || *(_QWORD *)(a2 + 192) || (v9 & 0x40000000) != 0 || v9 < 0) )
        {
          *(_DWORD *)(a2 + 200) |= 1u;
          LOBYTE(v8) = 3;
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            20,
            33,
            (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
            a2);
          v6 = 0;
        }
        *(_QWORD *)(a1 + 704) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 696, 0LL);
        KeLeaveCriticalRegion();
        if ( v6 )
        {
          rimDoRimDevChange(a1, a2, 3LL);
          RIMFreeDev(a1, a2);
        }
      }
    }
  }
  return (unsigned int)v3;
}
