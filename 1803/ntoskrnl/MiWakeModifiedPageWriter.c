/*
 * XREFs of MiWakeModifiedPageWriter @ 0x140081C4C
 * Callers:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiFlushAllHintedStorePages @ 0x14007FCDC (MiFlushAllHintedStorePages.c)
 *     MiAdjustModifiedPageLoad @ 0x140080BEC (MiAdjustModifiedPageLoad.c)
 *     MiFlushAllPagesWorker @ 0x14014D944 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x140259A20 (MiObtainFreePages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 676) )
      KeSetEvent((PRKEVENT)(a1 + 680), 0, 0);
    if ( *(_DWORD *)(a1 + 704) != 18 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 936)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 928), 18LL);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 936));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 712) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 720), 0, 0);
}
