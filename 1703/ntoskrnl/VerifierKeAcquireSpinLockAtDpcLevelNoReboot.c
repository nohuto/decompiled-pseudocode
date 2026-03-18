/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x140776F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevelNoReboot(__int64 a1)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return ViKeAcquireSpinLockAtDpcLevelCommon(a1, retaddr);
}
