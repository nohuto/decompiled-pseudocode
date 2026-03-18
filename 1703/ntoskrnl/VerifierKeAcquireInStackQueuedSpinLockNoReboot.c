/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x140776DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockNoReboot(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockCommon(a1, retaddr, a2);
}
