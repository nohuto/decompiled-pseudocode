/*
 * XREFs of CcWriteBehindInternal @ 0x1400DE8B0
 * Callers:
 *     CcWriteBehind @ 0x140042EF0 (CcWriteBehind.c)
 * Callees:
 *     CcSetValidData @ 0x1400074E4 (CcSetValidData.c)
 *     CcApplyLowIoPriorityToThread @ 0x140042A4C (CcApplyLowIoPriorityToThread.c)
 *     CcGetFlushedValidData @ 0x14004DC70 (CcGetFlushedValidData.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcIsFatalWriteError @ 0x1400C52EC (CcIsFatalWriteError.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1400DADCC (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400EAAAC (CcReferenceSharedCacheMapFileObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x14021F91C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcMmLogLostDelayedWriteError @ 0x1402202B4 (CcMmLogLostDelayedWriteError.c)
 *     FsRtlAcquireFileExclusive @ 0x1404C1530 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 */

void __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int64 v1; // rsi
  __int64 Partition; // rax
  __int64 v4; // r15
  KSPIN_LOCK *v5; // rbx
  KSPIN_LOCK *v6; // r12
  unsigned int v7; // edi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebx
  SECTION_OBJECT_POINTERS *v12; // r12
  __int64 *v13; // r9
  unsigned int v14; // ebx
  int valid; // edi
  LARGE_INTEGER FlushedValidData; // rbx
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // rax
  char v20; // al
  struct _FILE_OBJECT *v21; // rdi
  int v22; // r11d
  int v23; // ebx
  char v24; // dl
  int v25; // eax
  unsigned int v26; // ecx
  struct _FILE_OBJECT *v27; // rbx
  bool v28; // zf
  char v29; // r8
  char v30; // dl
  unsigned __int64 v31; // rbx
  int v32; // r11d
  int *v33; // [rsp+30h] [rbp-49h]
  __int64 v34; // [rsp+38h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+58h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+70h] [rbp-9h] BYREF
  char v38; // [rsp+E0h] [rbp+67h]
  char v39; // [rsp+E8h] [rbp+6Fh]
  int v40; // [rsp+F0h] [rbp+77h]
  LARGE_INTEGER v41; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v33 = *(int **)(a1 + 24);
  v39 = *(_BYTE *)(a1 + 56);
  Partition = CcGetPartition(v1);
  v4 = Partition;
  if ( Partition != *(_QWORD *)(a1 + 128) )
    KeBugCheckEx(0x34u, 0x198AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = (KSPIN_LOCK *)(Partition + 192);
  v6 = (KSPIN_LOCK *)(Partition + 128);
  while ( 1 )
  {
    v38 = 0;
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    ++*(_DWORD *)(v1 + 4);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    CcApplyLowIoPriorityToThread(v4, 1, (_DWORD *)v1);
    KeAcquireInStackQueuedSpinLock(v5, &v37);
    v7 = *(_DWORD *)(v4 + 896);
    v8 = *(_DWORD *)(v4 + 200);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v37);
    __writecr8(v37.OldIrql);
    if ( v7 >= v8 )
      CcApplyLowIoPriorityToThread(v4, 0, (_DWORD *)v1);
    LOBYTE(v9) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v1 + 208))(*(_QWORD *)(v1 + 216), v9) )
      break;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
    v40 = *(_DWORD *)(v1 + 152) & 0x10000;
    v10 = *(_QWORD *)(v1 + 160);
    if ( v10 )
    {
      v26 = *(_DWORD *)(v10 + 8);
      *(_DWORD *)(v10 + 4) = v26;
      v11 = *(_DWORD *)(v4 + 456);
      if ( v26 > v11 )
        *(_DWORD *)(v10 + 4) = v11;
      else
        v11 = v26;
    }
    else
    {
      v11 = *(_DWORD *)(v1 + 192);
    }
    v12 = *(SECTION_OBJECT_POINTERS **)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v11);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0
      && (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v11),
          (*(_DWORD *)(v1 + 152) & 0x1000000) != 0) )
    {
      v13 = &v34;
      v34 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 112LL);
    }
    else
    {
      LODWORD(v13) = 0;
    }
    CcFlushCachePriv((_DWORD)v12, (unsigned int)&CcNoDelay, 1, (_DWORD)v13, 0, (__int64)v33);
    CcApplyLowIoPriorityToThread(v4, 0, (_DWORD *)v1);
    v14 = -v11;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 196LL), v14);
    if ( (*(_DWORD *)(v1 + 152) & 0x1000000) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v1 + 504) + 200LL), v14);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v1 + 208) + 8LL))(*(_QWORD *)(v1 + 216));
    if ( *v33 != -2147483626 && CcIsFatalWriteError(v1, *v33) )
    {
      v31 = CcReferenceSharedCacheMapFileObject(v1);
      CcMmLogLostDelayedWriteError(v31, (unsigned int)*v33);
      CcDereferenceSharedCacheMapFileObject(v1, v31);
    }
    valid = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
    FlushedValidData = *(LARGE_INTEGER *)(v1 + 40);
    v41 = FlushedValidData;
    v17 = CcGetPartition(v1);
    if ( *(_DWORD *)(v1 + 4) <= 1u || (v18 = 1, *(_QWORD *)(v17 + 744) == v17 + 744) )
      v18 = 0;
    if ( (*(_DWORD *)(v1 + 152) & 0x400) == 0
      || (v19 = *(_QWORD *)(v1 + 40), *(_QWORD *)(v1 + 48) < v19)
      || v19 == 0x7FFFFFFFFFFFFFFFLL
      || (v20 = 1, !*(_QWORD *)(v1 + 8)) )
    {
      v20 = 0;
    }
    if ( !*(_DWORD *)(v1 + 516) )
    {
      if ( v20 )
      {
        if ( !v18 )
        {
          FlushedValidData = CcGetFlushedValidData(v12, 1u);
          v41 = FlushedValidData;
          if ( FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 40) )
          {
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
            v27 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
            valid = CcSetValidData(v27, (__int64 *)&v41);
            CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v27);
            ExAcquireFastMutex((PFAST_MUTEX)(v1 + 280));
            if ( valid < 0 )
            {
              if ( valid == -1073741740 || valid == -1073741670 || valid == -2147483626 )
              {
                FlushedValidData = v41;
              }
              else
              {
                FlushedValidData = *(LARGE_INTEGER *)(v1 + 48);
                v41 = FlushedValidData;
              }
            }
            else
            {
              FlushedValidData = v41;
              *(LARGE_INTEGER *)(v1 + 40) = v41;
            }
          }
        }
      }
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v1 + 280));
    v6 = (KSPIN_LOCK *)(v4 + 128);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
    v28 = (*(_DWORD *)(v1 + 4))-- == 1;
    if ( !v28 )
    {
      v23 = v40;
LABEL_39:
      v24 = 0;
      goto LABEL_40;
    }
    if ( valid == -1073741740 || valid == -2147483626 || valid == -1073741670 )
    {
      v23 = v40;
      if ( v40 )
        CcCancelMmWaitForUninitializeCacheMap(v1);
      if ( !*(_DWORD *)(v1 + 112) )
      {
        CcInsertIntoDirtySharedCacheMapList(v1);
        v24 = 1;
        goto LABEL_40;
      }
      goto LABEL_39;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v21 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v1);
    FsRtlAcquireFileExclusive(v21);
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v36);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
    v22 = *(_DWORD *)(v1 + 4);
    if ( !v22
      && (!*(_DWORD *)(v1 + 112)
       && (*(_QWORD *)(v1 + 40) == 0x7FFFFFFFFFFFFFFFLL
        || (*(_DWORD *)(v1 + 152) & 0x400) == 0
        || FlushedValidData.QuadPart >= *(_QWORD *)(v1 + 48))
       || !*(_QWORD *)(v1 + 8) && (*(_DWORD *)(v1 + 152) & 4) == 0) )
    {
      CcDeleteSharedCacheMap((char *)v1, &v36, &LockHandle, 1, v21);
      *((_QWORD *)v33 + 1) = 0LL;
      goto LABEL_31;
    }
    if ( *(_DWORD *)(v1 + 112) )
    {
      v23 = v40;
      if ( v40 )
        CcCancelMmWaitForUninitializeCacheMap(v1);
    }
    else
    {
      v28 = v22 == 0;
      if ( !v22 )
      {
        CcInsertIntoDirtySharedCacheMapList(v1);
        v28 = v32 == 0;
      }
      v23 = v40;
      v38 = v28;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
    __writecr8(v36.OldIrql);
    FsRtlReleaseFile(v21);
    CcDereferenceSharedCacheMapFileObject(v1, (unsigned __int64)v21);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
    v24 = v38;
LABEL_40:
    v25 = *(_DWORD *)(v1 + 152);
    if ( (v25 & 0x10000) == 0 || v23 )
    {
      if ( *((_QWORD *)v33 + 1) != 35422LL )
        *(_DWORD *)(v1 + 152) = v25 & 0xFFFFFFDF;
      if ( v24 )
      {
        *(_BYTE *)(v4 + 593) = 1;
        if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
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
      goto LABEL_31;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v5 = (KSPIN_LOCK *)(v4 + 192);
  }
  CcApplyLowIoPriorityToThread(v4, 0, (_DWORD *)v1);
  KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
  *(_DWORD *)(v1 + 152) &= ~0x20u;
  if ( (*(_DWORD *)(v1 + 152) & 0x10000) != 0 )
    CcCancelMmWaitForUninitializeCacheMap(v1);
  CcDecrementOpenCount(v1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  *v33 = -1073741740;
LABEL_31:
  if ( v39 )
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
