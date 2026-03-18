/*
 * XREFs of InbvSolidColorFill @ 0x1401F3A30
 * Callers:
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x14043A310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall InbvSolidColorFill(__int64 a1, __int64 a2, unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_140389EF8;
  if ( qword_140389EF8 )
  {
    result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_140389EF8 + 32);
    if ( result )
      return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, a2, a3);
  }
  return result;
}
