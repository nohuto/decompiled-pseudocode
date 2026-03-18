/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C003EB50
 * Callers:
 *     AllocQueue @ 0x1C0049F90 (AllocQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AllocateFromPagedLookasideList(__int64 a1)
{
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0 )
    return 0LL;
  else
    return Win32AllocateFromPagedLookasideListImpl(a1);
}
