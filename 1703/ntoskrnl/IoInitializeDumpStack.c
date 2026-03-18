/*
 * XREFs of IoInitializeDumpStack @ 0x140136EC0
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x140407064 (PopRestoreHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_14036E548 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14036E548)(a1, 0LL);
  }
  return result;
}
