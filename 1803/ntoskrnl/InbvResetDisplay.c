/*
 * XREFs of InbvResetDisplay @ 0x140230ED0
 * Callers:
 *     PopShutdownHandler @ 0x140487310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_1403CDD28 && (v0 = *(__int64 (**)(void))(qword_1403CDD28 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
