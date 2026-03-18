/*
 * XREFs of CcSetLogHandleForFile @ 0x1401E1240
 * Callers:
 *     <none>
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __stdcall CcSetLogHandleForFile(PFILE_OBJECT FileObject, PVOID LogHandle, PFLUSH_TO_LSN FlushToLsnRoutine)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  char *SharedCacheMap; // rbx
  _QWORD *Partition; // rdi
  bool v8; // zf
  char **v9; // rdx
  PVOID *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( !*((_DWORD *)SharedCacheMap + 1) )
    KeBugCheckEx(0x34u, 0x270uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*((_DWORD *)SharedCacheMap + 38) & 0x1000000) != 0 )
    KeBugCheckEx(0x34u, 0x276uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = (_QWORD *)CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap);
  KeAcquireInStackQueuedSpinLock(Partition + 16, &LockHandle);
  v8 = *((_QWORD *)SharedCacheMap + 30) == 0LL;
  *((_QWORD *)SharedCacheMap + 31) = FlushToLsnRoutine;
  if ( !v8 )
  {
    v9 = (char **)*((_QWORD *)SharedCacheMap + 15);
    if ( v9[1] != SharedCacheMap + 120
      || (v10 = (PVOID *)*((_QWORD *)SharedCacheMap + 16), *v10 != SharedCacheMap + 120) )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    v9[1] = (char *)v10;
  }
  if ( LogHandle )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x2000000u;
    v11 = SharedCacheMap + 120;
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v12 = Partition + 12;
      v13 = (_QWORD *)Partition[13];
      if ( (_QWORD *)*v13 != Partition + 12 )
        __fastfail(3u);
    }
    else
    {
      v12 = Partition + 4;
      v13 = (_QWORD *)Partition[5];
      if ( (_QWORD *)*v13 != Partition + 4 )
        __fastfail(3u);
    }
    *v11 = v12;
    *((_QWORD *)SharedCacheMap + 16) = v13;
    *v13 = v11;
    v12[1] = v11;
  }
  *((_QWORD *)SharedCacheMap + 30) = LogHandle;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
