/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C0050284
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0050100 (RIMDirectStartStopDeviceRead.c)
 *     rimDoRimDevChangeCallback @ 0x1C0051ECC (rimDoRimDevChangeCallback.c)
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C0092B80 (RIMHandleTTMDeviceArrival.c)
 *     rimCompleteReads @ 0x1C0093A64 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0093BF8 (rimIssueReads.c)
 *     RIMRemoveDevOfInputType @ 0x1C0094240 (RIMRemoveDevOfInputType.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0094CB4 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDev @ 0x1C0094D18 (RIMOpenDev.c)
 *     rimProcessInput @ 0x1C0099D80 (rimProcessInput.c)
 *     RIMFillDeviceHealthInfo @ 0x1C0101170 (RIMFillDeviceHealthInfo.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C010F700 (RIMDeviceNotify.c)
 *     rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C011069C (rimDoScheduledSecondaryRimPnpWorkPending.c)
 *     rimDoSecondaryRimDevChangeCallback @ 0x1C01108CC (rimDoSecondaryRimDevChangeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 v4; // rdx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 184) & 0x800) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    if ( *(_BYTE *)(a1 + 48) != 3 )
      return 32LL;
    return 0LL;
  }
  v4 = *(_QWORD *)(a1 + 472);
  if ( *(_DWORD *)(v4 + 24) != 7 )
  {
    if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(*(_DWORD *)(v4 + 24) - 1) <= 3 )
      return 16LL;
    return 0LL;
  }
  return 8LL;
}
