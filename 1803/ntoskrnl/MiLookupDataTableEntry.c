/*
 * XREFs of MiLookupDataTableEntry @ 0x14013F6A8
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiRemoveWsleList @ 0x1400E1950 (MiRemoveWsleList.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401721B8 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiShowBadMapper @ 0x140251FB0 (MiShowBadMapper.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MmMarkImageForHiberPhase @ 0x140485A18 (MmMarkImageForHiberPhase.c)
 *     MiImagePagable @ 0x1405BB4C4 (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1405BB5B0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1405BB660 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MmBackSystemImageWithPagefile @ 0x1405F646C (MmBackSystemImageWithPagefile.c)
 *     MmIsDriverVerifyingByAddress @ 0x14064E3F0 (MmIsDriverVerifyingByAddress.c)
 *     MmAddVerifierSpecialThunks @ 0x14074B4B0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x14074B5B0 (MmAddVerifierThunks.c)
 *     MiLocateHotPatchBase @ 0x14074C654 (MiLocateHotPatchBase.c)
 *     MmGetSectionRange @ 0x14074CDF0 (MmGetSectionRange.c)
 *     MmDiscardDriverSection @ 0x1408E0DA4 (MmDiscardDriverSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     MmLockLoadedModuleListShared @ 0x14012B7B0 (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x14013F788 (MmUnlockLoadedModuleListShared.c)
 */

__int64 __fastcall MiLookupDataTableEntry(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // edi
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = 0LL;
  v9 = 17;
  v3 = a2;
  v4 = a1;
  if ( (_DWORD)a2 == 2 )
  {
    MmLockLoadedModuleListShared(&v9, a2);
  }
  else if ( (_DWORD)a2 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v5 = (_QWORD *)qword_1403CB5B8;
  while ( v5 )
  {
    v6 = *(v5 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
    a1 = *((unsigned int *)v5 - 42) + v6 - 1;
    if ( v4 > a1 )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( v4 >= v6 )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  v7 = (unsigned __int64)(v5 - 29) & -(__int64)(v5 != 0LL);
  if ( v3 == 2 )
  {
    LOBYTE(a1) = v9;
    MmUnlockLoadedModuleListShared(a1);
  }
  else if ( v3 == 1 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return v7;
}
