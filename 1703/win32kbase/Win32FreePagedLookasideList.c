/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C0068030
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0067500 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C0067BC4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32FreePagedLookasideList(__int64 a1)
{
  __int64 result; // rax

  result = IsWin32FreePagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32FreePagedLookasideListImpl(a1);
  return result;
}
