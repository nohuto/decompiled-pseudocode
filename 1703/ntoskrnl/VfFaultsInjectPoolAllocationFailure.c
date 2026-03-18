/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x140775CC0
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagTarget @ 0x14077663C (ViFaultsIsTagTarget.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  unsigned __int64 v3; // rbx
  unsigned int IsTagTarget; // edi

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_14079025C;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140790284;
    return 0LL;
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  IsTagTarget = ViFaultsIsTagTarget(a1);
  KxReleaseSpinLock(&ViFaultInjectionLock);
  __writecr8(v3);
  if ( IsTagTarget )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return IsTagTarget;
}
