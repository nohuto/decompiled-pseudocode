/*
 * XREFs of MiWakeModifiedPageWriter @ 0x140227290
 * Callers:
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x1400F04F8 (MiAdjustModifiedPageLoad.c)
 *     MiObtainFreePages @ 0x14021D8D8 (MiObtainFreePages.c)
 *     MiFlushAllHintedStorePages @ 0x1402258B8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140225AB0 (MiFlushAllPagesWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  _SINGLE_LIST_ENTRY *v3; // r8
  __int64 v4; // r9

  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 676) )
      KeSetEvent((PRKEVENT)(a1 + 680), 0, 0);
    if ( *(_DWORD *)(a1 + 704) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 928), 18, v3, v4);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 936));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 712) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 720), 0, 0);
}
