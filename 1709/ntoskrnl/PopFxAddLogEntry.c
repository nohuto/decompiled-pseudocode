/*
 * XREFs of PopFxAddLogEntry @ 0x1400FDE88
 * Callers:
 *     PopDiagTraceIrpStart @ 0x1400B3A64 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x1400B420C (PopFxAllocatePowerIrp.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400FD900 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x1400FD990 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400FDDE8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x1400FE0E4 (PopFxIdleWorker.c)
 *     PopDiagTraceIrpFinish @ 0x140123260 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140123484 (PopDiagTraceFxDevicePowerState.c)
 *     PoFxCompleteIdleCondition @ 0x14012A750 (PoFxCompleteIdleCondition.c)
 *     PoFxCompleteIdleState @ 0x140131ED0 (PoFxCompleteIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140131F40 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140132270 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxSetComponentLatency @ 0x140147590 (PoFxSetComponentLatency.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1401550A4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140157B30 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxSetComponentResidency @ 0x14015C0F0 (PoFxSetComponentResidency.c)
 *     PopFxCompleteComponentPerfState @ 0x14023D99C (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14023E334 (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x14023FBEC (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentWake @ 0x140245BE0 (PopDiagTraceFxComponentWake.c)
 *     PopFxTraceDeviceRegistration @ 0x140554D94 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x1405D7C6C (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x14070383C (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x140705D98 (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1400FDF40 (KeGetCurrentProcessorNumberEx.c)
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
      *(_WORD *)(v8 + 8 * v9 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v8 + 8 * v9 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v8 + 8 * v9 + 16) = a4;
    }
  }
}
