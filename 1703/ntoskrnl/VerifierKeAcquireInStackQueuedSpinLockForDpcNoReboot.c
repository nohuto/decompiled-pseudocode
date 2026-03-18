/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140776D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 retaddr; // [rsp+0h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(a1, retaddr, a2);
}
