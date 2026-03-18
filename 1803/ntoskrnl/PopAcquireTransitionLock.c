/*
 * XREFs of PopAcquireTransitionLock @ 0x1405EF3F4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

NTSTATUS PopAcquireTransitionLock()
{
  return KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
}
