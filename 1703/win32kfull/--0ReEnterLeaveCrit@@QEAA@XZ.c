/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528
 * Callers:
 *     UserJobCallout @ 0x1C001A230 (UserJobCallout.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C001ACC0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C001AD5C (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ParseDesktop @ 0x1C001B188 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C001B2D0 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C001B370 (MapDesktop.c)
 *     FreeWindowStation @ 0x1C00ADD90 (FreeWindowStation.c)
 *     DestroyWindowStation @ 0x1C00FA500 (DestroyWindowStation.c)
 *     FreeDesktop @ 0x1C0119800 (FreeDesktop.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C011A530 (EditionIsUsermodeRIMAccessAllowed.c)
 *     ProcessHidInputViaRim @ 0x1C01A821C (ProcessHidInputViaRim.c)
 *     xxxProcessHidInput @ 0x1C01B3FC0 (xxxProcessHidInput.c)
 *     StartDeviceRead @ 0x1C01BA4BC (StartDeviceRead.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020A28C (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 *     UserKillTimer @ 0x1C0211834 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C0211884 (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C024F60C (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
    EnterCrit(0LL, 1LL);
  return this;
}
