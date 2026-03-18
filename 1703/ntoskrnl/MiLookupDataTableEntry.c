/*
 * XREFs of MiLookupDataTableEntry @ 0x14006CE70
 * Callers:
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140155C08 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x14020CCEC (MiShowBadMapper.c)
 *     MiSplitDriverPage @ 0x14020D2B4 (MiSplitDriverPage.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x14040DDE0 (MmMarkImageForHiberPhase.c)
 *     MiImagePagable @ 0x1404B2468 (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1404B24D0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1404B2580 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x14059D470 (MmBackSystemImageWithPagefile.c)
 *     MmIsDriverVerifyingByAddress @ 0x1405CF250 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x1406B4580 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406B4680 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x1406B5E2C (MmGetSectionRange.c)
 *     MmDiscardDriverSection @ 0x140825DE0 (MmDiscardDriverSection.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 */

PVOID *__fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  PVOID *v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *v5; // rax
  PVOID v6; // rdx

  v2 = 0LL;
  if ( a2 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  }
  v5 = (PVOID *)PsLoadedModuleList;
  while ( 1 )
  {
    v6 = v5[6];
    if ( a1 >= (unsigned __int64)v6 && a1 < (unsigned __int64)v6 + *((unsigned int *)v5 + 16) )
      break;
    v5 = (PVOID *)*v5;
    if ( v5 == &PsLoadedModuleList )
      goto LABEL_9;
  }
  v2 = v5;
LABEL_9:
  if ( CurrentThread )
  {
    ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread(CurrentThread);
  }
  return v2;
}
