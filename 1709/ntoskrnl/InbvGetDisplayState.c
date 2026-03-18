/*
 * XREFs of InbvGetDisplayState @ 0x1401F38C4
 * Callers:
 *     FinalizeBootLogo @ 0x1401F3AFC (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1401F3B50 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1401F3C90 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140389EF8 && (v0 = *(__int64 (**)(void))(qword_140389EF8 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
