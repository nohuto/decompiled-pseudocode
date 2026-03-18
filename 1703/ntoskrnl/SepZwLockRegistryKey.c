/*
 * XREFs of SepZwLockRegistryKey @ 0x1405D6620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall SepZwLockRegistryKey(HANDLE KeyHandle)
{
  return ZwLockRegistryKey(KeyHandle);
}
