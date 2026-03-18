/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C0075AA0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0074DF0 (MultiUserNtGreCleanup.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0075460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0075CD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
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
