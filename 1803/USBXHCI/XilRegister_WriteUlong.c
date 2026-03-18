/*
 * XREFs of XilRegister_WriteUlong @ 0x1C00197EC
 * Callers:
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0002380 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Controller_D0EntryRestoreState @ 0x1C0007284 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00075B4 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0007804 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_Start @ 0x1C0009800 (Controller_Start.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0009B90 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C000B0B0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C000B9D0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C000C800 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Register_BiosHandoff @ 0x1C0018848 (Register_BiosHandoff.c)
 *     Register_ControllerReset @ 0x1C0018A80 (Register_ControllerReset.c)
 *     Register_ControllerStop @ 0x1C0018D10 (Register_ControllerStop.c)
 *     Register_D0Entry @ 0x1C0018E34 (Register_D0Entry.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001924C (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0019328 (Register_SetClearSSICPortUnused.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C00193DC (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_D0Entry @ 0x1C00198E4 (RootHub_D0Entry.c)
 *     RootHub_D0Exit @ 0x1C0019A30 (RootHub_D0Exit.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0019C90 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DisableLPMForSlot @ 0x1C0019ED0 (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C001A260 (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001A594 (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001A77C (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C001AE58 (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001B250 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C001E928 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001EB10 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001EF70 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C003F788 (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C003F860 (XilCoreDeviceSlot_Initialize.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C005B15C (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 441) )
    return Register_WriteSecureMmio(a1, a2, 2LL, &v5);
  *a2 = a3;
  _InterlockedOr(v4, 0);
  return result;
}
