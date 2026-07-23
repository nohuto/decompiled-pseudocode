/*
 * XREFs of ZwLockProductActivationKeys @ 0x14017FFA0
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140808838 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
