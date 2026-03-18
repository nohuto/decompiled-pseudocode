/*
 * XREFs of InbvReleaseLock @ 0x1401F3968
 * Callers:
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x1401F3AFC (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1401F3B50 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140389EF8;
  if ( qword_140389EF8 )
  {
    result = *(__int64 (**)(void))(qword_140389EF8 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
