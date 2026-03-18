/*
 * XREFs of IopDisableCrashDump @ 0x14014FB84
 * Callers:
 *     IoConfigureCrashDump @ 0x14014F6E4 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_140389FD8 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_140389FD8)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
