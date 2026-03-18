/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C0037D40
 * Callers:
 *     zzzDestroyQueue @ 0x1C004A190 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0067500 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UnlockQueue @ 0x1C009F900 (UnlockQueue.c)
 *     UserDeleteW32Thread @ 0x1C00D8150 (UserDeleteW32Thread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32FreeToPagedLookasideList(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = IsWin32FreeToPagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32FreeToPagedLookasideListImpl(a1, a2);
  return result;
}
