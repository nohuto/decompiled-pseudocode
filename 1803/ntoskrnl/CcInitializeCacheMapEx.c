/*
 * XREFs of CcInitializeCacheMapEx @ 0x1400DF8F0
 * Callers:
 *     CcInitializeCacheMap @ 0x1400D1720 (CcInitializeCacheMap.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400B7344 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeVolumeCacheMap @ 0x1400B745C (CcInitializeVolumeCacheMap.c)
 *     MmDisableModifiedWriteOfSection @ 0x1400BA510 (MmDisableModifiedWriteOfSection.c)
 *     FsRtlIsNtstatusExpected @ 0x1400C6690 (FsRtlIsNtstatusExpected.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     CcCreatePartition @ 0x1401709C8 (CcCreatePartition.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CcDeletePartition @ 0x140220D68 (CcDeletePartition.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObDeleteCapturedInsertInfo @ 0x14049BE40 (ObDeleteCapturedInsertInfo.c)
 *     MmCreateCacheManagerSection @ 0x1404C10BC (MmCreateCacheManagerSection.c)
 *     CcCreateVacbArray @ 0x14055EA80 (CcCreateVacbArray.c)
 */

void __fastcall CcInitializeCacheMapEx(__int64 Object, __int128 *a2, char a3, __int64 a4, __int64 a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // r12
  _DWORD *v8; // r14
  _KPROCESS *Process; // r15
  __int64 v10; // r13
  __int128 v11; // xmm2
  unsigned __int64 v12; // rax
  int v13; // edi
  int v14; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r15
  _QWORD *v20; // rbx
  unsigned __int8 CurrentIrql; // al
  __int64 v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned __int8 v28; // al
  unsigned int v29; // eax
  __int16 v30; // cx
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  NTSTATUS v34; // edi
  struct _KEVENT *v35; // rcx
  _WORD *v36; // rdi
  int v37; // r14d
  unsigned __int8 v38; // cl
  unsigned __int8 v39; // al
  int v40; // ecx
  _QWORD *v41; // rax
  int v42; // ecx
  _QWORD *v43; // rdx
  char v44; // r15
  int v45; // edi
  int v46; // esi
  __int64 v47; // rcx
  _QWORD *FileObjectExtension; // rcx
  _KSPIN_LOCK_QUEUE *v49; // r8
  int v50; // ecx
  unsigned int v51; // eax
  unsigned __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 Partition; // rax
  __int64 v55; // rax
  void *v56; // r15
  _QWORD *v57; // rax
  struct _KEVENT *v58; // rcx
  bool v59; // zf
  char *v60; // rax
  _QWORD *v61; // rax
  NTSTATUS v62; // edi
  BOOLEAN IsNtstatusExpected; // al
  int v64; // ecx
  unsigned int v65; // eax
  int v66; // esi
  KIRQL v67; // [rsp+30h] [rbp-A9h]
  NTSTATUS Status; // [rsp+38h] [rbp-A1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE v71; // [rsp+58h] [rbp-81h] BYREF
  int v72; // [rsp+70h] [rbp-69h]
  unsigned int v73; // [rsp+74h] [rbp-65h]
  unsigned int v74; // [rsp+78h] [rbp-61h]
  PVOID P; // [rsp+80h] [rbp-59h]
  int v76; // [rsp+88h] [rbp-51h]
  PVOID Objecta; // [rsp+90h] [rbp-49h] BYREF
  PVOID v78; // [rsp+98h] [rbp-41h]
  _KPROCESS *v79; // [rsp+A0h] [rbp-39h]
  __int64 v80; // [rsp+A8h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE v81; // [rsp+B0h] [rbp-29h] BYREF
  unsigned __int128 v82; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v83; // [rsp+D8h] [rbp-1h]

  CurrentThread = KeGetCurrentThread();
  v80 = a4;
  v8 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v10 = 0LL;
  v79 = Process;
  v73 = 0;
  P = 0LL;
  v72 = 0;
  v76 = 0;
  v78 = 0LL;
  Status = 0;
  Objecta = 0LL;
  if ( CcDbgDisableDAX )
    v74 = a6 & 0xFFFFFFFE;
  else
    v74 = a6;
  v11 = *a2;
  v12 = *(_QWORD *)a2;
  v83 = *((_QWORD *)a2 + 2);
  v82 = __PAIR128__(*((unsigned __int64 *)&v11 + 1), v12);
  if ( !v12 )
  {
    LODWORD(v82) = 1;
    v12 = v82;
  }
  v13 = CurrentThread->MiscFlags & 0x400;
  if ( *(_BYTE *)(Object + 75) )
  {
    *(_QWORD *)&v82 = v12 + 0xFFFFF;
    v14 = (v12 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    *(_QWORD *)&v82 = v12 + 0x3FFFF;
    v14 = (v12 + 0x3FFFF) & 0xFFFC0000;
  }
  LODWORD(v82) = v14;
  if ( *(_QWORD *)(*(_QWORD *)(Object + 40) + 8LL) )
    goto LABEL_23;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x63536343u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      RtlRaiseStatus(-1073741670);
    memset(PoolWithTag, 0, 0x218uLL);
    v8 = v16;
    v17 = v73;
    P = v16;
    if ( (v74 & 1) != 0 )
    {
      v17 = v73 | 1;
      v73 |= 1u;
    }
    Status = MmCreateCacheManagerSection(&Objecta, &v82, v17, Object);
    if ( Status < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(Status) )
        Status = -1073741590;
LABEL_97:
      v44 = 0;
LABEL_98:
      v37 = 0;
LABEL_52:
      v45 = v37;
      v46 = v37;
      if ( v16 )
      {
        if ( !v37 )
        {
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v71);
          v37 = 1;
        }
        if ( v10 && !v45 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
          v46 = 1;
        }
        if ( !v76 && !v16[28] && v16[1] )
          CcInsertIntoCleanSharedCacheMapList((__int64)v16);
        v47 = *((_QWORD *)v16 + 34);
        if ( v47 )
        {
          do
          {
            v52 = v47 & 0xFFFFFFFFFFFFFFFEuLL;
            v53 = *(_QWORD *)v52;
            KeSetEvent((PRKEVENT)(v52 + 8), 0, 0);
            v47 = v53;
          }
          while ( v53 );
        }
        v16[38] &= ~0x10000u;
        *((_QWORD *)v16 + 34) = 0LL;
      }
      if ( !v46 )
        goto LABEL_63;
      goto LABEL_62;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    v18 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(**(_QWORD **)(Object + 40) + 60LL) & 0x3FF));
    v19 = *(_QWORD *)(v18 + 168);
    v10 = *(_QWORD *)(v19 + 8);
    if ( !v10 )
    {
      Partition = CcCreatePartition(*(_QWORD *)(v18 + 168));
      v10 = Partition;
      if ( !Partition )
        goto LABEL_14;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v81);
      v67 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      v55 = *(_QWORD *)(v19 + 8);
      if ( v55 )
      {
        v56 = (void *)v10;
        v10 = v55;
      }
      else
      {
        ++CcPartitionCount;
        *(_QWORD *)(v19 + 8) = v10;
        *(_BYTE *)(v10 + 901) = 1;
        if ( PsReferencePartitionSafe(v19) )
        {
          PsDereferencePartition(v19);
          v56 = 0LL;
        }
        else
        {
          v56 = 0LL;
          *(_BYTE *)(v10 + 902) = 1;
        }
      }
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      __writecr8(v67);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v81);
      __writecr8(v81.OldIrql);
      if ( v56 )
        CcDeletePartition(v56);
      if ( !v10 )
        goto LABEL_96;
    }
    if ( *(_BYTE *)(v10 + 902) >= 2u )
      KeBugCheckEx(0x34u, 0x54EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_14:
    if ( !v10 )
      goto LABEL_96;
    Process = v79;
    *v16 = 35128063;
    *((_QWORD *)v16 + 12) = Object;
    *((_QWORD *)v16 + 1) = *((_QWORD *)&v82 + 1);
    *((_QWORD *)v16 + 5) = v83;
    *((_QWORD *)v16 + 6) = v83;
    v16[128] = Process[1].ThreadSeed[1];
    *((_QWORD *)v16 + 66) = v10;
    Status = CcInitializeVolumeCacheMap(Object, (__int64 **)v16 + 63);
    if ( Status < 0 )
      RtlRaiseStatus(-1073741670);
    v16[70] = 1;
    *((_QWORD *)v16 + 36) = 0LL;
    v16[74] = 0;
    *((_WORD *)v16 + 152) = 1;
    *((_BYTE *)v16 + 306) = 6;
    v16[77] = 0;
    *((_QWORD *)v16 + 40) = v16 + 78;
    *((_QWORD *)v16 + 39) = v16 + 78;
    *((_QWORD *)v16 + 13) = 0LL;
    if ( a3 )
      v16[38] |= 4u;
    if ( (*(_DWORD *)(Object + 80) & 0x20) != 0 )
      v16[38] |= 0x40u;
    if ( !v13 )
      v16[38] |= 0x200000u;
    *((_QWORD *)v16 + 3) = v16 + 4;
    *((_QWORD *)v16 + 2) = v16 + 4;
    *((_QWORD *)v16 + 26) = v80;
    *((_QWORD *)v16 + 27) = a5;
    v20 = v16 + 56;
    v20[1] = v20;
    *v20 = v20;
LABEL_23:
    v71.LockQueue.Lock = &CcMasterLock;
    v71.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v71.OldIrql = CurrentIrql;
    KxAcquireQueuedSpinLock(&v71, &CcMasterLock);
    if ( *(_QWORD *)(Object + 48) )
      break;
    v16 = *(_DWORD **)(*(_QWORD *)(Object + 40) + 8LL);
    if ( v16 )
    {
      v10 = CcGetPartition(*(_QWORD *)(*(_QWORD *)(Object + 40) + 8LL));
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(Object, 8, 0LL);
      if ( FileObjectExtension && *FileObjectExtension != *(_QWORD *)(v10 + 8) )
      {
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 128);
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock(&LockHandle, v10 + 128);
        if ( v16[1] )
        {
          Status = -1073740277;
          v44 = 0;
        }
        else
        {
          Status = -1073741608;
          CcScheduleLazyWriteScan(v10, 1, 0);
          v44 = 1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
        __writecr8(v71.OldIrql);
        goto LABEL_98;
      }
      LockHandle.LockQueue.Next = v49;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 128);
      KxAcquireQueuedSpinLock(&LockHandle, v10 + 128);
      v50 = v16[38];
      if ( (*(_DWORD *)(Object + 80) & 0x20) == 0 )
      {
        v50 &= ~0x40u;
        v16[38] = v50;
      }
      if ( (v50 & 0x200000) != 0 && v13 )
        v16[38] = v50 & 0xFFDFFFFF;
      v51 = Process[1].ThreadSeed[1];
      if ( v51 )
        v16[128] = v51;
      goto LABEL_28;
    }
    if ( v8 )
    {
      v16 = v8;
      v8 = 0LL;
      P = 0LL;
      v22 = *((_QWORD *)v16 + 66);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v22 + 128);
      KxAcquireQueuedSpinLock(&LockHandle, v22 + 128);
      v23 = *(_QWORD **)(v22 + 24);
      v24 = v16 + 34;
      v25 = v22 + 16;
      if ( *v23 != v25 )
        __fastfail(3u);
      *((_QWORD *)v16 + 18) = v23;
      *v24 = v25;
      *v23 = v24;
      *(_QWORD *)(v25 + 8) = v24;
      v26 = *(_QWORD *)(Object + 40);
      v76 = 1;
      *(_QWORD *)(v26 + 8) = v16;
      ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
