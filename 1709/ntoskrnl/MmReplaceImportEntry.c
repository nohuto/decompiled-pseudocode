/*
 * XREFs of MmReplaceImportEntry @ 0x1402193DC
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1406DB4B4 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1407B675C (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceImportEntry @ 0x1407B68BC (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x1407B6934 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x1407B69A0 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  PVOID *v4; // rax
  ULONG_PTR v5; // rbx
  NTSTATUS v6; // eax
  ULONG_PTR v7; // rcx
  __int64 result; // rax
  __int64 *v9; // rsi
  char *AnyMultiplexedVm; // rbp
  LONG *SharedVm; // rbx
  KIRQL v12; // r14
  __int64 PteShadow; // r9
  LONG *v14; // rax
  __int64 v15; // rax
  char v16; // r9
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  struct _KEVENT *v22; // rcx
  LONG *v23; // rax
  __int64 v24[7]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter3, 0);
    v5 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter3, BugCheckParameter4);
    v6 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)v4[6], 1, 0xCu, (int)&v26, &v27);
    v7 = v27;
    if ( v6 < 0 )
      v7 = 0LL;
    v27 = v7;
    if ( !v7 || !v26 || BugCheckParameter3 < v7 || BugCheckParameter3 >= v7 + v26 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v5, BugCheckParameter3, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter3);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v9 = (__int64 *)(((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 1 )
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
LABEL_14:
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v12 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    while ( 1 )
    {
      PteShadow = *v9;
      if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v24[0] = PteShadow;
      if ( (PteShadow & 1) == 0 )
      {
        MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
        v14 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
        else
          *v14 = 0;
        __writecr8(v12);
        goto LABEL_14;
      }
      v15 = MI_GET_PAGE_FRAME_FROM_PTE(v24);
      v17 = 48 * v15 - 0x58000000000LL;
      if ( (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) == 0 )
        break;
      MiCopyOnWriteEx(BugCheckParameter3, v9, -1LL, v12, 0);
    }
    if ( (v16 & 0x42) != 0 )
    {
      *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
    }
    else
    {
      v18 = MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000);
      LOBYTE(v19) = 17;
      v20 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + v18);
      *v20 = BugCheckParameter4;
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v20, v19, 0x80000000LL);
      MiLockPageAtDpcInline(v17);
      v21 = MiCaptureDirtyBitToPfn(v17);
      v22 = *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v17 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 )
        MiReleasePageFileInfo(v22, v21, 1);
    }
    MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
    v23 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v23, retaddr);
    else
      *v23 = 0;
    result = v12;
    __writecr8(v12);
  }
  return result;
}
