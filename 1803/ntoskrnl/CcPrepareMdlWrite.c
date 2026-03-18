/*
 * XREFs of CcPrepareMdlWrite @ 0x140098000
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x140714B20 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     CcForceWriteThrough @ 0x140098ED0 (CcForceWriteThrough.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     CcGetVirtualAddress @ 0x14011DD70 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14011E210 (CcMapAndRead.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
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
  ULONG v11; // r15d
  LONGLONG v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // r8
  char v16; // bl
  __int64 v17; // rdx
  PMDL v18; // rcx
  struct _KEVENT *v19; // rcx
  struct _MDL *Next; // rax
  __int64 Partition; // rax
  PIO_STATUS_BLOCK v22; // rdx
  __int64 v23; // [rsp+3Ch] [rbp-9Ch]
  PMDL Mdl; // [rsp+40h] [rbp-98h]
  __int64 v25; // [rsp+48h] [rbp-90h] BYREF
  LONGLONG v26; // [rsp+50h] [rbp-88h]
  unsigned __int64 v27; // [rsp+58h] [rbp-80h]
  struct _FAST_MUTEX *v28; // [rsp+60h] [rbp-78h]
  PVOID VirtualAddress; // [rsp+68h] [rbp-70h]
  PMDL i; // [rsp+70h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-60h] BYREF
  LONGLONG v32; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  ULONG v34; // [rsp+E0h] [rbp+8h] BYREF
  PLARGE_INTEGER v35; // [rsp+E8h] [rbp+10h]
  ULONG v36; // [rsp+F0h] [rbp+18h]
  PMDL *v37; // [rsp+F8h] [rbp+20h]

  v37 = MdlChain;
  v36 = Length;
  v35 = FileOffset;
  v6 = Length;
  v8 = 0;
  LODWORD(v23) = 0;
  v25 = 0LL;
  SharedCacheMap = (struct _FAST_MUTEX *)FileObject->SectionObjectPointer->SharedCacheMap;
  v28 = SharedCacheMap;
  if ( (FileObject->Flags & 0x10) == 0 && (unsigned __int8)CcForceWriteThrough(FileObject, Length, SharedCacheMap, 0LL) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v26 = QuadPart;
  while ( v6 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress(
                              (_DWORD)SharedCacheMap,
                              QuadPart,
                              (unsigned int)&v25,
                              (unsigned int)&v34,
                              0,
                              0);
    v11 = v34;
    if ( v34 > v6 )
      v11 = v6;
    v34 = v11;
    v12 = QuadPart + v11;
    v32 = v12;
    v13 = 2;
    if ( (QuadPart & 0xFFF) == 0 && v11 >= 0x1000 )
      v13 = 3;
    if ( (v12 & 0xFFF) == 0 )
      v13 |= 4u;
    v27 = QuadPart & 0xFFFFFFFFFFFFF000uLL;
    ExAcquireFastMutex(SharedCacheMap + 5);
    v27 = *(_QWORD *)&SharedCacheMap->OldIrql - v27;
    v14 = v27;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    if ( v14 <= 0 )
    {
      v13 |= 7u;
    }
    else if ( (unsigned __int64)v14 <= 0x1000 )
    {
      v13 |= 6u;
    }
    LOBYTE(v15) = 1;
    CcMapAndRead(v11, v13, v15, VirtualAddress);
    Mdl = IoAllocateMdl(VirtualAddress, v11, 0, 0, 0LL);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v16 = BYTE5(CurrentThread[1].Queue) + 2;
    BYTE5(CurrentThread[1].Queue) = 1;
    MiProbeAndLockPages(Mdl, 0, 1);
    BYTE5(KeGetCurrentThread()[1].Queue) = v16 - 2;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v12 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v12;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    v17 = *(_QWORD *)(v25 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v25 + 16)) )
    {
      v19 = *(struct _KEVENT **)(v17 + 184);
      if ( v19 )
        KeSetEvent(v19, 0, 0);
    }
    v25 = 0LL;
    v18 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v18->Next;
        if ( !v18->Next )
          break;
        v18 = v18->Next;
      }
      v18->Next = Mdl;
    }
    else
    {
      *MdlChain = Mdl;
    }
    QuadPart = v12;
    v26 = v12;
    v8 = v34 + v23;
    v23 = v34 + (unsigned int)v23;
    v6 = v36 - v34;
    v36 -= v34;
  }
  Partition = CcGetPartition(SharedCacheMap);
  v22 = IoStatus;
  IoStatus->Status = 0;
  v22->Information = v8;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  ++*(&SharedCacheMap->Count + 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
