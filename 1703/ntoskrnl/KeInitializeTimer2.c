/*
 * XREFs of KeInitializeTimer2 @ 0x14012A690
 * Callers:
 *     KiCompleteKernelInit @ 0x14041193C (KiCompleteKernelInit.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14055DBA0 (NtCreateTimer2.c)
 *     PopInitializeTimer @ 0x1405CEEDC (PopInitializeTimer.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405D4A90 (CmpInitDelayDerefKCBEngine.c)
 *     PopThermalZoneAdd @ 0x1405D6970 (PopThermalZoneAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return KiInitializeTimer2(a1, a2, a3, a4);
}
