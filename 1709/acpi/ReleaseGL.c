/*
 * XREFs of ReleaseGL @ 0x1C005DBEC
 * Callers:
 *     ParseAcquire @ 0x1C0019550 (ParseAcquire.c)
 *     ParseRelease @ 0x1C00196E0 (ParseRelease.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ghGlobalLock(5LL, 1LL, qword_1C007A028);
  return result;
}
