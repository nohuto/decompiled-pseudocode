/*
 * XREFs of MiWakeModifiedPageWriter @ 0x14003BB18
 * Callers:
 *     MiFlushAllHintedStorePages @ 0x140004DF0 (MiFlushAllHintedStorePages.c)
 *     MiAdjustModifiedPageLoad @ 0x1400840D0 (MiAdjustModifiedPageLoad.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiFlushAllPagesWorker @ 0x14013E0D8 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x140215244 (MiObtainFreePages.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 724) )
      KeSetEvent((PRKEVENT)(a1 + 728), 0, 0);
    if ( *(_DWORD *)(a1 + 752) != 18 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 984)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 976), 18LL);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 984));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 760) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 768), 0, 0);
}
