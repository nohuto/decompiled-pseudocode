/*
 * XREFs of KeInitializeTimer2 @ 0x140086040
 * Callers:
 *     KiCompleteKernelInit @ 0x14047AF10 (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x14052E3E4 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14052E740 (NtCreateTimer2.c)
 *     PopThermalZoneAdd @ 0x140626F60 (PopThermalZoneAdd.c)
 *     ExpWorkQueueManagerInitialize @ 0x1406476EC (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x14064C21C (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x14064D564 (EtwpCoverageEnsureContext.c)
 *     CmpInitDelayDerefKCBEngine @ 0x140654188 (CmpInitDelayDerefKCBEngine.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14008605C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
