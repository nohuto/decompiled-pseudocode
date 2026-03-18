/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1407B8974
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1407B8930 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1407B8A20 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140088EB8 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1407A6D9C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        ULONG_PTR a3)
{
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 v6; // dl

  ++dword_14036A0C8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(BugCheckParameter2, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, v6, a3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLockAtDpcLevel)(
           BugCheckParameter2,
           a3);
}
