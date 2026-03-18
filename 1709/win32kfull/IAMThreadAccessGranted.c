/*
 * XREFs of IAMThreadAccessGranted @ 0x1C005EB84
 * Callers:
 *     NtUserSendEventMessage @ 0x1C000AD90 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C000C1D0 (NtUserSetActivationFilter.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0042E30 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserRegisterHotKey @ 0x1C0052CC0 (NtUserRegisterHotKey.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C005EAC4 (ValidateHwndIAMComponetUIAware.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0084EB0 (_GetWindowTrackInfoAsync.c)
 *     _DeferWindowPosAndBand @ 0x1C009ABD8 (_DeferWindowPosAndBand.c)
 *     NtUserPostMessage @ 0x1C00ABE80 (NtUserPostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00CC03C (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     _PostTransformableMessageIL @ 0x1C00CC8E0 (_PostTransformableMessageIL.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D6230 (_RegisterWindowArrangementCallout.c)
 *     ValidateHwndIAM @ 0x1C010E92C (ValidateHwndIAM.c)
 *     _AllowSetForegroundWindow @ 0x1C0110E60 (_AllowSetForegroundWindow.c)
 *     _EnableShellWindowManagementBehavior @ 0x1C0125200 (_EnableShellWindowManagementBehavior.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01B4F90 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B5244 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01E3700 (NtUserClearForeground.c)
 *     NtUserSetFallbackForeground @ 0x1C01EB6C0 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C01EC0C0 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowShowState @ 0x1C01EC4F0 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01ED2B0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C005EBB4 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 432);
}
