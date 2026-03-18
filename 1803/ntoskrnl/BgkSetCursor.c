/*
 * XREFs of BgkSetCursor @ 0x14083F7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x140231778 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1402317C0 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_1403CDD38 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
