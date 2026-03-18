/*
 * XREFs of RtlTraceDatabaseFind @ 0x1402568B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14025699C (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalFind @ 0x140256BBC (RtlpTraceDatabaseInternalFind.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x140256C70 (RtlpTraceDatabaseReleaseLock.c)
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
