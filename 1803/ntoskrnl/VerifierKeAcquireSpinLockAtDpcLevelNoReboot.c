/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x140826040
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1408274B0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevelNoReboot(ULONG_PTR a1)
{
  return ViKeAcquireSpinLockAtDpcLevelCommon(a1);
}
