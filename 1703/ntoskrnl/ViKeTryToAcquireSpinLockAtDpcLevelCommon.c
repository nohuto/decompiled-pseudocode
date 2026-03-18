/*
 * XREFs of ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407786F4
 * Callers:
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140777C80 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x140777CE0 (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall ViKeTryToAcquireSpinLockAtDpcLevelCommon(unsigned __int64 a1, __int64 a2)
{
  unsigned __int8 v3; // dl

  ++dword_14034F668;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(a1, 8LL);
  if ( KeGetCurrentIrql() < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, v3, a1, 0LL);
  return ((__int64 (__fastcall *)(unsigned __int64))pXdvKeTryToAcquireSpinLockAtDpcLevel)(a1);
}
