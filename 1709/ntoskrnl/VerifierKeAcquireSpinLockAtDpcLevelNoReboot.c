/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x1407B8DA0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1407BA150 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevelNoReboot(ULONG_PTR a1)
{
  return ViKeAcquireSpinLockAtDpcLevelCommon(a1);
}
