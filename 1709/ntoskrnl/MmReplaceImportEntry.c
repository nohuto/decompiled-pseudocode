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
  __int64 v5; // rdx
  ULONG_PTR v6; // rbx
  NTSTATUS v7; // eax
  ULONG_PTR v8; // rcx
  __int64 result; // rax
  __int64 *v10; // rsi
  char *AnyMultiplexedVm; // rbp
  LONG *SharedVm; // rbx
  KIRQL v13; // r14
  __int64 PteShadow; // r9
  LONG *v15; // rax
  __int64 v16; // rax
  char v17; // r9
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rax
  struct _KEVENT *v23; // rcx
  LONG *v24; // rax
  __int64 v25[7]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v27; // [rsp+80h] [rbp+18h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter3, 0);
    v6 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter3, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)v4[6], v5, 12LL, (__int64)&v27, &v28);
    v8 = v28;
    if ( v7 < 0 )
      v8 = 0LL;
    v28 = v8;
    if ( !v8 || !v27 || BugCheckParameter3 < v8 || BugCheckParameter3 >= v8 + v27 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v6, BugCheckParameter3, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter3);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
  }
  else
  {
    v10 = (__int64 *)(((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter3) == 1 )
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
LABEL_14:
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    while ( 1 )
    {
      PteShadow = *v10;
      if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v25[0] = PteShadow;
      if ( (PteShadow & 1) == 0 )
      {
        MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v13);
        v15 = MiGetSharedVm((__int64)AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
        else
          *v15 = 0;
        __writecr8(v13);
        goto LABEL_14;
      }
      v16 = MI_GET_PAGE_FRAME_FROM_PTE(v25);
      v18 = 48 * v16 - 0x58000000000LL;
      if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) == 0 )
        break;
      MiCopyOnWriteEx(BugCheckParameter3, v10, -1LL, v13, 0);
    }
    if ( (v17 & 0x42) != 0 )
    {
      *(_QWORD *)BugCheckParameter3 = BugCheckParameter4;
    }
    else
    {
      v19 = MiMapPageInHyperSpaceWorker(v16, 0LL, 0x80000000);
      LOBYTE(v20) = 17;
      v21 = (_QWORD *)((BugCheckParameter3 & 0xFFF) + v19);
      *v21 = BugCheckParameter4;
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v21, v20, 0x80000000LL);
      MiLockPageAtDpcInline(v18);
      v22 = MiCaptureDirtyBitToPfn(v18);
      v23 = *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v22 )
        MiReleasePageFileInfo(v23, v22, 1);
    }
    MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v13);
    v24 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
    else
      *v24 = 0;
    result = v13;
    __writecr8(v13);
  }
  return result;
}
