/*
 * XREFs of KiUpdateTotalCyclesCurrentThread @ 0x140060670
 * Callers:
 *     KeUpdateTotalCyclesCurrentThread @ 0x140002044 (KeUpdateTotalCyclesCurrentThread.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     KiCompleteDirectSwitchThread @ 0x140084F38 (KiCompleteDirectSwitchThread.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1400BAD90 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 *     KiStartDebugAccumulation @ 0x140247AA0 (KiStartDebugAccumulation.c)
 * Callees:
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
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
