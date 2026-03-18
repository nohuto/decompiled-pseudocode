/*
 * XREFs of IoInitializeDumpStack @ 0x14014F508
 * Callers:
 *     PopRestoreHiberContext @ 0x1404734E4 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_1403CDDF8 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1403CDDF8)(a1, 0LL);
  }
  return result;
}
