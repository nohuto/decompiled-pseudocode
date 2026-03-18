/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1401F3850
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1401F3B50 (InbvRotateGuiBootDisplay.c)
 *     PopShutdownHandler @ 0x14043A310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140389EF8 && (v0 = *(__int64 (**)(void))(qword_140389EF8 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
