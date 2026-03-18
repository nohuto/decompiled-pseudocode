/*
 * XREFs of InbvSetScrollRegion @ 0x1401F39D0
 * Callers:
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x14043A310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetScrollRegion())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140389EF8;
  if ( qword_140389EF8 )
  {
    result = *(__int64 (**)(void))(qword_140389EF8 + 72);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
