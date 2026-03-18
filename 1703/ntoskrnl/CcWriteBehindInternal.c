/*
 * XREFs of CcWriteBehindInternal @ 0x1400AACD0
 * Callers:
 *     CcWriteBehind @ 0x1400AF884 (CcWriteBehind.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     CcIsFatalWriteError @ 0x1400140C8 (CcIsFatalWriteError.c)
 *     CcSetValidData @ 0x14008142C (CcSetValidData.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400AB33C (CcApplyLowIoPriorityToThread.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140119F6C (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     CcGetFlushedValidData @ 0x14011C7E0 (CcGetFlushedValidData.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401DD46C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401DDB70 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x140510150 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 */

LONG __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int *v3; // r13
  __int64 v4; // r14
  KSPIN_LOCK *v5; // r12
  __int64 v6; // rdx
  bool v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  SECTION_OBJECT_POINTERS *v11; // r12
  __int64 *v12; // r9
  unsigned int v13; // ebx
  int valid; // r12d
  bool v15; // cc
  LARGE_INTEGER FlushedValidData; // rbx
  bool v17; // cl
  bool v18; // al
  __int64 v19; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _FILE_OBJECT *v23; // r15
  int v24; // ecx
  LONG result; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // r8
  struct _FILE_OBJECT *v32; // rbx
  int v33; // ebx
  char v34; // cl
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // [rsp+30h] [rbp-29h] BYREF
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // [rsp+38h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v40; // [rsp+58h] [rbp-1h] BYREF
  char v41; // [rsp+C0h] [rbp+67h]
  char v42; // [rsp+C8h] [rbp+6Fh]
  int v43; // [rsp+D0h] [rbp+77h]
  LARGE_INTEGER v44; // [rsp+D8h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int **)(a1 + 24);
  v42 = *(_BYTE *)(a1 + 56);
  v4 = *(_QWORD *)(v1 + 528);
  if ( v4 != *(_QWORD *)(a1 + 128) )
    KeBugCheckEx(0x34u, 0x195EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = (KSPIN_LOCK *)(v4 + 64);
  while ( 1 )
  {
    v41 = 0;
    KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
    ++*(_DWORD *)(v1 + 4);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    LOBYTE(v6) = 1;
    CcApplyLowIoPriorityToThread(v4, v6, v1);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &v40);
    v7 = (unsigned int)CcMaxNumberOfWriteBehindThreads < *(_DWORD *)(v4 + 272);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v40);
    __writecr8(v40.OldIrql);
    if ( !v7 )
      CcApplyLowIoPriorityToThread(v4, 0LL, v1);
    LOBYTE(v8) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v8) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
    v9 = *(_QWORD *)(v1 + 160);
    v43 = *(_DWORD *)(v1 + 152) & 0x10000;
    if ( v9 )
    {
      v28 = *(_DWORD *)(v9 + 8);
      *(_DWORD *)(v9 + 4) = v28;
      v29 = *(_DWORD *)(v4 + 528);
      if ( v28 > v29 )
        *(_DWORD *)(v9 + 4) = v29;
      v10 = *(_DWORD *)(v9 + 4);
    }
    else
    {
      v10 = *(_DWORD *)(v1 + 192);
    }
    v11 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    SectionObjectPointer = v11;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v10);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v10),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v12 = &v37;
      v37 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      v12 = 0LL;
    }
    CcFlushCachePriv((__int64)v11, &CcNoDelay, 1u, (__int64)v12, 0, v3);
    CcApplyLowIoPriorityToThread(v4, 0LL, v1);
    v13 = -v10;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v13);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v13);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    if ( *v3 != -2147483626 && CcIsFatalWriteError(v1, *v3) )
    {
      v36 = CcReferenceSharedCacheMapFileObject(v1, v26, v27);
      CcMmLogLostDelayedWriteError(v36, *v3);
      CcDereferenceSharedCacheMapFileObject(v1, v36);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    v15 = *(_DWORD *)(v1 + 4) <= 1u;
    FlushedValidData = *(LARGE_INTEGER *)(v1 + 40);
    v44 = FlushedValidData;
    v17 = !v15 && *(_QWORD *)(*(_QWORD *)(v1 + 528) + 816LL) != *(_QWORD *)(v1 + 528) + 816LL;
    v18 = (*(_DWORD *)(v1 + 152) & 0x400) != 0
       && *(_QWORD *)(v1 + 48) >= FlushedValidData.QuadPart
       && FlushedValidData.QuadPart != 0x7FFFFFFFFFFFFFFFLL
       && *(_QWORD *)(v1 + 8);
    if ( !*(_DWORD *)(v1 + 516) && v18 && !v17 )
    {
      FlushedValidData = CcGetFlushedValidData(SectionObjectPointer, 1u);
      v44 = FlushedValidData;
      if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
        v32 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1, v30, v31);
        valid = CcSetValidData(v32, (__int64 *)&v44);
        CcDereferenceSharedCacheMapFileObject(v1, v32);
        ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
        if ( valid < 0 )
        {
          if ( valid == -1073741740 || valid == -1073741670 || valid == -2147483626 )
          {
            FlushedValidData = v44;
          }
          else
          {
            FlushedValidData = *(LARGE_INTEGER *)(v1 + 48);
            v44 = FlushedValidData;
          }
        }
        else
        {
          FlushedValidData = v44;
          *(LARGE_INTEGER *)(v1 + 40) = v44;
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 64), &LockHandle);
    if ( (*(_DWORD *)(v1 + 4))-- == 1 )
    {
      if ( valid != -1073741740 && valid != -2147483626 && valid != -1073741670 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v23 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1, v21, v22);
        FsRtlAcquireFileExclusive(v23);
        v5 = (KSPIN_LOCK *)(v4 + 64);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 64), &LockHandle);
        v24 = *(_DWORD *)(v1 + 4);
        if ( !v24
          && (!*(_DWORD *)(v1 + 112)
           && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
            || (*(_DWORD *)(v1 + 152) & 0x400) == 0
            || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
           || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
        {
          result = CcDeleteSharedCacheMap(v1, &LockHandle, 1LL, v23);
          *((_QWORD *)v3 + 1) = 0LL;
          goto LABEL_28;
        }
        if ( *(_DWORD *)(v1 + 112) )
        {
          v33 = v43;
          if ( v43 )
            CcCancelMmWaitForUninitializeCacheMap(v1);
        }
        else
        {
          if ( !v24 )
          {
            CcInsertIntoDirtySharedCacheMapList(v1);
            v41 = 1;
          }
          v33 = v43;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        FsRtlReleaseFile(v23);
        CcDereferenceSharedCacheMapFileObject(v1, v23);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 64), &LockHandle);
        goto LABEL_48;
      }
      v33 = v43;
      if ( v43 )
        CcCancelMmWaitForUninitializeCacheMap(v1);
      if ( !*(_DWORD *)(v1 + 112) )
      {
        CcInsertIntoDirtySharedCacheMapList(v1);
        v34 = 1;
        v5 = (KSPIN_LOCK *)(v4 + 64);
        goto LABEL_49;
      }
    }
    else
    {
      v33 = v43;
    }
    v5 = (KSPIN_LOCK *)(v4 + 64);
LABEL_48:
    v34 = v41;
LABEL_49:
    if ( (*(_DWORD *)(v1 + 152) & 0x10000) == 0 || v33 )
    {
      if ( *((_QWORD *)v3 + 1) != 35422LL )
        *(_DWORD *)(v1 + 152) &= ~0x20u;
      if ( v34 )
      {
        *(_BYTE *)(v4 + 665) = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
        {
          LOBYTE(v19) = 1;
          v35 = 1LL;
        }
        else
        {
          v19 = 0LL;
          v35 = 0LL;
        }
        CcScheduleLazyWriteScan(v4, v35, v19);
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = LockHandle.OldIrql;
      __writecr8(LockHandle.OldIrql);
      goto LABEL_28;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  CcApplyLowIoPriorityToThread(v4, 0LL, v1);
  KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  CcDecrementOpenCount(v1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  *v3 = -1073741740;
LABEL_28:
  if ( v42 )
    return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  return result;
}
