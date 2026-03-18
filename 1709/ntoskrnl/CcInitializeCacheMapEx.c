/*
 * XREFs of CcInitializeCacheMapEx @ 0x1400636F0
 * Callers:
 *     CcInitializeCacheMap @ 0x14012FD10 (CcInitializeCacheMap.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140064600 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     KeReleaseSpinLock @ 0x1400E2730 (KeReleaseSpinLock.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400F3AB0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 *     CcInitializeVolumeCacheMap @ 0x14011B48C (CcInitializeVolumeCacheMap.c)
 *     MmDisableModifiedWriteOfSection @ 0x140124310 (MmDisableModifiedWriteOfSection.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     CcCreatePartition @ 0x140148170 (CcCreatePartition.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404E38B0 (ObDeleteCapturedInsertInfo.c)
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 *     MmCreateCacheManagerSection @ 0x140571B20 (MmCreateCacheManagerSection.c)
 *     CcCreateVacbArray @ 0x140574E98 (CcCreateVacbArray.c)
 */

void __fastcall CcInitializeCacheMapEx(_BYTE *Object, __m128i *a2, char a3, __int64 a4, __int64 a5, char a6)
{
  struct _KTHREAD *CurrentThread; // r8
  PVOID v8; // rbx
  unsigned int v9; // edi
  NTSTATUS VacbArray; // esi
  __int64 Partition; // r13
  __int64 v12; // r12
  __m128i v13; // xmm2
  int v15; // ecx
  int v16; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rbx
  unsigned int v19; // ecx
  NTSTATUS v20; // eax
  __int64 v21; // r8
  signed __int64 *v22; // rdx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  void *v25; // rdi
  KIRQL v26; // dl
  _QWORD *v27; // rbx
  unsigned __int8 CurrentIrql; // al
  __int64 v29; // rdi
  PVOID v30; // r15
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  _QWORD *FileObjectExtension; // rcx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // eax
  volatile __int64 *v39; // rdi
  unsigned __int8 v40; // al
  unsigned int v41; // eax
  bool v42; // zf
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  NTSTATUS v47; // eax
  int v48; // edi
  struct _KEVENT *v49; // rcx
  char *v50; // rax
  _QWORD *v51; // rax
  NTSTATUS v52; // r14d
  _WORD *v53; // r14
  int v54; // r15d
  unsigned __int8 v55; // cl
  unsigned __int8 v56; // al
  _BYTE *v57; // r9
  __int64 v58; // rcx
  int PagePriorityThread; // ecx
  __int64 v60; // r9
  _QWORD *v61; // rax
  int v62; // ecx
  int v63; // edi
  int v64; // r14d
  __int64 v65; // rcx
  unsigned __int64 v66; // rcx
  __int64 v67; // rdi
  unsigned int v68; // eax
  struct _KEVENT *v69; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-81h] BYREF
  struct _KLOCK_QUEUE_HANDLE v72; // [rsp+50h] [rbp-69h] BYREF
  PVOID P; // [rsp+68h] [rbp-51h]
  int v74; // [rsp+70h] [rbp-49h]
  PVOID Objecta; // [rsp+78h] [rbp-41h] BYREF
  PVOID v76; // [rsp+80h] [rbp-39h]
  unsigned int v77; // [rsp+88h] [rbp-31h]
  _KPROCESS *Process; // [rsp+90h] [rbp-29h]
  _BYTE *v79; // [rsp+98h] [rbp-21h]
  __int64 v80; // [rsp+A0h] [rbp-19h]
  struct _KTHREAD *v81; // [rsp+A8h] [rbp-11h]
  __m128i v82; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v83; // [rsp+C0h] [rbp+7h]
  char v84; // [rsp+138h] [rbp+7Fh]

  v79 = Object;
  CurrentThread = KeGetCurrentThread();
  v80 = a4;
  v8 = 0LL;
  v9 = 0;
  P = 0LL;
  VacbArray = 0;
  Process = CurrentThread->ApcState.Process;
  Partition = 0LL;
  v12 = 0LL;
  v13 = *a2;
  if ( CcDbgDisableDAX )
    a6 = -2;
  v83 = a2[1].m128i_i64[0];
  v84 = a6;
  v15 = _mm_cvtsi128_si32(v13);
  v82 = v13;
  v74 = 0;
  if ( !v13.m128i_i64[0] )
    v15 = 1;
  v76 = 0LL;
  v82.m128i_i32[0] = v15;
  v16 = CurrentThread->MiscFlags & 0x400;
  v81 = CurrentThread;
  Objecta = 0LL;
  if ( Object[75] )
  {
    v82.m128i_i64[0] += 0xFFFFFLL;
    v82.m128i_i32[0] &= 0xFFF00000;
  }
  else
  {
    v82.m128i_i64[0] += 0x3FFFFLL;
    v82.m128i_i32[0] &= 0xFFFC0000;
  }
  if ( *(_QWORD *)(*((_QWORD *)Object + 5) + 8LL) )
    goto LABEL_39;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x220uLL, 0x63536343u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
      RtlRaiseStatus(-1073741670);
    memset(PoolWithTag, 0, 0x220uLL);
    P = v18;
    v19 = v9 | 1;
    if ( (v84 & 1) == 0 )
      v19 = v9;
    v77 = v19;
    v20 = MmCreateCacheManagerSection(&Objecta, &v82, v19, Object);
    VacbArray = v20;
    if ( v20 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v20) )
        VacbArray = -1073741590;
      goto LABEL_167;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    v21 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(**((_QWORD **)Object + 5) + 60LL) & 0x3FF));
    v22 = (signed __int64 *)(*(_QWORD *)(v21 + 168) + 24LL);
    _m_prefetchw(v22);
    v23 = *v22;
    while ( (unsigned __int64)(v23 + 1) > 1 )
    {
      v24 = v23;
      v23 = _InterlockedCompareExchange64(v22, v23 + 1, v23);
      if ( v24 == v23 )
      {
        v12 = *(_QWORD *)(v21 + 168);
        goto LABEL_20;
      }
    }
    if ( v23 )
      __fastfail(0xEu);
    v12 = 0LL;
