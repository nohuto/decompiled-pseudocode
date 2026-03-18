/*
 * XREFs of BgkSetTextColor @ 0x1402316B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x140231778 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_1403CDD38 + 16))(&Palette[4 * v1], 0LL);
    ExReleaseRundownProtection(&stru_14039BCA8);
  }
  return 0LL;
}
