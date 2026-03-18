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
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
