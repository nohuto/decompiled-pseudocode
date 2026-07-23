/*
 * XREFs of MmReplaceImportEntry @ 0x140256048
 * Callers:
 *     KsepPatchImportTableEntry @ 0x140745AE0 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x14082444C (ViThunkReplaceAllThunkedImports.c)
 *     ViThunkReplaceImportEntry @ 0x1408245A8 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140824620 (ViThunkReplaceImportIfThunkedRegular.c)
 *     ViThunkReplaceSharedExports @ 0x14082468C (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14003FAC0 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 */

void __fastcall MmReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // rbx
  NTSTATUS v7; // eax
  ULONG_PTR v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 SessionVm; // rax
  __int64 v11; // rsi
  LONG *SharedVm; // rbx
  KIRQL v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // ebx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rax
  struct _KEVENT *v20; // rcx
  __int64 v21[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+18h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 1LL);
    v6 = v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v4 + 48), v5, 12LL, (__int64)&v22, &v23);
    v8 = v23;
    if ( v7 < 0 )
      v8 = 0LL;
    v23 = v8;
    if ( !v8 || !v22 || BugCheckParameter2 < v8 || BugCheckParameter2 >= v8 + v22 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v6, BugCheckParameter2, BugCheckParameter4);
  }
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2) )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v9 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionVm = MiGetSessionVm();
    else
      SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
    v11 = SessionVm;
    SharedVm = MiGetSharedVm(SessionVm);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
LABEL_17:
    SharedVm[1] = 0;
    while ( 1 )
    {
      v21[0] = MI_READ_PTE_LOCK_FREE(v9);
      if ( (v21[0] & 1) == 0 )
      {
        MiUnlockWorkingSetExclusive(v11, v13);
LABEL_23:
        SharedVm = MiGetSharedVm(v11);
        ExAcquireSpinLockExclusive(SharedVm);
        goto LABEL_17;
      }
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v21) >> 12) & 0xFFFFFFFFFLL;
      v16 = 48 * v14 - 0x58000000000LL;
      if ( (*(_QWORD *)(v16 + 40) & 0x200000000000000LL) == 0 )
        break;
      v17 = MiCopyOnWrite(BugCheckParameter2, v9, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v17 < 0 )
      {
        MiUnlockWorkingSetExclusive(v11, v13);
        MiCopyOnWriteCheckConditions(v11, (unsigned int)v17);
        goto LABEL_23;
      }
    }
    if ( (v15 & 0x42) != 0 )
    {
      *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    }
    else
    {
      v18 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000, v15));
      *v18 = BugCheckParameter4;
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v18, 0x11u, 0x80000000);
      MiLockPageAtDpcInline(v16);
      v19 = MiCaptureDirtyBitToPfn(v16);
      v20 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v16 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v19 )
        MiReleasePageFileInfo(v20, v19, 1);
    }
    MiUnlockWorkingSetExclusive(v11, v13);
  }
}
