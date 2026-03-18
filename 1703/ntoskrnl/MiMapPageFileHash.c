/*
 * XREFs of MiMapPageFileHash @ 0x140075F48
 * Callers:
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x140077074 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiInitializePfnForOtherProcess @ 0x14010A008 (MiInitializePfnForOtherProcess.c)
 *     MiSetPfnTbFlushStamp @ 0x14010EB3C (MiSetPfnTbFlushStamp.c)
 *     MiWritePageFileHash @ 0x14013B348 (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x14013D880 (MiGetFileHashPage.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r15d
  __int64 AnyMultiplexedVm; // rax
  __int64 BugCheckOnFailure; // r11
  __int64 v11; // r13
  unsigned int v12; // r12d
  KSPIN_LOCK *v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 PteTimeStamp; // rax
  _QWORD *v21; // r9
  unsigned __int64 *v22; // r9
  __int64 v23; // rcx
  _WORD *v24; // rax
  __int64 FileHashPage; // rax
  __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int64 *v36; // r8
  __int64 v37; // rcx
  int v38; // r10d
  __int64 v39; // rcx
  unsigned int v40; // eax
  signed __int32 v41[8]; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 updated; // [rsp+30h] [rbp-40h] BYREF
  __int64 v43; // [rsp+38h] [rbp-38h]
  _WORD *v44; // [rsp+40h] [rbp-30h] BYREF
  __int64 v45; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 v47; // [rsp+B0h] [rbp+40h]
  unsigned int v48; // [rsp+C8h] [rbp+58h]

  v48 = a4;
  v5 = a4;
  v44 = 0LL;
  v45 = 0LL;
  if ( !*(_QWORD *)(a1 + 216) )
    return;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  MiInitializePageColorBase(AnyMultiplexedVm, 0LL, &v44);
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
    v43 = *(_QWORD *)(a1 + 216);
    v14 = (((v43 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = (4096 - (((unsigned int)v43 + 4 * v5) & 0xFFF)) >> 2;
    if ( (unsigned int)v15 > v12 )
      v15 = v12;
    updated = MI_READ_PTE_LOCK_FREE((((v43 + 4 * (unsigned __int64)v5) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (updated & 1) != 0 )
    {
      v19 = MI_GET_PFN_FROM_PTE(&updated, v16, v17, v18);
      PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v19 + 16));
      updated = MiUpdatePageFileHighInPte(*v21, PteTimeStamp + (unsigned int)v15);
      *v22 = updated;
      if ( (unsigned int)MiPteInShadowRange(v22) )
        MiWritePteShadow(v23);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      MiWritePageFileHash(a1, a2, v11, v5, v15);
LABEL_37:
      if ( v11 )
        v11 += 8 * v15;
      v5 += v15;
      v12 -= v15;
      v48 = v5;
      a5 = v12;
      goto LABEL_41;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v24 = v44;
    ++*v44;
    FileHashPage = MiGetFileHashPage(a1, WORD1(v45) | (unsigned int)(unsigned __int16)(v45 & *v24));
    v26 = FileHashPage;
    if ( FileHashPage == -1 )
    {
      v47 = 17;
      v27 = 0LL;
    }
    else
    {
      v27 = 48 * FileHashPage - 0x58000000000LL;
      _InterlockedOr(v41, 0);
      MiSetPfnTbFlushStamp(v27, (unsigned int)KiTbFlushTimeStamp, 0LL);
      MiInitializePfnForOtherProcess(v26, v14, -1LL, 0LL);
      updated = MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *(_QWORD *)(v27 + 40) ^= (*(_QWORD *)(v27 + 40) ^ (updated >> 12)) & 0xFFFFFFFFFLL;
      v47 = MiLockPageInline(v27);
      *(_BYTE *)(v27 + 34) = *(_BYTE *)(v27 + 34) & 0xF8 | 6;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
    if ( v43 == *(_QWORD *)(a1 + 216) )
    {
      v32 = MI_READ_PTE_LOCK_FREE(v14);
      v33 = (unsigned int)MiGetPteTimeStamp(v32) + (unsigned int)v15;
      if ( v26 == -1 )
      {
        updated = MiUpdatePageFileHighInPte(v34, v33);
        *(_QWORD *)v14 = updated;
        if ( (unsigned int)MiPteInShadowRange(v14) )
          MiWritePteShadow(v35);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v5 = v48;
      }
      else
      {
        updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v27 + 16), v33);
        *v36 = updated;
        if ( (unsigned int)MiPteInShadowRange(v36) )
          MiWritePteShadow(v37);
        if ( v38 )
          *(_BYTE *)(v27 + 34) &= ~0x10u;
        updated = MiMakeValidPte(v14, v26, 2684354564LL);
        *(_QWORD *)v14 = updated;
        if ( (unsigned int)MiPteInShadowRange(v14) )
          MiWritePteShadow(v39);
        v40 = ++*(_DWORD *)(a1 + 208);
        if ( v40 > *(_DWORD *)(a1 + 212) )
          *(_DWORD *)(a1 + 212) = v40;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v47);
        v5 = v48;
        MiWritePageFileHash(a1, a2, v11, v48, v15);
      }
      v12 = a5;
      goto LABEL_37;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v26 != -1 )
    {
      v28 = 48 * v26 - 0x58000000000LL;
      *(_QWORD *)(v28 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v28 + 32) = 0;
      MiInsertPageInFreeOrZeroedList(v26, 2LL);
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v47);
      v31 = *(_QWORD *)(a1 + 256);
      if ( (ULONG_PTR *)v31 == &MiSystemPartition )
        MiReturnResidentAvailable(1LL, v29, v30);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 5824), 1uLL);
      MiReturnCommit(*(_QWORD *)(a1 + 256), 1LL);
      _InterlockedDecrement64(&qword_14036D568);
    }
    v12 = a5;
    v5 = v48;
LABEL_41:
    v13 = (KSPIN_LOCK *)(a1 + 232);
  }
  while ( v12 );
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(a2 + 24), (PMDL)a2);
  }
}
