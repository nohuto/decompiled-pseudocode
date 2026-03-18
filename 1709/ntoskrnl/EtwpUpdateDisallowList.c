/*
 * XREFs of EtwpUpdateDisallowList @ 0x140743F50
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 * Callees:
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpUpdateDisallowedGuids @ 0x140751C2C (EtwpUpdateDisallowedGuids.c)
 */

__int64 __fastcall EtwpUpdateDisallowList(__int64 a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned int *v7; // rdi
  unsigned int updated; // ebx

  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v7 = (unsigned int *)v6;
  if ( v6 )
  {
    updated = EtwpUpdateDisallowedGuids(v6, a3, a4);
    EtwpReleaseLoggerContext(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return updated;
}
