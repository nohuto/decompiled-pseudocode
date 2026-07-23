/*
 * XREFs of CcCanIWrite @ 0x14000D980
 * Callers:
 *     FsRtlCopyWrite @ 0x140684570 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140684F90 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x140022570 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1400225E0 (ExInterlockedInsertTailList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400AD48C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     MmEnoughMemoryForWrite @ 0x1400AE5C4 (MmEnoughMemoryForWrite.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 *     CcPerfLogCanWriteFail @ 0x1401DE9B8 (CcPerfLogCanWriteFail.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  char *v4; // rdi
  UCHAR v5; // si
  BOOLEAN v6; // r14
  ULONG v7; // r15d
  ULONG v9; // r10d
  ULONG Flags; // eax
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rdi
  char v13; // r14
  int v14; // r12d
  ULONG v15; // r12d
  PSECTION_OBJECT_POINTERS v16; // rax
  PVOID v17; // rsi
  KSPIN_LOCK *v18; // rsi
  bool v19; // r15
  PSECTION_OBJECT_POINTERS v20; // r13
  unsigned __int64 v21; // rcx
  PVOID v23; // rcx
  unsigned int v24; // edx
  bool v25; // si
  int v26; // eax
  KSPIN_LOCK *v27; // r8
  _LIST_ENTRY *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int16 Object; // [rsp+30h] [rbp-89h] BYREF
  char v32; // [rsp+32h] [rbp-87h]
  int v33; // [rsp+34h] [rbp-85h]
  _QWORD v34[2]; // [rsp+38h] [rbp-81h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+48h] [rbp-71h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-59h] BYREF
  int v37; // [rsp+80h] [rbp-39h]
  PFILE_OBJECT v38; // [rsp+88h] [rbp-31h]
  ULONG v39; // [rsp+90h] [rbp-29h]
  _LIST_ENTRY ListEntry; // [rsp+98h] [rbp-21h] BYREF
  __int16 *p_Object; // [rsp+A8h] [rbp-11h]
  ULONG v42; // [rsp+128h] [rbp+6Fh]

  v42 = BytesToWrite;
  v4 = 0LL;
  v5 = Retrying;
  v6 = Wait;
  v7 = BytesToWrite;
  v9 = 0x1000000;
  if ( FileObject )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
      return 1;
    SectionObjectPointer = FileObject->SectionObjectPointer;
    if ( !SectionObjectPointer
      || (SharedCacheMap = SectionObjectPointer->SharedCacheMap) == 0LL
      || (v4 = (char *)SharedCacheMap[66]) == 0LL )
    {
      v4 = (char *)&CcSystemPartition;
    }
  }
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  if ( !v4 )
    v4 = (char *)&CcSystemPartition;
  if ( !Retrying && *((char **)v4 + 102) != v4 + 816 )
    goto LABEL_50;
  v13 = 0;
  v14 = 0;
  if ( BytesToWrite <= 0x1000000 )
    v9 = BytesToWrite;
  LOBYTE(v14) = (v9 & 0xFFF) != 0;
  v15 = (v9 >> 12) + v14;
  if ( !FileObject
    || (v16 = FileObject->SectionObjectPointer) == 0LL
    || (v17 = v16->SharedCacheMap) == 0LL
    || (v18 = (KSPIN_LOCK *)*((_QWORD *)v17 + 66)) == 0LL )
  {
    v18 = (KSPIN_LOCK *)&CcSystemPartition;
  }
  v19 = v18[84] + v15 >= v18[87];
  v20 = 0LL;
  *(_QWORD *)&BytesToWrite = 1LL;
  if ( !FileObject )
  {
LABEL_45:
    if ( !v19 )
    {
      if ( v20 )
        goto LABEL_25;
      goto LABEL_21;
    }
    goto LABEL_30;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 4) & 4) == 0 && v18[84] + v15 < v18[87] )
  {
LABEL_21:
    v13 = 0;
    v21 = 450LL;
    if ( (_BYTE)dword_1403E3134 )
      v21 = 0x4000LL;
    if ( qword_140381880 <= v21 )
    {
      if ( qword_140381A00 < (unsigned __int64)(qword_140381A70 + 800) )
        v13 = (unsigned __int64)qword_140381880 > 0x50;
    }
    else
    {
      v13 = 1;
    }
LABEL_25:
    if ( v13 )
      return 1;
    goto LABEL_30;
  }
  KeAcquireInStackQueuedSpinLock(v18 + 8, &LockHandle);
  v20 = FileObject->SectionObjectPointer;
  if ( v20 )
  {
    v23 = v20->SharedCacheMap;
    if ( v23 )
    {
      if ( v18 != *((KSPIN_LOCK **)v23 + 66) )
        KeBugCheckEx(0x34u, 0x769uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v24 = *((_DWORD *)v23 + 66);
      v25 = 0;
      if ( v24 )
      {
        v26 = *((_DWORD *)v23 + 28);
        if ( v26 )
          v25 = v15 + v26 > v24;
      }
      if ( *(_QWORD *)(*((_QWORD *)v23 + 63) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages )
        v19 = 0;
    }
    else
    {
      v25 = 0;
    }
    v13 = MmEnoughMemoryForWrite(FileObject->SectionObjectPointer);
  }
  else
  {
    v25 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !v25 )
  {
    *(_QWORD *)&BytesToWrite = 1LL;
    goto LABEL_45;
  }
LABEL_30:
  v5 = Retrying;
  v7 = v42;
  v6 = Wait;
LABEL_50:
  if ( (xmmword_1403E4010 & 0x20000) != 0 )
    CcPerfLogCanWriteFail(FileObject, v7, *((_QWORD *)v4 + 84), *((_QWORD *)v4 + 87));
  LOBYTE(BytesToWrite) = 1;
  CcAdjustWriteBehindThreadPoolIfNeeded(v4, *(_QWORD *)&BytesToWrite);
  if ( v6 )
  {
    Object = 0;
    v34[1] = v34;
    v34[0] = v34;
    p_Object = &Object;
    v27 = (KSPIN_LOCK *)(v4 + 832);
    v32 = 6;
    v28 = (_LIST_ENTRY *)(v4 + 816);
    v33 = 0;
    v37 = 4719356;
    v38 = FileObject;
    v39 = v7;
    if ( v5 )
      ExInterlockedInsertHeadList(v28, &ListEntry, v27);
    else
      ExInterlockedInsertTailList(v28, &ListEntry, v27);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4 + 8, &v35);
    LOBYTE(v29) = 1;
    CcScheduleLazyWriteScan(v4, v29, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
LABEL_57:
    __writecr8(v35.OldIrql);
    while ( 1 )
    {
      CcPostDeferredWrites(v4);
      if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
        return 1;
      if ( CcCoalescingState || v4[268] )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4 + 8, &v35);
        LOBYTE(v30) = 1;
        CcScheduleLazyWriteScan(v4, v30, 0LL);
        if ( v4[268] )
          v4[268] = 0;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
        goto LABEL_57;
      }
    }
  }
  return 0;
}
