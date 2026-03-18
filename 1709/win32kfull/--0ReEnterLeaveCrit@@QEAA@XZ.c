/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4
 * Callers:
 *     UserJobCallout @ 0x1C008CB00 (UserJobCallout.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C008DDE0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C008DE84 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ParseDesktop @ 0x1C008E338 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C008E480 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C008E520 (MapDesktop.c)
 *     FreeWindowStation @ 0x1C00C49E0 (FreeWindowStation.c)
 *     DestroyWindowStation @ 0x1C0107840 (DestroyWindowStation.c)
 *     FreeDesktop @ 0x1C0123240 (FreeDesktop.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C01236D0 (EditionIsUsermodeRIMAccessAllowed.c)
 *     UserBeep @ 0x1C01A1E74 (UserBeep.c)
 *     ProcessHidInputViaRim @ 0x1C01AB5BC (ProcessHidInputViaRim.c)
 *     xxxProcessHidInput @ 0x1C01B6F40 (xxxProcessHidInput.c)
 *     UserRedrawDesktop @ 0x1C020CFB4 (UserRedrawDesktop.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020D430 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 *     UserKillTimer @ 0x1C0212D48 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C0212D98 (UserSetTimer.c)
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
