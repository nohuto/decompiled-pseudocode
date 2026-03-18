/*
 * XREFs of IopDisableCrashDump @ 0x14015A360
 * Callers:
 *     IoConfigureCrashDump @ 0x140159F78 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_14036E558 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_14036E558)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
