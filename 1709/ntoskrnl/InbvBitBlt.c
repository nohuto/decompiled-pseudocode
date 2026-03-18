/*
 * XREFs of InbvBitBlt @ 0x1401F3818
 * Callers:
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x14043A310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (*InbvBitBlt())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140389EF8;
  if ( qword_140389EF8 )
  {
    result = *(__int64 (**)(void))(qword_140389EF8 + 96);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
