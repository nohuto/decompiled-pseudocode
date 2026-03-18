/*
 * XREFs of MiMapPageFileHash @ 0x1402320E8
 * Callers:
 *     MiGatherPagefilePages @ 0x140225D30 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x14022CC04 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400280B0 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiInitializePfnForOtherProcess @ 0x1400C457C (MiInitializePfnForOtherProcess.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiGetFileHashPage @ 0x140231FD0 (MiGetFileHashPage.c)
 *     MiWritePageFileHash @ 0x140232A1C (MiWritePageFileHash.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  char *AnyMultiplexedVm; // rax
  __int64 BugCheckOnFailure; // r11
  __int64 v11; // r13
  unsigned int v12; // r12d
  KSPIN_LOCK *v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  __int64 PteShadow; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 PteTimeStamp; // rax
  __int64 v20; // r8
  _QWORD *v21; // r9
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r11
  _WORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 FileHashPage; // rax
  __int64 v28; // r12
  __int64 v29; // r14
  unsigned __int64 *v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r11
  _QWORD *v40; // r8
  unsigned __int64 v41; // r9
  int v42; // r10d
  unsigned __int64 v43; // r11
  unsigned int v44; // eax
  signed __int32 v45[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 updated; // [rsp+30h] [rbp-40h] BYREF
  __int64 v47; // [rsp+38h] [rbp-38h]
  _WORD *v48; // [rsp+40h] [rbp-30h] BYREF
  __int64 v49; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 v51; // [rsp+B0h] [rbp+40h]
  unsigned int v52; // [rsp+C8h] [rbp+58h]

  v52 = a4;
  v5 = a4;
  v48 = 0LL;
  v49 = 0LL;
  if ( !*(_QWORD *)(a1 + 216) )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v48);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, BugCheckOnFailure, 0xC0000010);
    v11 = a2 + 8 * (a3 + 6);
  }
  else
  {
    v11 = BugCheckOnFailure;
  }
  v12 = a5;
  v13 = (KSPIN_LOCK *)(a1 + 232);
  do
  {
    KeAcquireInStackQueuedSpinLock(v13, &LockHandle);
    v47 = *(_QWORD *)(a1 + 216);
    v14 = (((v47 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = (4096 - (((unsigned int)v47 + 4 * v5) & 0xFFF)) >> 2;
    PteShadow = *(_QWORD *)v14;
    if ( (unsigned int)v15 > v12 )
      v15 = v12;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    updated = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      v17 = MI_GET_PFN_FROM_PTE(&updated);
      PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v17 + 16), v18, *(_QWORD *)(v17 + 16));
      updated = MiUpdatePageFileHighInPte(v20, PteTimeStamp + (unsigned int)v15);
      *v21 = updated;
      if ( (unsigned __int64)v21 >= v23 && (unsigned __int64)v21 <= v22 )
        MiWritePteShadow();
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      MiWritePageFileHash(a1, a2, v11, v5, v15);
LABEL_50:
      if ( v11 )
        v11 += 8 * v15;
      v5 += v15;
      v12 -= v15;
      v52 = v5;
      a5 = v12;
      goto LABEL_54;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v24 = v48;
    ++*v48;
    FileHashPage = MiGetFileHashPage(a1, WORD1(v49) | (unsigned int)(unsigned __int16)(v49 & *v24), v25, v26);
    v28 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v29 = 0LL;
      v51 = 17;
    }
    else
    {
      v29 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v45, 0);
      MiSetPfnTbFlushStamp(v29, (unsigned int)KiTbFlushTimeStamp, 0);
      v30 = (unsigned __int64 *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v31 = *v30;
      if ( (unsigned __int64)v30 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v30 <= 0xFFFFF6FB7DBED7F8uLL )
        v31 = MiReadPteShadow();
      MiInitializePfnForOtherProcess(v28, v14, (v31 >> 12) & 0xFFFFFFFFFLL, 2560);
      v51 = MiLockPageInline(v29);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    if ( v47 == *(_QWORD *)(a1 + 216) )
    {
      v35 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
        v35 = MiReadPteShadow();
      v36 = (unsigned int)MiGetPteTimeStamp(v35, v32, v35) + (unsigned int)v15;
      if ( v28 == -1 )
      {
        updated = MiUpdatePageFileHighInPte(v37, v36);
        *(_QWORD *)v14 = updated;
        if ( v14 >= v39 && v14 <= v38 )
          MiWritePteShadow();
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v5 = v52;
      }
      else
      {
        updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v29 + 16), v36);
        *v40 = updated;
        if ( (unsigned __int64)v40 >= v43 && (unsigned __int64)v40 <= v41 )
          MiWritePteShadow();
        if ( v42 )
          *(_BYTE *)(v29 + 34) &= ~0x10u;
        updated = MiMakeValidPte(v14, v28, -1610612732);
        *(_QWORD *)v14 = updated;
        if ( v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        v44 = ++*(_DWORD *)(a1 + 208);
        if ( v44 > *(_DWORD *)(a1 + 212) )
          *(_DWORD *)(a1 + 212) = v44;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v51);
        v5 = v52;
        MiWritePageFileHash(a1, a2, v11, v52, v15);
      }
      v12 = a5;
      goto LABEL_50;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v28 != -1 )
    {
      v33 = 48 * v28 - 0x58000000000LL;
      *(_QWORD *)(v33 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v33 + 32) = 0;
      MiInsertPageInFreeOrZeroedList(v28, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v51);
      v34 = *(_QWORD *)(a1 + 256);
      if ( (ULONG_PTR *)v34 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 6016), 1uLL);
      MiReturnCommit(*(_QWORD *)(a1 + 256), 1uLL);
      _InterlockedDecrement64(&qword_140389828);
    }
    v12 = a5;
    v5 = v52;
LABEL_54:
    v13 = (KSPIN_LOCK *)(a1 + 232);
  }
  while ( v12 );
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  }
}
