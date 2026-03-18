/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140776B74
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140776B30 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x140776C20 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v7; // [rsp+30h] [rbp-8h]

  ++dword_14034F668;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(a1, 8LL);
  VfUtilCheckKernelAddress(a3, 24LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v7 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, a3, 0LL);
  return ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64))pXdvKeAcquireInStackQueuedSpinLockAtDpcLevel)(
           a1,
           a3);
}