LABEL_20:
    if ( !v12 )
    {
      VacbArray = -1073740640;
      goto LABEL_167;
    }
    Partition = *(_QWORD *)(v12 + 8);
    v25 = 0LL;
    if ( !Partition )
    {
      Partition = CcCreatePartition(v12);
      if ( !Partition )
        goto LABEL_30;
      v26 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      if ( *(_QWORD *)(v12 + 8) )
      {
        v25 = (void *)Partition;
        Partition = *(_QWORD *)(v12 + 8);
      }
      else
      {
        ++CcPartitionCount;
        *(_QWORD *)(v12 + 8) = Partition;
      }
      KeReleaseSpinLock(&CcGlobalPartitionLock, v26);
      if ( v25 )
        CcDeletePartition(v25);
      if ( !Partition )
        goto LABEL_103;
    }
    if ( *(_BYTE *)(Partition + 901) )
      KeBugCheckEx(0x34u, 0x516uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
LABEL_30:
    if ( !Partition )
      goto LABEL_103;
    *v18 = 35652351;
    *((_QWORD *)v18 + 12) = Object;
    *((_QWORD *)v18 + 1) = v82.m128i_i64[1];
    *((_QWORD *)v18 + 5) = v83;
    *((_QWORD *)v18 + 6) = v83;
    v18[128] = Process[1].ThreadSeed[1];
    *((_QWORD *)v18 + 66) = Partition;
    VacbArray = CcInitializeVolumeCacheMap(Object, v18 + 126);
    if ( VacbArray < 0 )
      RtlRaiseStatus(-1073741670);
    v18[70] = 1;
    *((_QWORD *)v18 + 36) = 0LL;
    v18[74] = 0;
    *((_WORD *)v18 + 152) = 1;
    *((_BYTE *)v18 + 306) = 6;
    v18[77] = 0;
    *((_QWORD *)v18 + 40) = v18 + 78;
    *((_QWORD *)v18 + 39) = v18 + 78;
    *((_QWORD *)v18 + 13) = 0LL;
    if ( a3 )
      v18[38] |= 4u;
    if ( (*((_DWORD *)Object + 20) & 0x20) != 0 )
      v18[38] |= 0x40u;
    if ( !v16 )
      v18[38] |= 0x200000u;
    v9 = v77;
    *((_QWORD *)v18 + 3) = v18 + 4;
    *((_QWORD *)v18 + 2) = v18 + 4;
    *((_QWORD *)v18 + 26) = v80;
    *((_QWORD *)v18 + 27) = a5;
    v27 = v18 + 56;
    v27[1] = v27;
    *v27 = v27;
    v8 = P;
LABEL_39:
    LockHandle.LockQueue.Lock = &CcMasterLock;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, &CcMasterLock);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    if ( *((_QWORD *)Object + 6) )
      break;
    v18 = *(_DWORD **)(*((_QWORD *)Object + 5) + 8LL);
    if ( v18 )
    {
      Partition = CcGetPartition(*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL));
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension((__int64)Object, 8, 0LL);
      if ( FileObjectExtension && *FileObjectExtension != *(_QWORD *)(Partition + 8) )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Partition + 128), &v72);
        v36 = v18[1];
        if ( !v36 || v36 == v18[134] )
        {
          VacbArray = -1073741608;
          CcScheduleLazyWriteScan(Partition, 1, 0);
        }
        else
        {
          VacbArray = -1073740277;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        goto LABEL_167;
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(Partition + 128), &v72);
      if ( (*((_DWORD *)Object + 20) & 0x20) == 0 )
        v18[38] &= ~0x40u;
      v37 = v18[38];
      if ( (v37 & 0x200000) != 0 && v16 )
        v18[38] = v37 & 0xFFDFFFFF;
      v38 = Process[1].ThreadSeed[1];
      if ( v38 )
        v18[128] = v38;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
      v30 = P;
