/*
 * XREFs of SepAuditFailedRaisedIrql @ 0x1402A1A08
 * Callers:
 *     SepAdtLogAuditRecord @ 0x14017FF54 (SepAdtLogAuditRecord.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
 */

void __fastcall SepAuditFailedRaisedIrql(__int64 a1)
{
  if ( SepCrashOnAuditFail )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      SepAdtCrashOnAuditFailWorkItem.List.Flink = 0LL;
      SepAdtCrashOnAuditFailWorkItem.WorkerRoutine = (void (__fastcall *)(void *))SepAuditFailed;
      SepAdtCrashOnAuditFailWorkItem.Parameter = (void *)(int)a1;
      ExQueueWorkItem(&SepAdtCrashOnAuditFailWorkItem, HyperCriticalWorkQueue);
    }
    else
    {
      SepAuditFailed(a1);
    }
  }
}