LABEL_28:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v10 = CcGetPartition(v16);
      LockHandle.LockQueue.Next = 0LL;
      v27 = v10 + 128;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 128);
      v28 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v28;
      KxAcquireQueuedSpinLock(&LockHandle, v10 + 128);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v16[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v29 = v16[38] & 0xFFFFFFEF;
      v30 = v16[38] & 0xFFEF;
      v16[38] = v29;
      v31 = v30 & 0x100;
      if ( *((_QWORD *)v16 + 11) )
      {
        if ( !v31 )
        {
          ++v16[1];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
LABEL_44:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
          __writecr8(v71.OldIrql);
LABEL_45:
          if ( v8 )
          {
            ExFreePoolWithTag(v8, 0x63536343u);
            P = 0LL;
          }
          v36 = v16 + 94;
          if ( *((_WORD *)v16 + 188) )
            goto LABEL_88;
          while ( 1 )
          {
            v71.LockQueue.Next = 0LL;
            v71.LockQueue.Lock = &CcMasterLock;
            v37 = 1;
            v38 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v71.OldIrql = v38;
            KxAcquireQueuedSpinLock(&v71, &CcMasterLock);
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 128);
            LockHandle.LockQueue.Next = 0LL;
            v39 = KeGetCurrentIrql();
            __writecr8(2uLL);
            LockHandle.OldIrql = v39;
            KxAcquireQueuedSpinLock(&LockHandle, v27);
            if ( *(_QWORD *)(Object + 48) )
              break;
            if ( !*v36 )
              goto LABEL_50;
            if ( v78 )
            {
              v36 = v78;
              v78 = 0LL;
LABEL_50:
              memset(v36, 0, 0x78uLL);
              *((_QWORD *)v36 + 1) = Object;
              *v36 = 766;
              *((_DWORD *)v36 + 1) = 4095;
              v40 = (unsigned __int8)PsGetPagePriorityThread(CurrentThread) << 18;
              v41 = v36 + 48;
              v42 = (*(_DWORD *)v36 ^ v40) & 0x1C0000;
              *((_QWORD *)v36 + 10) = 0LL;
              *(_DWORD *)v36 ^= v42;
              v43 = (_QWORD *)*((_QWORD *)v16 + 29);
              if ( (_DWORD *)*v43 != v16 + 56 )
                __fastfail(3u);
              *v41 = v16 + 56;
              v44 = 0;
              *((_QWORD *)v36 + 13) = v43;
              *v43 = v41;
              *((_QWORD *)v16 + 29) = v41;
              *(_QWORD *)(Object + 48) = v36;
              goto LABEL_52;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
            __writecr8(v71.OldIrql);
LABEL_88:
            v78 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
            if ( !v78 )
            {
              v8 = P;
              v34 = -1073741670;
              v66 = 0;
              goto LABEL_125;
            }
          }
          v65 = v16[1];
          if ( v65 <= 1 )
            KeBugCheckEx(0x34u, 0x740uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          v16[1] = v65 - 1;
          v44 = 0;
LABEL_62:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
LABEL_63:
          if ( v37 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
            __writecr8(v71.OldIrql);
          }
          v34 = Status;
          v8 = P;
LABEL_66:
          if ( v8 )
            ExFreePoolWithTag(v8, 0x63536343u);
          if ( v78 )
            ExFreePoolWithTag(v78, 0x63506343u);
          if ( Objecta )
            ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
          if ( v34 < 0 )
          {
            if ( v44 )
              KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
            RtlRaiseStatus(v34);
          }
          return;
        }
      }
      else if ( !v31 )
      {
        ++v16[1];
        v16[38] = v29 | 0x100;
        v32 = *((_QWORD *)v16 + 22);
        if ( v32 )
        {
          *(_WORD *)v32 = 0;
          *(_BYTE *)(v32 + 2) = 6;
          *(_DWORD *)(v32 + 4) = 0;
          v57 = (_QWORD *)(v32 + 8);
          v57[1] = v57;
          *v57 = v57;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
        __writecr8(v71.OldIrql);
        v72 = 1;
        if ( *((_QWORD *)v16 + 21) )
        {
          v34 = -1073741811;
        }
        else
        {
          if ( !Objecta )
            KeBugCheckEx(0x34u, 0x5F0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *((_QWORD *)v16 + 21) = Objecta;
          v33 = *(_QWORD *)(Object + 24);
          Objecta = 0LL;
          if ( (*(_BYTE *)(v33 + 6) & 1) == 0 && !*(_QWORD *)(Object + 32) )
          {
            MmDisableModifiedWriteOfSection(*(_QWORD *)(Object + 40));
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v71);
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 128);
            LockHandle.LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock(&LockHandle, v27);
            v16[38] |= 0x200u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
            __writecr8(v71.OldIrql);
          }
          Status = CcCreateVacbArray(v16, v82);
          v34 = Status;
          if ( Status >= 0 )
          {
            if ( (v74 & 1) != 0 )
            {
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v71);
              LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 128);
              LockHandle.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock(&LockHandle, v27);
              v16[38] |= 0x40000000u;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
              __writecr8(v71.OldIrql);
            }
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v71);
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 128);
            LockHandle.LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock(&LockHandle, v27);
            v35 = (struct _KEVENT *)*((_QWORD *)v16 + 22);
            v16[38] &= ~0x100u;
            if ( v35 )
              KeSetEvent(v35, 0, 0);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            goto LABEL_44;
          }
        }
