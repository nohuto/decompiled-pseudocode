/*
 * XREFs of CcSetLogHandleForFile @ 0x1401DE170
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall CcSetLogHandleForFile(PFILE_OBJECT FileObject, PVOID LogHandle, PFLUSH_TO_LSN FlushToLsnRoutine)
{
  char *SharedCacheMap; // rbx
  KSPIN_LOCK *v6; // rdi
  bool v7; // zf
  char **v8; // rdx
  PVOID *v9; // rcx
  KSPIN_LOCK **v10; // rax
  KSPIN_LOCK *v11; // rcx
  KSPIN_LOCK **v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !*((_DWORD *)SharedCacheMap + 1) )
    KeBugCheckEx(0x34u, 0x25AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*((_DWORD *)SharedCacheMap + 38) & 0x1000000) != 0 )
    KeBugCheckEx(0x34u, 0x260uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (KSPIN_LOCK *)*((_QWORD *)SharedCacheMap + 66);
  KeAcquireInStackQueuedSpinLock(v6 + 8, &LockHandle);
  v7 = *((_QWORD *)SharedCacheMap + 30) == 0LL;
  *((_QWORD *)SharedCacheMap + 31) = FlushToLsnRoutine;
  if ( !v7 )
  {
    v8 = (char **)*((_QWORD *)SharedCacheMap + 15);
    v9 = (PVOID *)*((_QWORD *)SharedCacheMap + 16);
    if ( v8[1] != SharedCacheMap + 120 || *v9 != SharedCacheMap + 120 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = (char *)v9;
  }
  if ( LogHandle )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x2000000u;
    v10 = (KSPIN_LOCK **)(SharedCacheMap + 120);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v11 = v6 + 30;
      v12 = (KSPIN_LOCK **)v6[31];
      if ( *v12 != v6 + 30 )
        __fastfail(3u);
    }
    else
    {
      v11 = v6 + 22;
      v12 = (KSPIN_LOCK **)v6[23];
      if ( *v12 != v6 + 22 )
        __fastfail(3u);
    }
    *v10 = v11;
    *((_QWORD *)SharedCacheMap + 16) = v12;
    *v12 = (KSPIN_LOCK *)v10;
    v11[1] = (KSPIN_LOCK)v10;
  }
  *((_QWORD *)SharedCacheMap + 30) = LogHandle;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
