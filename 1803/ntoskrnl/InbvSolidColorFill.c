/*
 * XREFs of InbvSolidColorFill @ 0x140230F60
 * Callers:
 *     DisplayBootBitmap @ 0x140183118 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x140487310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall InbvSolidColorFill(__int64 a1, __int64 a2, unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_1403CDD28;
  if ( qword_1403CDD28 )
  {
    result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_1403CDD28 + 32);
    if ( result )
      return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, a2, a3);
  }
  return result;
}
