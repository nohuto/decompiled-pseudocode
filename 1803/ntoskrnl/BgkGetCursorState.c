/*
 * XREFs of BgkGetCursorState @ 0x14083F770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x140231778 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1402317C0 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetCursorState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_1403CDD38 + 48))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
