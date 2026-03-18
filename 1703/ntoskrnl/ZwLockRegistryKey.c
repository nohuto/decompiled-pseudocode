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
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
