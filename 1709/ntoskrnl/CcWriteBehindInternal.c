/*
 * XREFs of CcWriteBehindInternal @ 0x14008A070
 * Callers:
 *     CcWriteBehind @ 0x140022B24 (CcWriteBehind.c)
 * Callees:
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14001E4C4 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140020390 (CcReferenceSharedCacheMapFileObject.c)
 *     CcApplyLowIoPriorityToThread @ 0x140022680 (CcApplyLowIoPriorityToThread.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetValidData @ 0x1400DE714 (CcSetValidData.c)
 *     CcGetFlushedValidData @ 0x1400F2BA0 (CcGetFlushedValidData.c)
 *     CcIsFatalWriteError @ 0x140126240 (CcIsFatalWriteError.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401E010C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401E0BAC (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x14049C410 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 */

void __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v2; // rdi
  __int64 Partition; // rax
  __int64 v4; // r13
  KSPIN_LOCK *v5; // rbx
  KSPIN_LOCK *v6; // r14
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r12d
  unsigned int v12; // ebx
  SECTION_OBJECT_POINTERS *v13; // r14
  __int64 *v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  int valid; // esi
  LARGE_INTEGER FlushedValidData; // rbx
  __int64 v20; // rax
  bool v21; // cl
  __int64 v22; // rax
  bool v23; // al
  unsigned __int64 v24; // rbx
  struct _FILE_OBJECT *v25; // rsi
  int v26; // ecx
  char v27; // cl
  int v28; // eax
  char v29; // r8
  char v30; // dl
  int *v31; // [rsp+30h] [rbp-49h]
  __int64 v32; // [rsp+38h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+58h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+70h] [rbp-9h] BYREF
  char v37; // [rsp+E8h] [rbp+6Fh]
  char v38; // [rsp+F0h] [rbp+77h]
  LARGE_INTEGER v39; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v31 = *(int **)(a1 + 24);
  v38 = *(_BYTE *)(a1 + 56);
  Partition = CcGetPartition((_QWORD *)v2);
  v4 = Partition;
  if ( Partition != *(_QWORD *)(a1 + 128) )
    KeBugCheckEx(0x34u, 0x1989uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = (KSPIN_LOCK *)(Partition + 192);
  v6 = (KSPIN_LOCK *)(Partition + 128);
  while ( 1 )
  {
    v37 = 0;
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    ++*(_DWORD *)(v2 + 4);
    ++*(_DWORD *)(v2 + 536);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    CcApplyLowIoPriorityToThread(v4, 1, (_DWORD *)v2);
    KeAcquireInStackQueuedSpinLock(v5, &v35);
    v7 = *(_DWORD *)(v4 + 896);
    v8 = *(_DWORD *)(v4 + 200);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v35);
    __writecr8(v35.OldIrql);
    if ( v7 >= v8 )
      CcApplyLowIoPriorityToThread(v4, 0, (_DWORD *)v2);
    LOBYTE(v9) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v2 + 208))(*(_QWORD *)(v2 + 216), v9) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    v10 = *(_QWORD *)(v2 + 160);
    v11 = *(_DWORD *)(v2 + 152) & 0x10000;
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 8);
      *(_DWORD *)(v10 + 4) = v12;
      if ( v12 > *(_DWORD *)(v4 + 456) )
        v12 = *(_DWORD *)(v4 + 456);
      *(_DWORD *)(v10 + 4) = v12;
    }
    else
    {
      v12 = *(_DWORD *)(v2 + 192);
    }
    v13 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v2 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 196LL), v12);
    if ( (*(_DWORD *)(v2 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 200LL), v12),
          (*(_DWORD *)(v2 + 152) & 0x1000000) != 0) )
    {
      v14 = &v32;
      v32 = *(_QWORD *)(*(_QWORD *)(v2 + 240) + 112LL);
    }
    else
    {
      v14 = 0LL;
    }
    CcFlushCachePriv((__int64)v13, &CcNoDelay, 1u, (__int64)v14, 0, v31);
    CcApplyLowIoPriorityToThread(v4, 0, (_DWORD *)v2);
    v15 = -v12;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 196LL), v15);
    if ( (*(_DWORD *)(v2 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 504) + 200LL), v15);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v2 + 208) + 8LL))(*(_QWORD *)(v2 + 216));
    v16 = (unsigned int)*v31;
    if ( (_DWORD)v16 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v2, v16) )
    {
      v17 = CcReferenceSharedCacheMapFileObject(v2);
      CcMmLogLostDelayedWriteError(v17, (unsigned int)*v31);
      CcDereferenceSharedCacheMapFileObject(v2, v17);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v2 + 40);
    v39 = FlushedValidData;
    v20 = CcGetPartition((_QWORD *)v2);
    v21 = *(_DWORD *)(v2 + 4) > 1u && *(_QWORD *)(v20 + 744) != v20 + 744;
    v23 = 0;
    if ( (*(_DWORD *)(v2 + 152) & 0x400) != 0 )
    {
      v22 = *(_QWORD *)(v2 + 40);
      if ( *(_QWORD *)(v2 + 48) >= v22 && v22 != 0x7FFFFFFFFFFFFFFFLL && *(_QWORD *)(v2 + 8) )
        v23 = 1;
    }
    if ( !*(_DWORD *)(v2 + 516) && v23 && !v21 )
    {
      FlushedValidData = CcGetFlushedValidData(v13, 1u);
      v39 = FlushedValidData;
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v2 + 40) )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
        v24 = CcReferenceSharedCacheMapFileObject(v2);
        valid = CcSetValidData(v24, &v39);
        CcDereferenceSharedCacheMapFileObject(v2, v24);
        ExAcquireFastMutex((PFAST_MUTEX)(v2 + 280));
        if ( valid < 0 )
        {
          if ( valid == -1073741670 || valid == -2147483626 || valid == -1073741740 )
          {
            FlushedValidData = v39;
          }
          else
          {
            FlushedValidData = *(LARGE_INTEGER *)(v2 + 48);
            v39 = FlushedValidData;
          }
        }
        else
        {
          FlushedValidData = v39;
          *(LARGE_INTEGER *)(v2 + 40) = v39;
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v2 + 280));
    v6 = (KSPIN_LOCK *)(v4 + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
    --*(_DWORD *)(v2 + 4);
    --*(_DWORD *)(v2 + 536);
    if ( !*(_DWORD *)(v2 + 4) )
    {
      if ( valid == -1073741670 || valid == -2147483626 || valid == -1073741740 )
      {
        if ( v11 )
          CcCancelMmWaitForUninitializeCacheMap(v2);
        if ( !*(_DWORD *)(v2 + 112) )
        {
          CcInsertIntoDirtySharedCacheMapList(v2);
          v27 = 1;
          goto LABEL_59;
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v25 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v2);
        FsRtlAcquireFileExclusive(v25);
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v34);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
        v26 = *(_DWORD *)(v2 + 4);
        if ( !v26
          && (!*(_DWORD *)(v2 + 112)
           && (*(_QWORD *)(v2 + 40) == 0x7FFFFFFFFFFFFFFFLL
            || (*(_DWORD *)(v2 + 152) & 0x400) == 0
            || FlushedValidData.QuadPart >= *(_QWORD *)(v2 + 48))
           || !*(_QWORD *)(v2 + 8) && (*(_DWORD *)(v2 + 152) & 4) == 0) )
        {
          CcDeleteSharedCacheMap((char *)v2, &v34, &LockHandle, 1, v25);
          *((_QWORD *)v31 + 1) = 0LL;
          goto LABEL_78;
        }
        if ( *(_DWORD *)(v2 + 112) )
        {
          if ( v11 )
            CcCancelMmWaitForUninitializeCacheMap(v2);
        }
        else if ( !v26 )
        {
          CcInsertIntoDirtySharedCacheMapList(v2);
          v37 = 1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v34);
        __writecr8(v34.OldIrql);
        FsRtlReleaseFile(v25);
        CcDereferenceSharedCacheMapFileObject(v2, (unsigned __int64)v25);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
      }
    }
    v27 = v37;
LABEL_59:
    v28 = *(_DWORD *)(v2 + 152);
    if ( (v28 & 0x10000) == 0 || v11 )
    {
      if ( *((_QWORD *)v31 + 1) != 35422LL )
        *(_DWORD *)(v2 + 152) = v28 & 0xFFFFFFDF;
      if ( v27 )
      {
        *(_BYTE *)(v4 + 593) = 1;
        if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
        {
          v29 = 1;
          v30 = 1;
        }
        else
        {
          v29 = 0;
          v30 = 0;
        }
        CcScheduleLazyWriteScan(v4, v30, v29);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      goto LABEL_78;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v5 = (KSPIN_LOCK *)(v4 + 192);
  }
  CcApplyLowIoPriorityToThread(v4, 0, (_DWORD *)v2);
  KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
  *(_DWORD *)(v2 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v2 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v2);
  CcDecrementOpenCount(v2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  *v31 = -1073741740;
LABEL_78:
  if ( v38 )
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
