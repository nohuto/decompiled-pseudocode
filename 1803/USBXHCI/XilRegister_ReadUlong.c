/*
 * XREFs of XilRegister_ReadUlong @ 0x1C0019708
 * Callers:
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0002380 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Controller_D0EntryRestoreState @ 0x1C0007284 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00075B4 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0007804 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0007D90 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_Start @ 0x1C0009800 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0009B90 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000B0B0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C000B9D0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C000C800 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Register_BiosHandoff @ 0x1C0018848 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C0018D10 (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C0018E34 (Register_D0Entry.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0018FD8 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C0019044 (Register_FindNextExtendedCapability.c)
 *     Register_GetAllExtendedCapability @ 0x1C00190A8 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C00191A8 (Register_GetExtendedCapabilityTotalSize.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001924C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0019328 (Register_SetClearSSICPortUnused.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C00193DC (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     Register_WaitForControllerReady @ 0x1C0019430 (Register_WaitForControllerReady.c)
 *     RootHub_D0Entry @ 0x1C00198E4 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C0019A30 (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0019C90 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0019ED0 (RootHub_DisableLPMForSlot.c)
 *     RootHub_DumpPortData @ 0x1C001A060 (RootHub_DumpPortData.c)
 *     RootHub_ForceU0AndWait @ 0x1C001A260 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001A594 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001A77C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C001AA4C (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     RootHub_Read30PortSpeeds @ 0x1C001AAE8 (RootHub_Read30PortSpeeds.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001AE58 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001B250 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C001C9C0 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C001CD00 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C001D540 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C001E928 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001EB10 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C001EDC0 (RootHub_WaitForResumeCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001EF70 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0036F04 (Wmi_CreateControllerCapabilities.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0054268 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 *     Register_ParseCapabilityRegister @ 0x1C005A510 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C005ABEC (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C005B498 (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C005CFB8 (DmaEnabler_Create.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C005AEA0 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUlong(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL) )
    return *a2;
  Register_ReadSecureMmio(a1, (int)a2, 2, 1, &v3);
  return v3;
}
