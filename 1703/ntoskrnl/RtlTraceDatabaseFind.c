/*
 * XREFs of RtlTraceDatabaseFind @ 0x140240590
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14024065C (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalFind @ 0x140240874 (RtlpTraceDatabaseInternalFind.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140240928 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseFind(
        PRTL_TRACE_DATABASE Database,
        ULONG Count,
        PVOID *Trace,
        PRTL_TRACE_BLOCK *TraceBlock)
{
  BOOLEAN v8; // bl

  RtlpTraceDatabaseAcquireLock();
  v8 = RtlpTraceDatabaseInternalFind(Database, Count, Trace, TraceBlock);
  if ( v8 )
    ++*(_QWORD *)&Database->HashCounter[4];
  RtlpTraceDatabaseReleaseLock(Database);
  return v8;
}