LABEL_124:
        v66 = v72;
LABEL_125:
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v71);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
        if ( v66 )
        {
          v58 = (struct _KEVENT *)*((_QWORD *)v16 + 22);
          if ( v58 )
            KeSetEvent(v58, 0, 0);
          v16[38] &= ~0x100u;
        }
        v59 = v16[1]-- == 1;
        if ( !v59 || (v16[38] & 0x20) != 0 || v16[28] )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
          __writecr8(v71.OldIrql);
          v44 = 0;
        }
        else
        {
          CcDeleteSharedCacheMap((char *)v16, &v71, &LockHandle, 0, 0LL);
          v44 = 0;
        }
        goto LABEL_66;
      }
      if ( *((_QWORD *)v16 + 22) )
      {
LABEL_136:
        ++v16[1];
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
        __writecr8(v71.OldIrql);
        KeWaitForSingleObject(*((PVOID *)v16 + 22), Executive, 0, 0, 0LL);
        v62 = v16[39];
        if ( v62 >= 0 )
          goto LABEL_45;
        IsNtstatusExpected = FsRtlIsNtstatusExpected(v62);
        v64 = -1073741590;
        if ( IsNtstatusExpected )
          v64 = v62;
        v34 = v64;
        goto LABEL_124;
      }
      v60 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
      *((_QWORD *)v16 + 22) = v60;
      if ( v60 )
      {
        *(_WORD *)v60 = 0;
        v60[2] = 6;
        *((_DWORD *)v60 + 1) = 0;
        v61 = v60 + 8;
        v61[1] = v61;
        *v61 = v61;
        goto LABEL_136;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
      __writecr8(v71.OldIrql);
LABEL_96:
      Status = -1073741670;
      goto LABEL_97;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
    __writecr8(v71.OldIrql);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v71);
  __writecr8(v71.OldIrql);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x63536343u);
}
