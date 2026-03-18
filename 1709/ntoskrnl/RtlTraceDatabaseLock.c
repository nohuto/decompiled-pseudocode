/*
 * XREFs of RtlTraceDatabaseLock @ 0x140256920
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14025699C (RtlpTraceDatabaseAcquireLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseLock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseAcquireLock(Database);
}
