/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C0094468
 * Callers:
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010F07C (RIMDiscoverSpecificDevice.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C0094A7C (rimOnPnpRemoveComplete.c)
 *     RIMEndAllActiveContacts @ 0x1C0105DA0 (RIMEndAllActiveContacts.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 *     rimOnPnpQueryRemove @ 0x1C0110A20 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C0110AC0 (rimOnPnpRemoveCancelled.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v5; // r14d
  int v7; // eax

  v2 = 0;
  v5 = 1;
  if ( (*(_DWORD *)(a2 + 184) & 1) != 0 )
  {
    v2 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v2 >= 0 )
      rimDoRimDevChange(a1, a2, 2);
  }
  if ( (*(_DWORD *)(a2 + 184) & 2) != 0 )
    rimOnPnpQueryRemove(a1, a2);
  if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
  {
    rimOnPnpRemoveCancelled(a1, a2);
    *(_DWORD *)(a2 + 184) |= 1u;
    rimOnPnpArrived(a1, a2, -1LL);
  }
  if ( (*(_DWORD *)(a2 + 184) & 8) != 0 )
  {
    v2 = rimOnPnpRemoveComplete(a1, a2);
    if ( v2 >= 0 )
    {
      RIMLockExclusive(a1 + 696);
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
        RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 472), 0LL);
      v7 = *(_DWORD *)(a2 + 184);
      if ( (v7 & 0x1000) == 0
        && (v7 & 0x20) == 0
        && *(_BYTE *)(a2 + 48) != 3
        && ((v7 & 0x10000000) != 0 || *(_QWORD *)(a2 + 192) || (v7 & 0x20000000) != 0 || (v7 & 0x40000000) != 0) )
      {
        *(_DWORD *)(a2 + 200) |= 1u;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0x21u,
          (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
          a2);
        v5 = 0;
      }
      *(_QWORD *)(a1 + 704) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 696, 0LL);
      KeLeaveCriticalRegion();
      if ( v5 )
      {
        rimDoRimDevChange(a1, a2, 3);
        RIMFreeDev(a1, a2);
      }
    }
  }
  return (unsigned int)v2;
}
