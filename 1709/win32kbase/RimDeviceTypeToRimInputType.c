/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C0018F24
 * Callers:
 *     rimCompleteReads @ 0x1C0009CF4 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C0009E88 (rimIssueReads.c)
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C000BE84 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDev @ 0x1C000C32C (RIMOpenDev.c)
 *     RIMRemoveDevOfInputType @ 0x1C000C5D4 (RIMRemoveDevOfInputType.c)
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0018DA0 (RIMDirectStartStopDeviceRead.c)
 *     rimDoRimDevChangeCallback @ 0x1C001AE20 (rimDoRimDevChangeCallback.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C009C380 (RIMHandleTTMDeviceArrival.c)
 *     rimProcessInput @ 0x1C00A4A80 (rimProcessInput.c)
 *     RIMFillDeviceHealthInfo @ 0x1C01018F0 (RIMFillDeviceHealthInfo.c)
 *     RIMDeviceNotify @ 0x1C010E070 (RIMDeviceNotify.c)
 *     rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C010F130 (rimDoScheduledSecondaryRimPnpWorkPending.c)
 *     rimDoSecondaryRimDevChangeCallback @ 0x1C010F35C (rimDoSecondaryRimDevChangeCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // ecx

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
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 24LL);
  if ( v4 != 7 )
  {
    if ( (unsigned int)(v4 - 5) <= 1 )
      return 4LL;
    if ( (unsigned int)(v4 - 1) <= 3 )
      return 16LL;
    return 0LL;
  }
  return 8LL;
}
