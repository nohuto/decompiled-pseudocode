/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1402402A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14024065C (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1402406BC (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140240928 (RtlpTraceDatabaseReleaseLock.c)
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
