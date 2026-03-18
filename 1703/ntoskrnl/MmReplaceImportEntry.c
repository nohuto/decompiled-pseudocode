/*
 * XREFs of MmReplaceImportEntry @ 0x140211B08
 * Callers:
 *     KsepPatchImportTableEntry @ 0x1406AFE84 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1407749A0 (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceImportEntry @ 0x140774B00 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140774B78 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x140774BE4 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  PVOID *v4; // rax
  ULONG_PTR v5; // rbx
  NTSTATUS v6; // eax
  ULONG_PTR v7; // rcx
  __int64 result; // rax
  __int64 v9; // rsi
  char *AnyMultiplexedVm; // rbp
  LONG *SharedVm; // rbx
  KIRQL v12; // r15
  unsigned __int64 v13; // rcx
  char v14; // r9
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  struct _KEVENT *v18; // rcx
  LONG *v19; // rax
  __int64 v20[7]; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 0);
    v5 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    v6 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)v4[6], 1, 0xCu, &v22, &v23);
    v7 = v23;
    if ( v6 < 0 )
      v7 = 0LL;
    v23 = v7;
    if ( !v7 || !v22 || BugCheckParameter2 < v7 || BugCheckParameter2 >= v7 + v22 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v5, BugCheckParameter2, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v9 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
LABEL_14:
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v12 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    while ( 1 )
    {
      v20[0] = MI_READ_PTE_LOCK_FREE(v9);
      if ( (v20[0] & 1) == 0 )
      {
        MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
        goto LABEL_14;
      }
      v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v20) >> 12) & 0xFFFFFFFFFLL;
      v15 = 48 * v13 - 0x58000000000LL;
      if ( (*(_QWORD *)(v15 + 40) & 0x200000000000000LL) == 0 )
        break;
      MiCopyOnWriteEx(BugCheckParameter2, v9, 0xFFFFFFFFFFFFFFFFuLL, v12, 0);
    }
    if ( (v14 & 0x42) != 0 )
    {
      *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    }
    else
    {
      v16 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000));
      *v16 = BugCheckParameter4;
      MiUnmapPageInHyperSpaceWorker((__int64)v16, 0x11u);
      MiLockPageAtDpcInline(v15);
      v17 = MiCaptureDirtyBitToPfn(v15);
      v18 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v15 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        MiReleasePageFileInfo(v18, v17, 1);
    }
    MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12);
    v19 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v19, retaddr);
    else
      *v19 = 0;
    result = v12;
    __writecr8(v12);
  }
  return result;
}
