/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1C0006B50
 * Callers:
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0006AD4 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     InitQEntryLookaside @ 0x1C01DD54C (InitQEntryLookaside.c)
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AllocPagedLookasideList(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  if ( (int)IsWin32AllocPagedLookasideListImplSupported() < 0 )
    return 0LL;
  else
    return Win32AllocPagedLookasideListImpl(a1, a2, a3, a4);
}
