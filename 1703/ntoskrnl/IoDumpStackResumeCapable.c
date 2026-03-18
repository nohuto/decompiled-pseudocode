/*
 * XREFs of IoDumpStackResumeCapable @ 0x140136E90
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_14036E578 )
      return ((__int64 (*)(void))qword_14036E578)();
  }
  return result;
}
