/*
 * XREFs of IoInitializeDumpStack @ 0x1401F66E0
 * Callers:
 *     PopRestoreHiberContext @ 0x140434AE0 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140389FC8 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_140389FC8)(a1, 0LL);
  }
  return result;
}
