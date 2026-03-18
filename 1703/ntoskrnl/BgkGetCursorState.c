/*
 * XREFs of BgkGetCursorState @ 0x140759BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1401EEB48 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1401EEB90 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetCursorState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_14036E478 + 48))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
