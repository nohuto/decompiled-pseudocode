/*
 * XREFs of ZwLockRegistryKey @ 0x1401A9580
 * Callers:
 *     NtLockProductActivationKeys @ 0x14063B550 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x140655D50 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
