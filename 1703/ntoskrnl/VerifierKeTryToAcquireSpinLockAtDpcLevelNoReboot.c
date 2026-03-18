/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x140777CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot(__int64 a1)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  return ViKeTryToAcquireSpinLockAtDpcLevelCommon(a1, retaddr);
}
