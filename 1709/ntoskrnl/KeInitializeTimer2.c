/*
 * XREFs of KeInitializeTimer2 @ 0x1400B2730
 * Callers:
 *     KiCompleteKernelInit @ 0x14042615C (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1404EB824 (NtCreateTimer2.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405BF808 (CmpInitDelayDerefKCBEngine.c)
 *     ExpWorkQueueManagerInitialize @ 0x1405DE038 (ExpWorkQueueManagerInitialize.c)
 *     PopInitializeTimer @ 0x1405E53BC (PopInitializeTimer.c)
 *     EtwpCoverageEnsureContext @ 0x1405E714C (EtwpCoverageEnsureContext.c)
 *     PopThermalZoneAdd @ 0x1407006D0 (PopThermalZoneAdd.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1400B274C (KiInitializeTimer2.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2();
}
