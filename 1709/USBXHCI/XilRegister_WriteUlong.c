/*
 * XREFs of XilRegister_WriteUlong @ 0x1C001F7B0
 * Callers:
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0002C30 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002D70 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0003260 (RootHub_UcxEvtSetPortFeature.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0006048 (Register_SetClearSSICPortUnused.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0006330 (RootHub_DetectAndAcknowledgePortResume.c)
 *     Controller_Start @ 0x1C0006440 (Controller_Start.c)
 *     Register_D0Entry @ 0x1C0006D68 (Register_D0Entry.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0007B20 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     Controller_D0EntryRestoreState @ 0x1C0010234 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C00104A4 (Controller_D0ExitSaveState.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C00106F8 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0012488 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0013960 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C00142C0 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0014470 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001F548 (Register_SaveRestoreCHTNonArchitecturalRegisters.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C001F628 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     RootHub_DisableLPMForSlot @ 0x1C001F83C (RootHub_DisableLPMForSlot.c)
 *     RootHub_ForceU0AndWait @ 0x1C001FBCC (RootHub_ForceU0AndWait.c)
 *     RootHub_ForceU3 @ 0x1C001FF3C (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0020124 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C002071C (RootHub_RestoreU1U2Timeouts.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C00214D8 (RootHub_Update20HardwareLpmParameters.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C00216C0 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilCoreCommand_DirectWriteDoorbell @ 0x1C003FFB0 (XilCoreCommand_DirectWriteDoorbell.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C004108C (XilCoreDeviceSlot_FreeResources.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
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
