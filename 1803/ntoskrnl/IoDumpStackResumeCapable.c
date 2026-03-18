/*
 * XREFs of IoDumpStackResumeCapable @ 0x14014F53C
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_1403CDE28 )
      return ((__int64 (*)(void))qword_1403CDE28)();
  }
  return result;
}
