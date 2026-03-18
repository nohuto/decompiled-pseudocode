/*
 * XREFs of CcPrepareMdlWrite @ 0x1400339A0
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x140684F90 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14009E170 (CcMapAndRead.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWriteStream @ 0x1400AE444 (CcCanIWriteStream.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v5; // edi
  unsigned int v7; // esi
  struct _FAST_MUTEX *SharedCacheMap; // r14
  ULONG Flags; // eax
  bool v10; // bl
  LONGLONG QuadPart; // rbx
  ULONG v12; // r12d
  LONGLONG v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // r8
  __int64 v16; // rdx
  struct _MDL *v17; // rcx
  struct _KEVENT *v18; // rcx
  struct _MDL *Next; // rax
  PIO_STATUS_BLOCK v20; // rcx
  char v21; // [rsp+34h] [rbp-B4h]
  __int64 v22; // [rsp+3Ch] [rbp-ACh]
  PMDL Mdl; // [rsp+40h] [rbp-A8h]
  signed __int64 v24; // [rsp+48h] [rbp-A0h]
  __int64 v25; // [rsp+50h] [rbp-98h] BYREF
  LONGLONG v26; // [rsp+58h] [rbp-90h]
  struct _FAST_MUTEX *v27; // [rsp+60h] [rbp-88h]
  PVOID VirtualAddress; // [rsp+68h] [rbp-80h]
  PMDL i; // [rsp+70h] [rbp-78h]
  __int64 v30; // [rsp+78h] [rbp-70h]
  __int64 v31; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-60h] BYREF
  LONGLONG v33; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-40h]
  ULONG v35; // [rsp+F0h] [rbp+8h] BYREF
  PLARGE_INTEGER v36; // [rsp+F8h] [rbp+10h]
  ULONG v37; // [rsp+100h] [rbp+18h]
  PMDL *v38; // [rsp+108h] [rbp+20h]

  v38 = MdlChain;
  v37 = Length;
  v36 = FileOffset;
  v5 = Length;
  v7 = 0;
  LODWORD(v22) = 0;
  v25 = 0LL;
  SharedCacheMap = (struct _FAST_MUTEX *)FileObject->SectionObjectPointer->SharedCacheMap;
  v27 = SharedCacheMap;
  v30 = *(_QWORD *)&SharedCacheMap[9].Event.Header.Lock;
  v31 = v30;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) == 0 )
  {
    v10 = 0;
    if ( (Flags & 0x1000000) != 0 )
      v10 = (unsigned __int8)CcCanIWriteStream(FileObject, Length, 0LL, 0LL) == 0;
    if ( v10 )
      RtlRaiseStatus(-1073741670);
  }
  QuadPart = FileOffset->QuadPart;
  v26 = FileOffset->QuadPart;
  while ( v5 )
  {
    VirtualAddress = (PVOID)CcGetVirtualAddress(
                              (_DWORD)SharedCacheMap,
                              QuadPart,
                              (unsigned int)&v25,
                              (unsigned int)&v35,
                              0,
                              0);
    v12 = v35;
    if ( v35 > v5 )
      v12 = v5;
    v35 = v12;
    v13 = QuadPart + v12;
    v33 = v13;
    v14 = 2;
    if ( (QuadPart & 0xFFF) == 0 && v12 >= 0x1000 )
      v14 = 3;
    if ( (v13 & 0xFFF) == 0 )
      v14 |= 4u;
    ExAcquireFastMutex(SharedCacheMap + 5);
    v24 = *(_QWORD *)&SharedCacheMap->OldIrql - (QuadPart & 0xFFFFFFFFFFFFF000uLL);
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    if ( v24 <= 0 )
    {
      v14 |= 7u;
    }
    else if ( (unsigned int)v24 <= 0x1000 && !HIDWORD(v24) )
    {
      v14 |= 6u;
    }
    LOBYTE(v15) = 1;
    CcMapAndRead(v12, v14, v15, VirtualAddress);
    Mdl = IoAllocateMdl(VirtualAddress, v12, 0, 0, 0LL);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v21 = BYTE5(CurrentThread[1].Queue) + 2;
    BYTE5(CurrentThread[1].Queue) = 1;
    MiProbeAndLockPages(Mdl, 0LL, 1LL);
    BYTE5(KeGetCurrentThread()[1].Queue) = v21 - 2;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v13 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v13;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    v16 = *(_QWORD *)(v25 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v25 + 16)) )
    {
      v18 = *(struct _KEVENT **)(v16 + 184);
      if ( v18 )
        KeSetEvent(v18, 0, 0);
    }
    v25 = 0LL;
    v17 = *v38;
    if ( *v38 )
    {
      for ( i = *v38; ; i = Next )
      {
        Next = v17->Next;
        if ( !v17->Next )
          break;
        v17 = v17->Next;
      }
      v17->Next = Mdl;
    }
    else
    {
      *v38 = Mdl;
    }
    QuadPart += v12;
    v26 = v13;
    v7 = v35 + v22;
    v22 = v35 + (unsigned int)v22;
    v5 = v37 - v35;
    v37 -= v35;
  }
  v20 = IoStatus;
  IoStatus->Status = 0;
  v20->Information = v7;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 64), &LockHandle);
  ++*(&SharedCacheMap->Count + 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
