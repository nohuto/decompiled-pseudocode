/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x140256940
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseReleaseLock @ 0x140256C70 (RtlpTraceDatabaseReleaseLock.c)
 */

BOOLEAN __stdcall RtlTraceDatabaseUnlock(PRTL_TRACE_DATABASE Database)
{
  return RtlpTraceDatabaseReleaseLock(Database);
}
