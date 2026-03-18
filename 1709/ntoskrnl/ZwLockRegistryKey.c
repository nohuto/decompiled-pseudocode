/*
 * XREFs of ZwLockRegistryKey @ 0x14017F960
 * Callers:
 *     NtLockProductActivationKeys @ 0x1405CD0B0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1405F30A0 (SepZwLockRegistryKey.c)
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
