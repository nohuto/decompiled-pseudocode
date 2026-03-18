/*
 * XREFs of ReleaseGL @ 0x1C005DDF0
 * Callers:
 *     ParseAcquire @ 0x1C00156F0 (ParseAcquire.c)
 *     ParseRelease @ 0x1C0015880 (ParseRelease.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ghGlobalLock(5LL, 1LL, qword_1C0077F68);
  return result;
}
