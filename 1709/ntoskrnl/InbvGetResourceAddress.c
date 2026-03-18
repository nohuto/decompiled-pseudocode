/*
 * XREFs of InbvGetResourceAddress @ 0x1401F38F8
 * Callers:
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x14043A310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 InbvGetResourceAddress()
{
  __int64 (*v0)(void); // rax

  if ( qword_140389EF8 && (v0 = *(__int64 (**)(void))(qword_140389EF8 + 128)) != 0LL )
    return v0();
  else
    return 0LL;
}
