/*
 * XREFs of BgkSetTextColor @ 0x1401F4180
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401F4248 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140389F08 + 16))(&Palette[4 * v1], 0LL);
    ExReleaseRundownProtection_0(&stru_1403586B8);
  }
  return 0LL;
}
