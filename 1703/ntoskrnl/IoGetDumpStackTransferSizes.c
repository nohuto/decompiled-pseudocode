/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x14013F310
 * Callers:
 *     PopHiberInitializeResources @ 0x14057AC78 (PopHiberInitializeResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_14036E580;
    if ( qword_14036E580 )
      return (__int64 (*)(void))qword_14036E580();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
