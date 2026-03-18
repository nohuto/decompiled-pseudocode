/*
 * XREFs of MiMapPageFileHash @ 0x14013C818
 * Callers:
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x14013C1D8 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiWritePageFileHash @ 0x14015359C (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x140155748 (MiGetFileHashPage.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  char *AnyMultiplexedVm; // rax
  __int64 BugCheckOnFailure; // r11
  __int64 v11; // r12
  unsigned int v12; // r13d
  KSPIN_LOCK *v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  __int64 PteTimeStamp; // rax
  __int64 v19; // r8
  __int64 *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int16 v24; // cx
  __int64 FileHashPage; // rax
  ULONG_PTR v26; // r13
  __int64 v27; // r14
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // r10d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int v46; // eax
  signed __int32 v47[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 updated; // [rsp+30h] [rbp-40h] BYREF
  __int64 v49; // [rsp+38h] [rbp-38h]
  volatile signed __int32 *v50; // [rsp+40h] [rbp-30h] BYREF
  __int64 v51; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 v53; // [rsp+B0h] [rbp+40h]
  unsigned int v54; // [rsp+C8h] [rbp+58h]

  v54 = a4;
  v5 = a4;
  v50 = 0LL;
  v51 = 0LL;
  if ( !*(_QWORD *)(a1 + 216) )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  MiInitializePageColorBase((__int64)AnyMultiplexedVm, 0, (__int64)&v50);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache(
        (PMDL)a2,
        0,
        (MEMORY_CACHING_TYPE)(BugCheckOnFailure + 1),
        0LL,
        BugCheckOnFailure,
        0xC0000010);
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
    v49 = *(_QWORD *)(a1 + 216);
    v14 = (((v49 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = v12;
    v16 = (4096 - (((unsigned int)v49 + 4 * v5) & 0xFFF)) >> 2;
    if ( v16 <= v12 )
      v15 = v16;
    updated = MI_READ_PTE_LOCK_FREE((((v49 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (updated & 1) != 0 )
    {
      v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated);
      PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL));
      updated = MiUpdatePageFileHighInPte(v19, PteTimeStamp + (unsigned int)v15);
      *v20 = updated;
      if ( MiPteInShadowRange((unsigned __int64)v20) )
        MiWritePteShadow(v22, v21, v23);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      MiWritePageFileHash(a1, a2, v11, v5, v15);
LABEL_43:
      if ( v11 )
        v11 += 8 * v15;
      v5 += v15;
      v12 -= v15;
      v54 = v5;
      a5 = v12;
      goto LABEL_24;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v24 = _InterlockedExchangeAdd(v50, 1u);
    FileHashPage = MiGetFileHashPage(a1, WORD1(v51) | (unsigned int)(unsigned __int16)(v24 & v51));
    v26 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v53 = 17;
      v27 = 0LL;
    }
    else
    {
      v27 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v47, 0);
      MiSetPfnTbFlushStamp(v27, KiTbFlushTimeStamp, 0);
      v28 = MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiInitializePfnForOtherProcess(v26, v14, (v28 >> 12) & 0xFFFFFFFFFLL, 2560);
      v53 = MiLockPageInline(v27);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    if ( v49 == *(_QWORD *)(a1 + 216) )
    {
      v31 = MI_READ_PTE_LOCK_FREE(v14);
      v32 = (unsigned int)v15 + (unsigned int)MiGetPteTimeStamp(v31);
      if ( v26 == -1LL )
      {
        updated = MiUpdatePageFileHighInPte(v33, v32);
        *(_QWORD *)v14 = updated;
        if ( MiPteInShadowRange(v14) )
          MiWritePteShadow(v35, v34, v36);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v5 = v54;
      }
      else
      {
        updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v27 + 16), v32);
        *v37 = updated;
        if ( MiPteInShadowRange((unsigned __int64)v37) )
          MiWritePteShadow(v39, v38, v40);
        if ( v42 )
          *(_BYTE *)(v27 + 34) &= ~0x10u;
        updated = MiMakeValidPte(v14, v26, 2684354564LL, v41);
        *(_QWORD *)v14 = updated;
        if ( MiPteInShadowRange(v14) )
          MiWritePteShadow(v44, v43, v45);
        v46 = ++*(_DWORD *)(a1 + 208);
        if ( v46 > *(_DWORD *)(a1 + 212) )
          *(_DWORD *)(a1 + 212) = v46;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v53);
        v5 = v54;
        MiWritePageFileHash(a1, a2, v11, v54, v15);
      }
      v12 = a5;
      goto LABEL_43;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v26 != -1LL )
    {
      v29 = 48 * v26 - 0x58000000000LL;
      *(_QWORD *)(v29 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v29 + 32) = 0;
      MiInsertPageInFreeOrZeroedList(v26, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v53);
      v30 = *(_QWORD *)(a1 + 256);
      if ( (ULONG_PTR *)v30 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 7104), 1uLL);
      MiReturnCommit(*(_QWORD *)(a1 + 256), 1uLL);
      _InterlockedDecrement64(&qword_1403CCDE8);
    }
    v12 = a5;
    v5 = v54;
LABEL_24:
    v13 = (KSPIN_LOCK *)(a1 + 232);
  }
  while ( v12 );
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  }
}
