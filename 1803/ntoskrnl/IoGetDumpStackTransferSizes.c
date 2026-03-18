/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x1401577B4
 * Callers:
 *     PopHiberInitializeResources @ 0x1405EFC6C (PopHiberInitializeResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_1403CDE30;
    if ( qword_1403CDE30 )
      return (__int64 (*)(void))qword_1403CDE30();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
