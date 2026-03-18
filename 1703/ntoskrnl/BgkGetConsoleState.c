/*
 * XREFs of BgkGetConsoleState @ 0x140759B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401EEB48 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401EEB90 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_14036E478 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
