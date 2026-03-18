/*
 * XREFs of ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C009B230
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void EnsureRequiredApiSetExtensions(void)
{
  if ( (int)IsPushW32ThreadLockSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PushW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopW32ThreadLockSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopAndFreeW32ThreadLockSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopAndFreeAlwaysW32ThreadLockSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeAlwaysW32ThreadLock", 0LL, 0LL);
  if ( (int)IsCleanupW32ThreadLocksSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"CleanupW32ThreadLocks", 0LL, 0LL);
  if ( (int)IsxxxUnlockMenuStateSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxUnlockMenuState", 0LL, 0LL);
  if ( (int)IsHasHidTableSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"HasHidTable", 0LL, 0LL);
  if ( (int)IsDbgLockQCursorSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"DbgLockQCursor", 0LL, 0LL);
  if ( (int)IsxxxSystemParametersInfoSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxSystemParametersInfo", 0LL, 0LL);
}
