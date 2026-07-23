/*
 * XREFs of WheapWorkQueueAddItem @ 0x140260714
 * Callers:
 *     WheapReportBootError @ 0x14025F2DC (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14025F39C (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x14025F520 (WheaReportHwError.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x1400225E0 (ExInterlockedInsertTailList.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() > 2u )
      KiInsertQueueDpc(a1 + 32, 0LL, 0LL, 0LL, 0);
    else
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
}
