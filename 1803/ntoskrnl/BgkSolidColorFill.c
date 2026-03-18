/*
 * XREFs of BgkSolidColorFill @ 0x140231700
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x140231778 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_1403CDD38 + 16))(0LL, &Palette[4 * a5]);
      (*(void (**)(void))(qword_1403CDD38 + 8))();
      ExReleaseRundownProtection(&stru_14039BCA8);
    }
  }
}
