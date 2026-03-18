/*
 * XREFs of XilRegister_ReadUlong @ 0x1C001F6D0
 * Callers:
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0002C30 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002D70 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_HandleResumedPorts @ 0x1C00030F0 (RootHub_HandleResumedPorts.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0003260 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0004AA0 (RootHub_UcxEvtGetPortStatus.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0006048 (Register_SetClearSSICPortUnused.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0006190 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0006330 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Controller_Start @ 0x1C0006440 (Controller_Start.c)
 *     Register_D0Entry @ 0x1C0006D68 (Register_D0Entry.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0007B20 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Controller_D0EntryRestoreState @ 0x1C0010234 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00104A4 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C00106F8 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C0010B30 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0012488 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0013960 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00142C0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0014470 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Register_FindFirstExtendedCapability @ 0x1C001F2D4 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C001F340 (Register_FindNextExtendedCapability.c)
 *     Register_GetAllExtendedCapability @ 0x1C001F3A4 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C001F4A4 (Register_GetExtendedCapabilityTotalSize.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001F548 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C001F628 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001F83C (RootHub_DisableLPMForSlot.c)
 *     RootHub_DumpPortData @ 0x1C001F9CC (RootHub_DumpPortData.c)
 *     RootHub_ForceU0AndWait @ 0x1C001FBCC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001FF3C (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0020124 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x1C00202E0 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     RootHub_Read30PortSpeeds @ 0x1C002037C (RootHub_Read30PortSpeeds.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C002071C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C0021100 (RootHub_UcxEvtGetPortErrorCount.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C00214D8 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00216C0 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C00572F0 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 *     Register_ParseCapabilityRegister @ 0x1C005D19C (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C005D868 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C005E13C (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x1C005FBCC (DmaEnabler_Create.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadUlong(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 441LL) )
    return *a2;
  Register_ReadSecureMmio(a1, (int)a2, 2, 1, &v3);
  return v3;
}
