/*
 * XREFs of Win32UAFMFreePagedLookasideList @ 0x1C00E7490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32UAFMFreePagedLookasideList(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = IsWin32UAFMFreePagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32UAFMFreePagedLookasideListImpl(a1, a2);
  return result;
}