LABEL_65:
      Partition = CcGetPartition(v18);
      v72.LockQueue.Next = 0LL;
      v39 = (volatile __int64 *)(Partition + 128);
      v72.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v40 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v72.OldIrql = v40;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v72, v39);
      }
      else if ( _InterlockedExchange64(v39, (__int64)&v72) )
      {
        KxWaitForLockOwnerShip(&v72);
      }
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v18[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v41 = v18[38] & 0xFFFFFFEF;
      v42 = *((_QWORD *)v18 + 11) == 0LL;
      v18[38] = v41;
      if ( v42 )
      {
        if ( (v41 & 0x100) == 0 )
        {
          ++v18[1];
          v18[38] = v41 | 0x100;
          v43 = *((_QWORD *)v18 + 22);
          if ( v43 )
          {
            *(_WORD *)v43 = 0;
            *(_BYTE *)(v43 + 2) = 6;
            *(_DWORD *)(v43 + 4) = 0;
            v44 = (_QWORD *)(v43 + 8);
            v44[1] = v44;
            *v44 = v44;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
          __writecr8(v72.OldIrql);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v45 = *((_QWORD *)v18 + 21);
          if ( v45 )
          {
            if ( (v84 & 1) != 0 && (v18[38] & 0x40000000) == 0 || (v18[38] & 0x40000000) != 0 || (v84 & 1) == 0 )
            {
              v48 = 1;
              VacbArray = -1073741811;
            }
            else
            {
              if ( v82.m128i_i64[0] <= *((_QWORD *)v18 + 4)
                || (v47 = MmExtendSection(v45, &v82, 1LL), VacbArray = v47, v47 >= 0) )
              {
                VacbArray = CcExtendVacbArray(v18);
                if ( VacbArray >= 0 )
                {
LABEL_95:
                  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
                  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v39, &v72);
                  v49 = (struct _KEVENT *)*((_QWORD *)v18 + 22);
                  v18[38] &= ~0x100u;
                  if ( v49 )
                    KeSetEvent(v49, 0, 0);
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
                  goto LABEL_110;
                }
              }
              else if ( !FsRtlIsNtstatusExpected(v47) )
              {
                VacbArray = -1073741588;
              }
              v48 = 1;
            }
          }
          else
          {
            if ( !Objecta )
              KeBugCheckEx(0x34u, 0x603uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            *((_QWORD *)v18 + 21) = Objecta;
            v46 = *((_QWORD *)Object + 3);
            Objecta = 0LL;
            if ( (*(_BYTE *)(v46 + 6) & 1) == 0 && !*((_QWORD *)Object + 4) )
            {
              MmDisableModifiedWriteOfSection(*((_QWORD *)Object + 5));
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v39, &v72);
              v18[38] |= 0x200u;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              __writecr8(LockHandle.OldIrql);
            }
            VacbArray = CcCreateVacbArray(v18, v82.m128i_i64[0]);
            if ( VacbArray >= 0 )
            {
              if ( (v84 & 1) != 0 )
              {
                KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v39, &v72);
                v18[38] |= 0x40000000u;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
              }
              goto LABEL_95;
            }
            v48 = 1;
          }
LABEL_168:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v72);
          if ( v48 )
          {
            v69 = (struct _KEVENT *)*((_QWORD *)v18 + 22);
            if ( v69 )
              KeSetEvent(v69, 0, 0);
            v18[38] &= ~0x100u;
          }
          v42 = v18[1]-- == 1;
          if ( v42 && (v18[38] & 0x20) == 0 && !v18[28] )
          {
            CcDeleteSharedCacheMap((char *)v18, &LockHandle, &v72, 0, 0LL);
            goto LABEL_148;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
          __writecr8(v72.OldIrql);
          goto LABEL_147;
        }
      }
      else if ( (v41 & 0x100) == 0 )
      {
        ++v18[1];
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
        __writecr8(v72.OldIrql);
LABEL_110:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        goto LABEL_111;
      }
      if ( !*((_QWORD *)v18 + 22) )
      {
        v50 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
        *((_QWORD *)v18 + 22) = v50;
        if ( !v50 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
          __writecr8(v72.OldIrql);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
LABEL_103:
          VacbArray = -1073741670;
LABEL_167:
          v54 = 0;
LABEL_131:
          v63 = v54;
          v64 = v54;
          if ( v18 )
          {
            if ( !v54 )
            {
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              v54 = 1;
            }
            if ( Partition && !v63 )
            {
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v72);
              v64 = 1;
            }
            if ( !v74 && !v18[28] && v18[1] )
              CcInsertIntoCleanSharedCacheMapList(v18);
            v65 = *((_QWORD *)v18 + 34);
            if ( v65 )
            {
              do
              {
                v66 = v65 & 0xFFFFFFFFFFFFFFFEuLL;
                v67 = *(_QWORD *)v66;
                KeSetEvent((PRKEVENT)(v66 + 8), 0, 0);
                v65 = v67;
              }
              while ( v67 );
            }
            v18[38] &= ~0x10000u;
            *((_QWORD *)v18 + 34) = 0LL;
          }
          if ( !v64 )
          {
LABEL_146:
            if ( !v54 )
            {
LABEL_148:
              if ( P )
                ExFreePoolWithTag(P, 0x63536343u);
              if ( v76 )
                ExFreePoolWithTag(v76, 0x63506343u);
              if ( v12 )
                PsDereferencePartition(v12, v22);
              if ( Objecta )
                ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
              if ( VacbArray < 0 )
                RtlRaiseStatus(VacbArray);
              return;
            }
LABEL_147:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            goto LABEL_148;
          }
LABEL_145:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
          __writecr8(v72.OldIrql);
          goto LABEL_146;
        }
        *(_WORD *)v50 = 0;
        v50[2] = 6;
        *((_DWORD *)v50 + 1) = 0;
        v51 = v50 + 8;
        v51[1] = v51;
        *v51 = v51;
      }
      ++v18[1];
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
      __writecr8(v72.OldIrql);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      KeWaitForSingleObject(*((PVOID *)v18 + 22), Executive, 0, 0, 0LL);
      v52 = v18[39];
      if ( v52 >= 0 )
      {
LABEL_111:
        if ( v30 )
        {
          ExFreePoolWithTag(v30, 0x63536343u);
          P = 0LL;
        }
        v53 = v18 + 94;
        if ( !*((_WORD *)v18 + 188) )
          goto LABEL_115;
        while ( 1 )
        {
          v76 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
          if ( !v76 )
          {
            VacbArray = -1073741670;
            v48 = 0;
            goto LABEL_168;
          }
LABEL_115:
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = &CcMasterLock;
          v54 = 1;
          v55 = KeGetCurrentIrql();
          __writecr8(2uLL);
          LockHandle.OldIrql = v55;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&LockHandle, &CcMasterLock);
          }
          else if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&LockHandle) )
          {
            KxWaitForLockOwnerShip(&LockHandle);
          }
          v72.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          v72.LockQueue.Next = 0LL;
          v56 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v72.OldIrql = v56;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v72, v39);
          }
          else if ( _InterlockedExchange64(v39, (__int64)&v72) )
          {
            KxWaitForLockOwnerShip(&v72);
          }
          if ( *((_QWORD *)v79 + 6) )
            break;
          if ( !*v53 )
            goto LABEL_128;
          if ( v76 )
          {
            v53 = v76;
            v76 = 0LL;
LABEL_128:
            memset(v53, 0, 0x78uLL);
            v57 = v79;
            v58 = (__int64)v81;
            *v53 = 766;
            *((_QWORD *)v53 + 1) = v57;
            *((_DWORD *)v53 + 1) = 4095;
            PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread(v58);
            v61 = v53 + 48;
            v62 = (*(_DWORD *)v53 ^ (PagePriorityThread << 18)) & 0x1C0000;
            *((_QWORD *)v53 + 10) = 0LL;
            *(_DWORD *)v53 ^= v62;
            v22 = (signed __int64 *)*((_QWORD *)v18 + 29);
            if ( (_DWORD *)*v22 != v18 + 56 )
              __fastfail(3u);
            *v61 = v18 + 56;
            *((_QWORD *)v53 + 13) = v22;
            *v22 = (signed __int64)v61;
            *((_QWORD *)v18 + 29) = v61;
            *(_QWORD *)(v60 + 48) = v53;
            goto LABEL_131;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
          __writecr8(v72.OldIrql);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
        }
        v68 = v18[1];
        if ( v68 <= 1 )
          KeBugCheckEx(0x34u, 0x753uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v18[1] = v68 - 1;
        goto LABEL_145;
      }
      v48 = 0;
      VacbArray = -1073741590;
      if ( FsRtlIsNtstatusExpected(v52) )
        VacbArray = v52;
      goto LABEL_168;
    }
    if ( P )
    {
      v29 = *((_QWORD *)P + 66);
      v18 = P;
      P = 0LL;
      v30 = 0LL;
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v29 + 128), &v72);
      v31 = *(_QWORD **)(v29 + 24);
      v32 = v18 + 34;
      v33 = v29 + 16;
      if ( *v31 != v33 )
        __fastfail(3u);
      *((_QWORD *)v18 + 18) = v31;
      *v32 = v33;
      *v31 = v32;
      *(_QWORD *)(v33 + 8) = v32;
      v34 = *((_QWORD *)Object + 5);
      v74 = 1;
      *(_QWORD *)(v34 + 8) = v18;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v72);
      goto LABEL_65;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x63536343u);
}
