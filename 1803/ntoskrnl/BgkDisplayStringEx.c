/*
 * XREFs of BgkDisplayStringEx @ 0x140231594
 * Callers:
 *     BgkDisplayString @ 0x1402314E0 (BgkDisplayString.c)
 *     NtDisplayString @ 0x1407BCD20 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     HeadlessDispatch @ 0x1401716E0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x140231778 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x14083B49C (BgDisplayFade.c)
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
  if ( byte_1403CDC2D || byte_1403CDC2C )
  {
    byte_1403CDC2D = 0;
    byte_1403CDC2C = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_1403CDD38 + 24))(a1) >= 0;
  ExReleaseRundownProtection(&stru_14039BCA8);
  return v4;
}
