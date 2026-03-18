/*
 * XREFs of InbvSetTextColor @ 0x1401F3A00
 * Callers:
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 InbvSetTextColor()
{
  __int64 (*v0)(void); // rax

  if ( qword_140389EF8 && (v0 = *(__int64 (**)(void))(qword_140389EF8 + 80)) != 0LL )
    return v0();
  else
    return 0xFFFFFFFFLL;
}
