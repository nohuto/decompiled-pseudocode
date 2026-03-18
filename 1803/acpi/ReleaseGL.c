/*
 * XREFs of ReleaseGL @ 0x1C0047D28
 * Callers:
 *     AccFieldUnit @ 0x1C004C040 (AccFieldUnit.c)
 *     ParseAcquire @ 0x1C0054260 (ParseAcquire.c)
 *     ParseRelease @ 0x1C0056060 (ParseRelease.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))ghGlobalLock)(5LL, 1LL, qword_1C00685F8);
  return result;
}
