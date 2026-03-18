/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1402565C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14025699C (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140256A04 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140256C70 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseAdd(
        PRTL_TRACE_DATABASE Database,
        ULONG Count,
        PVOID *Trace,
        PRTL_TRACE_BLOCK *TraceBlock)
{
  RtlpTraceDatabaseAcquireLock();
  LOBYTE(TraceBlock) = RtlpTraceDatabaseInternalAdd(Database, Count, Trace, TraceBlock);
  RtlpTraceDatabaseReleaseLock(Database);
  return (unsigned __int8)TraceBlock;
}
