/*
 * XREFs of CcPrepareMdlWrite @ 0x14012D230
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x1406B0380 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14007B720 (CcMapAndRead.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     CcForceWriteThrough @ 0x14012D540 (CcForceWriteThrough.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v6; // edi
  unsigned int v8; // esi
  struct _FAST_MUTEX *SharedCacheMap; // r14
  LONGLONG QuadPart; // rbx
  unsigned int v11; // r15d
  LONGLONG v12; // rdi
  int v13; // esi
  __int64 v14; // rdx
  struct _KEVENT *v15; // rcx
  PMDL v16; // rcx
  struct _MDL *Next; // rax
  __int64 Partition; // rax
  PIO_STATUS_BLOCK v19; // rdx
  char v20; // [rsp+34h] [rbp-A4h]
  __int64 v21; // [rsp+3Ch] [rbp-9Ch]
  PMDL Mdl; // [rsp+40h] [rbp-98h]
  signed __int64 v23; // [rsp+48h] [rbp-90h]
  __int64 v24; // [rsp+50h] [rbp-88h] BYREF
  LONGLONG v25; // [rsp+58h] [rbp-80h]
  struct _FAST_MUTEX *v26; // [rsp+60h] [rbp-78h]
  PVOID VirtualAddress; // [rsp+68h] [rbp-70h]
  PMDL i; // [rsp+70h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-60h] BYREF
  LONGLONG v30; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  ULONG v32; // [rsp+E0h] [rbp+8h] BYREF
  PLARGE_INTEGER v33; // [rsp+E8h] [rbp+10h]
  ULONG v34; // [rsp+F0h] [rbp+18h]
  PMDL *v35; // [rsp+F8h] [rbp+20h]

  v35 = MdlChain;
  v34 = Length;
  v33 = FileOffset;
  v6 = Length;
  v8 = 0;
  LODWORD(v21) = 0;
  v24 = 0LL;
  SharedCacheMap = (struct _FAST_MUTEX *)FileObject->SectionObjectPointer->SharedCacheMap;
  v26 = SharedCacheMap;
  if ( (FileObject->Flags & 0x10) == 0 && (unsigned __int8)CcForceWriteThrough(FileObject, Length, SharedCacheMap, 0LL) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v25 = QuadPart;
  while ( v6 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v24, &v32, 0, 0);
    v11 = v32;
    if ( v32 > v6 )
      v11 = v6;
    v32 = v11;
    v12 = QuadPart + v11;
    v30 = v12;
    v13 = 2;
    if ( (QuadPart & 0xFFF) == 0 && v11 >= 0x1000 )
      v13 = 3;
    if ( (v12 & 0xFFF) == 0 )
      v13 |= 4u;
    ExAcquireFastMutex(SharedCacheMap + 5);
    v23 = *(_QWORD *)&SharedCacheMap->OldIrql - (QuadPart & 0xFFFFFFFFFFFFF000uLL);
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    if ( v23 > 0 )
    {
      if ( (unsigned __int64)v23 <= 0x1000 )
        v13 |= 6u;
    }
    else
    {
      v13 |= 7u;
    }
    CcMapAndRead(v11, v13, 1, (__int64)VirtualAddress);
    Mdl = IoAllocateMdl(VirtualAddress, v11, 0, 0, 0LL);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v20 = BYTE5(CurrentThread[1].Queue) + 2;
    BYTE5(CurrentThread[1].Queue) = 1;
    MiProbeAndLockPages(Mdl, 0, 1);
    BYTE5(KeGetCurrentThread()[1].Queue) = v20 - 2;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v12 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v12;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    v14 = *(_QWORD *)(v24 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v24 + 16)) )
    {
      v15 = *(struct _KEVENT **)(v14 + 184);
      if ( v15 )
        KeSetEvent(v15, 0, 0);
    }
    v24 = 0LL;
    v16 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v16->Next;
        if ( !v16->Next )
          break;
        v16 = v16->Next;
      }
      v16->Next = Mdl;
    }
    else
    {
      *MdlChain = Mdl;
    }
    QuadPart += v11;
    v25 = v12;
    v8 = v32 + v21;
    v21 = v32 + (unsigned int)v21;
    v6 = v34 - v32;
    v34 -= v32;
  }
  Partition = CcGetPartition(SharedCacheMap);
  v19 = IoStatus;
  IoStatus->Status = 0;
  v19->Information = v8;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  ++*(&SharedCacheMap->Count + 1);
  ++LODWORD(SharedCacheMap[9].Event.Header.WaitListHead.Flink);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
