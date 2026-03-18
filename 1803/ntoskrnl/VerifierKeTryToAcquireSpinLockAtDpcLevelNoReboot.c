/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x140826EB0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x140827980 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot(ULONG_PTR a1)
{
  return ViKeTryToAcquireSpinLockAtDpcLevelCommon(a1);
}
