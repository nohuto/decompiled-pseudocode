/*
 * XREFs of PopAcquireTransitionLock @ 0x140700EEC
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 */

NTSTATUS PopAcquireTransitionLock()
{
  return KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
}
