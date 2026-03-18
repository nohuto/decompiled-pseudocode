/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x1C001DAF0
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhSshResumePort @ 0x1C00028AC (UsbhSshResumePort.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0003480 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Cold @ 0x1C00050E0 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C000550C (UsbhFdoColdStartCheckPort.c)
 *     UsbhSshResumeUpstream @ 0x1C00059F4 (UsbhSshResumeUpstream.c)
 *     UsbhSshPropagateResume @ 0x1C0006014 (UsbhSshPropagateResume.c)
 *     UsbhFdoColdStartPdo @ 0x1C0007280 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x1C00079C0 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhReset1Complete @ 0x1C00092A0 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0017140 (UsbhArmHubForWakeDetect.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C001EA50 (UsbhGetAcpiPortAttributes.c)
 *     UsbhFdoPower_WaitWake @ 0x1C001F5D0 (UsbhFdoPower_WaitWake.c)
 *     UsbhGetDeviceInformation @ 0x1C0022A08 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00267A8 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x1C0027068 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046A38 (UsbhFdoSetD0Warm.c)
 *     UsbhQueueHardReset @ 0x1C0047A10 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x1C0047DC4 (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0051900 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDevice @ 0x1C0052320 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0052400 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C0052560 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1C00528C0 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C00529A0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0052B00 (UsbhReset2Timeout.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp+1Fh] BYREF

  if ( dword_1C006A650 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v6 = *(_DWORD **)(a1 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v6 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v6);
    if ( a3 )
    {
      v8 = *a3;
    }
    else if ( !a2 || !g_IoGetActivityIdIrp || (int)g_IoGetActivityIdIrp(a2, &v8) < 0 )
    {
      v7 = 0LL;
LABEL_8:
      UsbhEtwWrite(a4, v7);
      return;
    }
    v7 = (const GUID *)&v8;
    goto LABEL_8;
  }
}
