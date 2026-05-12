/*
 * XREFs of StorPortAdapterIdleCondition @ 0x1C001CED0
 * Callers:
 *     <none>
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1C0011DCC (RaidPauseAdapterQueue.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C001CF68 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     Template_pqq @ 0x1C002FCA4 (Template_pqq.c)
 */

__int64 __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // ecx

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    Template_pqq(
      a1,
      (unsigned int)&EventAdapterIdleConditionStart,
      0,
      **(_QWORD **)(a1 + 5088),
      *(_DWORD *)(a1 + 56),
      a2);
  *(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) &= ~1u;
  RaidPauseAdapterQueue(a1);
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 8) )
    RaidAdapterSendPoFxActiveToMiniport(a1, a2, 0LL);
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 5088), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      return Template_pqq(
               v5,
               (unsigned int)&EventAdapterIdleConditionStop,
               0,
               **(_QWORD **)(a1 + 5088),
               *(_DWORD *)(a1 + 56),
               a2);
  }
  return result;
}
