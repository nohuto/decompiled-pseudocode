/*
 * XREFs of RtlTraceDatabaseLock @ 0x14028EC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14028ECDC (RtlpTraceDatabaseAcquireLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseLock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseAcquireLock(Database);
}
