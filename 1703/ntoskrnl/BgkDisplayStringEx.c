/*
 * XREFs of BgkDisplayStringEx @ 0x1401EE964
 * Callers:
 *     BgkDisplayString @ 0x1401EE8B0 (BgkDisplayString.c)
 *     NtDisplayString @ 0x140716B30 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     HeadlessDispatch @ 0x140153FA0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401EEB48 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x140755790 (BgDisplayFade.c)
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
  HeadlessDispatch(0x17u, (__int64)a1, 2 * v3 + 2, 0LL, 0LL);
  if ( byte_14036E351 || byte_14036E350 )
  {
    byte_14036E351 = 0;
    byte_14036E350 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_14036E478 + 24))(a1) >= 0;
  ExReleaseRundownProtection(&stru_140340058);
  return v4;
}
