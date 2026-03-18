/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x1401F6440
 * Callers:
 *     PopHiberInitializeResources @ 0x1406FBB38 (PopHiberInitializeResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_14038A000;
    if ( qword_14038A000 )
      return (__int64 (*)(void))qword_14038A000();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
