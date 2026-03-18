/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x140041AE4
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400073B0 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140022A40 (KiReduceByEffectiveIdleSmtSet.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1400FC3E0 (KeRemovePriQueue.c)
 *     NtYieldExecution @ 0x140112EE0 (NtYieldExecution.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140120D30 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 *     KiStartDebugAccumulation @ 0x140203B6C (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 */

__int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3);
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v5;
}
