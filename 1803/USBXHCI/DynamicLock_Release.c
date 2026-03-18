/*
 * XREFs of DynamicLock_Release @ 0x1C003E42C
 * Callers:
 *     Command_ControllerResetPostReset @ 0x1C0003270 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C0003424 (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C00037AC (Command_FailAllCommands.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003908 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C0003D70 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C00046A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0007804 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0008308 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     Controller_Start @ 0x1C0009800 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0009B90 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C000A3E0 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000B0B0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C000B9D0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C000C800 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Endpoint_Disable @ 0x1C00110F8 (Endpoint_Disable.c)
 *     RootHub_ClearPortResumeTime @ 0x1C0019894 (RootHub_ClearPortResumeTime.c)
 *     RootHub_D0Entry @ 0x1C00198E4 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C0019A30 (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0019C90 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0019ED0 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C001A260 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001A594 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001A77C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_SetPortResumeTime @ 0x1C001AF94 (RootHub_SetPortResumeTime.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001B250 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C001E928 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001EB10 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001EF70 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 */

__int64 __fastcall DynamicLock_Release(__int64 a1)
{
  if ( *(_DWORD *)a1 != 1 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 8));
  if ( KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\dynamiclock.c",
      107);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 8));
}
