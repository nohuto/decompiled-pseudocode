/*
 * XREFs of IopDisableCrashDump @ 0x14017E49C
 * Callers:
 *     IoConfigureCrashDump @ 0x14017E260 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_1403CDE08 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_1403CDE08)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
