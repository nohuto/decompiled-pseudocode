/*
 * XREFs of StorPortAdapterActiveCondition @ 0x1C001CE20
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C0011918 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00119A4 (RaidResumeAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001CF68 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     Template_pqq @ 0x1C002FCA4 (Template_pqq.c)
 */

void __fastcall StorPortAdapterActiveCondition(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  int v5; // ecx
  KIRQL v6; // bl

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    Template_pqq(
      a1,
      (unsigned int)&EventAdapterActiveConditionStart,
      0,
      **(_QWORD **)(a1 + 5088),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) |= 1u;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
  {
    LOBYTE(v4) = 1;
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, v4);
  }
  if ( !(unsigned int)RaidResumeAdapterQueue(a1) )
  {
    v6 = KfRaiseIrql(2u);
    RaidAdapterRestartQueues(a1);
    KeLowerIrql(v6);
  }
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_pqq(
        v5,
        (unsigned int)&EventAdapterActiveConditionStop,
        0,
        **(_QWORD **)(a1 + 5088),
        *(_DWORD *)(a1 + 56),
        a2);
  }
}
