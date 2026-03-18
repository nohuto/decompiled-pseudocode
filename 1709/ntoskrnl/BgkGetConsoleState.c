/*
 * XREFs of BgkGetConsoleState @ 0x1407D2CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401F4248 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401F4290 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_140389F08 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
