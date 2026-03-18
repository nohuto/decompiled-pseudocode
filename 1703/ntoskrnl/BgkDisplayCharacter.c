/*
 * XREFs of BgkDisplayCharacter @ 0x140759AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401EEB48 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401EEB90 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x140755790 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_14036E351 || byte_14036E350 )
  {
    byte_14036E351 = 0;
    byte_14036E350 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_14036E478 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
