/*
 * XREFs of BgkDisplayCharacter @ 0x1407D2BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401F4248 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401F4290 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x1407D09D0 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140389F21 || byte_140389F18 )
  {
    byte_140389F21 = 0;
    byte_140389F18 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140389F08 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
