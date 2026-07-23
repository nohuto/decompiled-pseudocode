/*
 * XREFs of CcCanIWrite @ 0x1400F4620
 * Callers:
 *     FsRtlCopyWrite @ 0x1406AF960 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1406B0380 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14001BCA4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmEnoughMemoryForWrite @ 0x140064904 (MmEnoughMemoryForWrite.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     ExInterlockedInsertHeadList @ 0x1401158E0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140115950 (ExInterlockedInsertTailList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 *     CcPerfLogCanWriteFail @ 0x1401E2684 (CcPerfLogCanWriteFail.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  char v4; // r15
  UCHAR v5; // r12
  ULONG v6; // r13d
  unsigned int v8; // r11d
  unsigned int v9; // r14d
  ULONG Flags; // eax
  unsigned __int8 CurrentIrql; // al
  _QWORD *v12; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned __int8 v17; // r15
  signed __int32 v18; // edx
  ULONG_PTR *v19; // rsi
  __int64 v20; // rax
  char v21; // si
  unsigned int v22; // r13d
  unsigned __int8 v23; // al
  _QWORD *v24; // rdx
  bool v25; // r14
  __int64 Next; // rax
  PSECTION_OBJECT_POINTERS v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  BOOLEAN v30; // di
  signed __int64 v31; // rax
  bool v32; // cc
  signed __int64 v33; // rax
  bool v35; // zf
  signed __int32 v36; // eax
  PSECTION_OBJECT_POINTERS v37; // rdx
  bool v38; // r12
  _DWORD *v39; // rcx
  unsigned int v40; // r8d
  int v41; // eax
  unsigned __int16 **v42; // r9
  unsigned __int16 *v43; // r10
  KSPIN_LOCK *v44; // r8
  _LIST_ENTRY *v45; // rcx
  int v46; // [rsp+34h] [rbp-95h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-91h] BYREF
  __int64 v48; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int64 *v49; // [rsp+58h] [rbp-71h]
  unsigned __int8 v50; // [rsp+60h] [rbp-69h]
  __int16 Object; // [rsp+68h] [rbp-61h] BYREF
  char v52; // [rsp+6Ah] [rbp-5Fh]
  int v53; // [rsp+6Ch] [rbp-5Dh]
  _QWORD v54[2]; // [rsp+70h] [rbp-59h] BYREF
  PSECTION_OBJECT_POINTERS v55; // [rsp+80h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE v56; // [rsp+88h] [rbp-41h] BYREF
  int v57; // [rsp+A0h] [rbp-29h]
  PFILE_OBJECT v58; // [rsp+A8h] [rbp-21h]
  ULONG v59; // [rsp+B0h] [rbp-19h]
  _LIST_ENTRY ListEntry; // [rsp+B8h] [rbp-11h] BYREF
  __int16 *p_Object; // [rsp+C8h] [rbp-1h]
  __int64 v62; // [rsp+E8h] [rbp+1Fh]
  void *retaddr; // [rsp+128h] [rbp+5Fh]

  v4 = 0;
  v5 = Retrying;
  v6 = BytesToWrite;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  v8 = 0;
  v9 = 0x1000000;
  if ( !FileObject )
  {
    v15 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_24;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
    return 1;
  v48 = 0LL;
  v49 = (volatile signed __int64 *)&CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v50 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v48, &CcMasterLock);
    goto LABEL_47;
  }
  v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v48);
  if ( v12 )
  {
    KxWaitForLockOwnerShip((__int64)&v48, v12);
LABEL_47:
    v8 = 0;
  }
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( !SectionObjectPointer || (SharedCacheMap = SectionObjectPointer->SharedCacheMap) == 0LL )
  {
    v15 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_19;
  }
  v15 = SharedCacheMap[66];
  if ( !SharedCacheMap[21] )
    goto LABEL_19;
  v16 = *(_QWORD *)((SharedCacheMap[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
  v17 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140388100, v17);
  }
  else
  {
    v46 = 0;
    if ( _interlockedbittestandset(&dword_140388100, 0x1Fu) )
    {
      v46 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140388100, v17);
      v8 = 0;
    }
    v18 = dword_140388100;
    if ( (dword_140388100 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_14;
    do
    {
      if ( (v18 & 0x40000000) == 0 )
      {
        v36 = _InterlockedCompareExchange(&dword_140388100, v18 | 0x40000000, v18);
        v35 = v18 == v36;
        v18 = v36;
        if ( !v35 )
          continue;
      }
      KeYieldProcessorEx(&v46);
      v18 = dword_140388100;
    }
    while ( (v18 & 0xBFFFFFFF) != 0x80000000 );
  }
  v8 = 0;
LABEL_14:
  if ( *(_QWORD *)v16 )
    v19 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v16 + 60LL) & 0x3FF));
  else
    v19 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140388100, retaddr);
    v8 = 0;
  }
  else
  {
    dword_140388100 = 0;
  }
  __writecr8(v17);
  if ( v15 != *(_QWORD *)(v19[21] + 8) )
    KeBugCheckEx(0x34u, 0x1292uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_19:
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 904)) <= 1 )
    __fastfail(0xEu);
  v4 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v48, retaddr);
    v8 = 0;
    goto LABEL_23;
  }
  _m_prefetchw(&v48);
  v20 = v48;
  if ( v48 )
    goto LABEL_49;
  if ( (__int64 *)_InterlockedCompareExchange64(v49, 0LL, (signed __int64)&v48) != &v48 )
  {
    v20 = KxWaitForLockChainValid(&v48);
    v8 = 0;
LABEL_49:
    v48 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v20 + 8), 1uLL);
  }
LABEL_23:
  __writecr8(v50);
LABEL_24:
  if ( !v5 && *(_QWORD *)(v15 + 744) != v15 + 744 )
    goto LABEL_93;
  v21 = 0;
  LockHandle.LockQueue.Next = 0LL;
  if ( v6 <= 0x1000000 )
    v9 = v6;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v15 + 128);
  v22 = (v9 >> 12) + ((v9 & 0xFFF) != 0);
  v23 = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = v23;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v15 + 128);
  }
  else
  {
    v24 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v15 + 128), (__int64)&LockHandle);
    if ( !v24 )
      goto LABEL_30;
    KxWaitForLockOwnerShip((__int64)&LockHandle, v24);
  }
  v8 = 0;
LABEL_30:
  v25 = *(_QWORD *)(v15 + 600) + (unsigned __int64)v22 >= *(_QWORD *)(v15 + 624);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    v8 = 0;
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_33;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      v8 = 0;
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_33:
  __writecr8(LockHandle.OldIrql);
  v27 = 0LL;
  if ( !FileObject )
    goto LABEL_82;
  if ( (*((_BYTE *)FileObject->FsContext + 4) & 4) == 0 && !v25 )
  {
LABEL_36:
    v21 = 0;
    if ( (_BYTE)dword_140400130 )
      v28 = 0x4000LL;
    else
      v28 = 450LL;
    v29 = qword_14038B800;
    if ( qword_14038B800 < v28 )
    {
      v42 = (unsigned __int16 **)&unk_14038B0A8;
      while ( 1 )
      {
        v43 = *v42;
        if ( dword_140388544 )
          break;
LABEL_89:
        ++v42;
        v8 = 0;
        if ( (__int64)v42 > (__int64)&qword_14038B0B0 )
        {
          if ( qword_14038B980 < (unsigned __int64)(qword_14038B9F0 + 800) )
            v21 = (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x50uLL) != 0;
          goto LABEL_40;
        }
      }
      while ( 1 )
      {
        v29 += *v43;
        if ( v29 >= v28 )
          break;
        ++v8;
        v43 += 8;
        if ( v8 >= dword_140388544 )
          goto LABEL_89;
      }
    }
    v21 = 1;
LABEL_40:
    if ( v21 )
      goto LABEL_41;
    goto LABEL_92;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 128), &LockHandle);
  v37 = FileObject->SectionObjectPointer;
  v38 = 0;
  v55 = v37;
  if ( v37 )
  {
    v39 = v37->SharedCacheMap;
    if ( v39 )
    {
      v40 = v39[66];
      if ( v40 )
      {
        v41 = v39[28];
        if ( v41 )
          v38 = v22 + v41 > v40;
      }
      if ( *(_QWORD *)(*((_QWORD *)v39 + 63) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages )
        v25 = 0;
    }
    v21 = MmEnoughMemoryForWrite((__int64)v37);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !v38 )
  {
    v27 = v55;
    v8 = 0;
LABEL_82:
    if ( !v25 )
    {
      if ( v27 )
        goto LABEL_40;
      goto LABEL_36;
    }
  }
LABEL_92:
  v5 = Retrying;
  v6 = BytesToWrite;
LABEL_93:
  if ( (xmmword_140401150 & 0x20000) != 0 )
    CcPerfLogCanWriteFail(FileObject, v6, *(_QWORD *)(v15 + 600), *(_QWORD *)(v15 + 624));
  CcAdjustWriteBehindThreadPoolIfNeeded(v15, 1);
  if ( !Wait )
  {
    v30 = 0;
    goto LABEL_42;
  }
  Object = 0;
  v53 = 0;
  v54[1] = v54;
  v54[0] = v54;
  p_Object = &Object;
  v44 = (KSPIN_LOCK *)(v15 + 768);
  v52 = 6;
  v45 = (_LIST_ENTRY *)(v15 + 744);
  v62 = v15;
  v57 = 5243644;
  v58 = FileObject;
  v59 = v6;
  if ( v5 )
    ExInterlockedInsertHeadList(v45, &ListEntry, v44);
  else
    ExInterlockedInsertTailList(v45, &ListEntry, v44);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 128), &v56);
  CcScheduleLazyWriteScan(v15, 1, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
LABEL_100:
  __writecr8(v56.OldIrql);
  while ( 1 )
  {
    CcPostDeferredWrites(v15);
    if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
      break;
    if ( *(_BYTE *)(v15 + 900) || *(_BYTE *)(v15 + 140) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v15 + 128), &v56);
      CcScheduleLazyWriteScan(v15, 1, 0);
      if ( *(_BYTE *)(v15 + 140) )
        *(_BYTE *)(v15 + 140) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v56);
      goto LABEL_100;
    }
  }
LABEL_41:
  v30 = 1;
LABEL_42:
  if ( v4 )
  {
    v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 904), 0xFFFFFFFFFFFFFFFFuLL);
    v32 = v31 <= 1;
    v33 = v31 - 1;
    if ( v32 )
    {
      if ( v33 )
        __fastfail(0xEu);
      KeSetEvent((PRKEVENT)(v15 + 936), 0, 0);
    }
  }
  return v30;
}
