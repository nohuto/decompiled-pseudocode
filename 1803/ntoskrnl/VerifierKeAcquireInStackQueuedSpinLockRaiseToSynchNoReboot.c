/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x140825F60
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140825EC4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot(volatile __int64 *a1, ULONG_PTR a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(a1, retaddr, a2);
}
