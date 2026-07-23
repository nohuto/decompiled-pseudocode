/*
 * XREFs of ZwLockRegistryKey @ 0x14017FFC0
 * Callers:
 *     NtLockProductActivationKeys @ 0x1405AF814 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1405D6620 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
