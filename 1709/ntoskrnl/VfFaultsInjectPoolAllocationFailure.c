/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x1407B7ABC
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfFaultsInjectResourceFailure @ 0x1407B7B44 (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagTarget @ 0x1407B8438 (ViFaultsIsTagTarget.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  unsigned __int64 v3; // rbx
  unsigned int IsTagTarget; // edi

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_1407D525C;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_1407D5284;
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
