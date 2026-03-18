/*
 * XREFs of BgkDisplayStringEx @ 0x1401F4064
 * Callers:
 *     BgkDisplayString @ 0x1401F3FB0 (BgkDisplayString.c)
 *     NtDisplayString @ 0x140756250 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     HeadlessDispatch @ 0x140146130 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401F4248 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x1407D09D0 (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  bool v4; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)BgkpAcquireConsole() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(23LL, (__int64)a1, 2 * v3 + 2, 0LL, 0LL);
  if ( byte_140389F21 || byte_140389F18 )
  {
    byte_140389F21 = 0;
    byte_140389F18 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140389F08 + 24))(a1) >= 0;
  ExReleaseRundownProtection_0(&stru_1403586B8);
  return v4;
}
