/*
 * XREFs of MiLookupDataTableEntry @ 0x1400DCDF4
 * Callers:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401499C8 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x140213CEC (MiShowBadMapper.c)
 *     MiSplitDriverPage @ 0x140214314 (MiSplitDriverPage.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x14043066C (MmMarkImageForHiberPhase.c)
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x140516060 (MmLockPagableDataSection.c)
 *     MmPageEntireDriver @ 0x140516A90 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x140516BA8 (MiImagePagable.c)
 *     MmIsDriverVerifyingByAddress @ 0x14059DC50 (MmIsDriverVerifyingByAddress.c)
 *     MmBackSystemImageWithPagefile @ 0x1405C861C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x1406E0570 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406E0670 (MmAddVerifierThunks.c)
 *     MmGetSectionRange @ 0x1406E21A8 (MmGetSectionRange.c)
 *     MmDiscardDriverSection @ 0x140857448 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 */

PVOID *__fastcall MiLookupDataTableEntry(unsigned __int64 a1, int a2)
{
  PVOID *v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v5; // rcx
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
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
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
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v2;
}
