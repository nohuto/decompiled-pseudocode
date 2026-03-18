/*
 * XREFs of PopFxAddLogEntry @ 0x140069898
 * Callers:
 *     PoFxCompleteIdleCondition @ 0x140033820 (PoFxCompleteIdleCondition.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140068D70 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x140068E00 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400697F8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x140069984 (PopFxIdleWorker.c)
 *     PopDiagTraceIrpFinish @ 0x140144E20 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401450B0 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x140146604 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x1401467CC (PopFxAllocatePowerIrp.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x14014A2F0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteIdleState @ 0x14014AF30 (PoFxCompleteIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14014B18C (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14014B470 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140164134 (PopFxUpdateDeviceIdleTimer.c)
 *     PoFxSetComponentLatency @ 0x140165020 (PoFxSetComponentLatency.c)
 *     PoFxSetComponentResidency @ 0x140167970 (PoFxSetComponentResidency.c)
 *     PopFxCompleteComponentPerfState @ 0x14022A7C8 (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14022B014 (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x14022C82C (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentWake @ 0x140231354 (PopDiagTraceFxComponentWake.c)
 *     PopFxTraceDeviceRegistration @ 0x140453DB0 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1405C41A0 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x1406CD5E0 (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x1406CE888 (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140069950 (KeGetCurrentProcessorNumberEx.c)
 */

void __fastcall PopFxAddLogEntry(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v7 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 656), 1u) % *(_DWORD *)(v4 + 640);
      v8 = *(_QWORD *)(v4 + 648);
      v9 = 3 * v7;
      *(_QWORD *)(v8 + 8 * v9) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v9 + 8) = a3;
      *(_BYTE *)(v8 + 8 * v9 + 9) = a2;
      *(_WORD *)(v8 + 8 * v9 + 10) = KeGetCurrentProcessorNumberEx(0LL);
      *(_WORD *)(v8 + 8 * v9 + 12) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_WORD *)(v8 + 8 * v9 + 14) = KeGetCurrentThread()[1].KernelStack;
      *(_QWORD *)(v8 + 8 * v9 + 16) = a4;
    }
  }
}
