/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0038B8C
 * Callers:
 *     NtUserSendEventMessage @ 0x1C0005040 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0006CD0 (NtUserSetActivationFilter.c)
 *     _AllowSetForegroundWindow @ 0x1C00191D0 (_AllowSetForegroundWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0038ADC (ValidateHwndIAMComponetUIAware.c)
 *     ValidateHwndIAM @ 0x1C003AF20 (ValidateHwndIAM.c)
 *     _DeferWindowPosAndBand @ 0x1C00455E4 (_DeferWindowPosAndBand.c)
 *     NtUserPostMessage @ 0x1C0055CC0 (NtUserPostMessage.c)
 *     _GetWindowTrackInfoAsync @ 0x1C00B2F90 (_GetWindowTrackInfoAsync.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00B4718 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C00BA1B0 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserRegisterHotKey @ 0x1C00BCFA0 (NtUserRegisterHotKey.c)
 *     _PostTransformableMessageIL @ 0x1C00C8F84 (_PostTransformableMessageIL.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F66E0 (_RegisterWindowArrangementCallout.c)
 *     _EnableShellWindowManagementBehavior @ 0x1C011B330 (_EnableShellWindowManagementBehavior.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01B1DB0 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B21BC (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01D6F00 (NtUserClearForeground.c)
 *     NtUserSetFallbackForeground @ 0x1C01DF500 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C01DFF40 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowShowState @ 0x1C01E0370 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01E1140 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0038BBC (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 408);
}
