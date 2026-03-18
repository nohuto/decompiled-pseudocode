/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x14008D510
 * Callers:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400071FC (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400D2520 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x14011AE24 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiCompleteDirectSwitchThread @ 0x14011B418 (KiCompleteDirectSwitchThread.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x140202BF4 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiStartDebugAccumulation @ 0x140209E70 (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x14008D5D0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 */

unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  bool v10; // zf

  *(_BYTE *)(a1 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a1 + 23488);
  v8 = v7 + *(_QWORD *)(a2 + 72);
  v9 = v7 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v8;
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  *(_QWORD *)(a1 + 23488) = v6;
  v10 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v9;
  if ( !v10 )
    KiEndThreadAccountingPeriod(a1, a2);
  if ( a3 )
    *a3 = v6;
  KiStartThreadCycleAccumulation(a1, a2, 0LL);
  return v8;
}
