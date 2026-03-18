/*
 * XREFs of BgkSolidColorFill @ 0x1401EEAD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401EEB48 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_14036E478 + 16))(0LL, &Palette[4 * a5]);
      (*(void (**)(void))(qword_14036E478 + 8))();
      ExReleaseRundownProtection(&stru_140340058);
    }
  }
}
