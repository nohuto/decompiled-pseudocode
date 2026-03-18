/*
 * XREFs of PopFxAddLogEntry @ 0x140077F7C
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140077A30 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x140077AC0 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140077EDC (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x140078330 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x1400C8140 (PoFxCompleteIdleCondition.c)
 *     PopDiagTraceIrpFinish @ 0x140166264 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1401666C8 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpStart @ 0x1401679AC (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x140167CD0 (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14016D564 (PopDiagTraceFxComponentIdleState.c)
 *     PoFxCompleteIdleState @ 0x14016D850 (PoFxCompleteIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140182F14 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140183690 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1401862C0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxCompleteComponentPerfState @ 0x140274F44 (PopFxCompleteComponentPerfState.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1402756D4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopPluginNotifyIdleState @ 0x1402771D8 (PopPluginNotifyIdleState.c)
 *     PopDiagTraceFxComponentLatency @ 0x14027C3D8 (PopDiagTraceFxComponentLatency.c)
 *     PopDiagTraceFxComponentResidency @ 0x14027C4C4 (PopDiagTraceFxComponentResidency.c)
 *     PopDiagTraceFxComponentWake @ 0x14027C5B0 (PopDiagTraceFxComponentWake.c)
 *     PopFxTraceDeviceRegistration @ 0x14052756C (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140644374 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x140767BCC (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x140769C48 (PopFxTracePerfRegistration.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140078030 (KeGetCurrentProcessorNumberEx.c)
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
      v7 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 736), 1u) % *(_DWORD *)(v4 + 720);
      v8 = *(_QWORD *)(v4 + 728);
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
