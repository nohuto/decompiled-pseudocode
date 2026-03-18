/*
 * XREFs of InbvGetDisplayState @ 0x140230DF4
 * Callers:
 *     FinalizeBootLogo @ 0x14023102C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x140231080 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1402311C0 (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_1403CDD28 && (v0 = *(__int64 (**)(void))(qword_1403CDD28 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
