/*
 * XREFs of CcInitializeCacheMapEx @ 0x1400AD640
 * Callers:
 *     CcInitializeCacheMap @ 0x14003B600 (CcInitializeCacheMap.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MmDisableModifiedWriteOfSection @ 0x14002BA80 (MmDisableModifiedWriteOfSection.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400ADDA8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeVolumeCacheMap @ 0x1400AF740 (CcInitializeVolumeCacheMap.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CcCreateVacbArray @ 0x140515D0C (CcCreateVacbArray.c)
 *     ObDeleteCapturedInsertInfo @ 0x140515ED0 (ObDeleteCapturedInsertInfo.c)
 *     MmCreateCacheManagerSection @ 0x140515F54 (MmCreateCacheManagerSection.c)
 */

void __fastcall CcInitializeCacheMapEx(PVOID Object, __int128 *a2, char a3, __int64 a4, __int64 a5, int a6)
{
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *v8; // r14
  NTSTATUS VacbArray; // r12d
  _KPROCESS *Process; // rbx
  char v11; // r15
  __int128 v12; // xmm2
  unsigned __int64 v13; // rax
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // al
  _QWORD *v18; // rdx
  _DWORD *v19; // rbx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  bool v23; // zf
  _WORD *v24; // rdi
  int v25; // r15d
  unsigned __int8 v26; // cl
  _QWORD *v27; // rdx
  int v28; // ecx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  _DWORD *v33; // rax
  __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // r8
  NTSTATUS v37; // eax
  NTSTATUS v38; // r12d
  struct _KEVENT *v39; // rcx
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rdi
  _QWORD *v45; // rax
  BOOLEAN IsNtstatusExpected; // al
  int v47; // ecx
  int v48; // edi
  struct _KEVENT *v49; // rcx
  char *PoolWithTag; // rax
  _QWORD *v51; // rax
  NTSTATUS v52; // edi
  unsigned int v53; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-59h] BYREF
  char v55; // [rsp+48h] [rbp-41h]
  int v56; // [rsp+4Ch] [rbp-3Dh]
  unsigned int v57; // [rsp+50h] [rbp-39h]
  int v58; // [rsp+54h] [rbp-35h]
  int v59; // [rsp+58h] [rbp-31h]
  PVOID P; // [rsp+60h] [rbp-29h]
  _KPROCESS *v61; // [rsp+68h] [rbp-21h]
  __int64 v62; // [rsp+70h] [rbp-19h]
  unsigned __int128 v63; // [rsp+78h] [rbp-11h] BYREF
  __int64 v64; // [rsp+88h] [rbp-1h]
  void *retaddr; // [rsp+D8h] [rbp+4Fh]

  CurrentThread = KeGetCurrentThread();
  v62 = a4;
  v8 = 0LL;
  v55 = a3;
  VacbArray = 0;
  Process = CurrentThread->ApcState.Process;
  v61 = Process;
  v57 = 0;
  v56 = 0;
  v59 = 0;
  P = 0LL;
  if ( CcDbgDisableDAX )
  {
    v11 = 0;
    v58 = 0;
  }
  else
  {
    v11 = a6;
    v58 = a6;
  }
  v12 = *a2;
  v13 = *(_QWORD *)a2;
  v64 = *((_QWORD *)a2 + 2);
  v63 = __PAIR128__(*((unsigned __int64 *)&v12 + 1), v13);
  if ( !v13 )
  {
    LODWORD(v63) = 1;
    v13 = v63;
  }
  v14 = CurrentThread->MiscFlags & 0x400;
  if ( *((_BYTE *)Object + 75) )
    *(_QWORD *)&v63 = (v13 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  else
    *(_QWORD *)&v63 = (v13 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
  v15 = 2LL;
  v16 = 536LL;
  if ( !*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL) )
    goto LABEL_54;
  while ( 1 )
  {
    LockHandle.LockQueue.Lock = &qword_14036F740;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_14036F740);
    }
    else
    {
      v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_14036F740, (__int64)&LockHandle);
      if ( v18 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v18);
    }
    if ( *((_QWORD *)Object + 6) )
      break;
    v19 = *(_DWORD **)(*((_QWORD *)Object + 5) + 8LL);
    if ( v19 )
    {
      if ( (*((_DWORD *)Object + 20) & 0x20) == 0 )
        v19[38] &= ~0x40u;
      v20 = v19[38];
      if ( (v20 & 0x200000) != 0 && v14 )
        v19[38] = v20 & 0xFFDFFFFF;
      v21 = v61[1].ThreadSeed[1];
      if ( v21 )
        v19[128] = v21;
      goto LABEL_18;
    }
    if ( v8 )
    {
      v19 = v8;
      v8 = 0LL;
      v40 = (_QWORD *)qword_14036F7A8;
      v41 = v19 + 34;
      if ( *(_UNKNOWN **)qword_14036F7A8 != &unk_14036F7A0 )
        __fastfail(3u);
      *v41 = &unk_14036F7A0;
      *((_QWORD *)v19 + 18) = v40;
      *v40 = v41;
      qword_14036F7A8 = (__int64)(v19 + 34);
      v42 = *((_QWORD *)Object + 5);
      v59 = 1;
      *(_QWORD *)(v42 + 8) = v19;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
LABEL_18:
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v19[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n", v18, v15, v16);
        __debugbreak();
      }
      v22 = v19[38] & 0xFFFFFFEF;
      v23 = *((_QWORD *)v19 + 11) == 0LL;
      v19[38] = v22;
      if ( v23 )
      {
        if ( (v22 & 0x100) != 0 )
          goto LABEL_117;
        ++v19[1];
        v19[38] = v22 | 0x100;
        v34 = *((_QWORD *)v19 + 22);
        if ( v34 )
        {
          *(_WORD *)v34 = 0;
          *(_DWORD *)(v34 + 4) = 0;
          *(_BYTE *)(v34 + 2) = 6;
          v45 = (_QWORD *)(v34 + 8);
          v45[1] = v45;
          *v45 = v45;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v23 = *((_QWORD *)v19 + 21) == 0LL;
        v56 = 1;
        if ( v23 )
        {
          v35 = v11 & 1;
          if ( v35 )
            v36 = 1LL;
          else
            v36 = v57;
          if ( (v58 & 2) != 0 )
            v36 = (unsigned int)v36 | 4;
          if ( (v58 & 4) != 0 )
            v36 = (unsigned int)v36 | 8;
          v37 = MmCreateCacheManagerSection(v19 + 42, &v63, v36, Object);
          v19[39] = v37;
          v38 = v37;
          if ( v37 < 0 )
          {
            *((_QWORD *)v19 + 21) = 0LL;
            IsNtstatusExpected = FsRtlIsNtstatusExpected(v37);
            v47 = -1073741590;
            if ( IsNtstatusExpected )
              v47 = v38;
            VacbArray = v47;
            goto LABEL_107;
          }
          ObDeleteCapturedInsertInfo(*((_QWORD *)v19 + 21));
          if ( (*(_BYTE *)(*((_QWORD *)Object + 3) + 6LL) & 1) == 0 && !*((_QWORD *)Object + 4) )
          {
            MmDisableModifiedWriteOfSection(*((_QWORD *)Object + 5));
            KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
            v19[38] |= 0x200u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
          }
          VacbArray = CcCreateVacbArray(v19, v63);
          if ( VacbArray >= 0 )
          {
            if ( v35 )
            {
              KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
              v19[38] |= 0x40000000u;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              __writecr8(LockHandle.OldIrql);
            }
            KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
            v39 = (struct _KEVENT *)*((_QWORD *)v19 + 22);
            v19[38] &= ~0x100u;
            if ( v39 )
              KeSetEvent(v39, 0, 0);
LABEL_22:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            goto LABEL_23;
          }
        }
        else
        {
          VacbArray = -1073741811;
        }
LABEL_107:
        v48 = v56;
LABEL_108:
        KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
        if ( v48 )
        {
          v49 = (struct _KEVENT *)*((_QWORD *)v19 + 22);
          if ( v49 )
            KeSetEvent(v49, 0, 0);
          v19[38] &= ~0x100u;
        }
        v23 = v19[1]-- == 1;
        if ( !v23 || (v19[38] & 0x20) != 0 || v19[28] )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          goto LABEL_44;
        }
        CcDeleteSharedCacheMap(v19, &LockHandle, 0LL, 0LL);
      }
      else
      {
        if ( (v22 & 0x100) == 0 )
        {
          ++v19[1];
          goto LABEL_22;
        }
LABEL_117:
        if ( !*((_QWORD *)v19 + 22) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
          *((_QWORD *)v19 + 22) = PoolWithTag;
          if ( !PoolWithTag )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            VacbArray = -1073741670;
            v25 = 0;
LABEL_33:
            if ( !v25 )
              KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
            if ( !v59 && !v19[28] && v19[1] )
              CcInsertIntoCleanSharedCacheMapList(v19);
            v31 = *((_QWORD *)v19 + 34);
            if ( v31 )
            {
              do
              {
                v43 = v31 & 0xFFFFFFFFFFFFFFFEuLL;
                v44 = *(_QWORD *)v43;
                KeSetEvent((PRKEVENT)(v43 + 8), 0, 0);
                v31 = v44;
              }
              while ( v44 );
            }
            v19[38] &= ~0x10000u;
            *((_QWORD *)v19 + 34) = 0LL;
            goto LABEL_41;
          }
          *(_WORD *)PoolWithTag = 0;
          *((_DWORD *)PoolWithTag + 1) = 0;
          PoolWithTag[2] = 6;
          v51 = PoolWithTag + 8;
          v51[1] = v51;
          *v51 = v51;
        }
        ++v19[1];
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeWaitForSingleObject(*((PVOID *)v19 + 22), Executive, 0, 0, 0LL);
        v52 = v19[39];
        if ( v52 < 0 )
        {
          VacbArray = -1073741590;
          if ( FsRtlIsNtstatusExpected(v52) )
            VacbArray = v52;
          goto LABEL_107;
        }
LABEL_23:
        if ( v8 )
        {
          ExFreePoolWithTag(v8, 0x63536343u);
          v8 = 0LL;
        }
        v24 = v19 + 94;
        if ( *((_WORD *)v19 + 188) )
          goto LABEL_85;
        while ( 1 )
        {
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = &qword_14036F740;
          v25 = 1;
          v26 = KeGetCurrentIrql();
          __writecr8(2uLL);
          LockHandle.OldIrql = v26;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_14036F740);
          }
          else
          {
            v27 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&qword_14036F740, (__int64)&LockHandle);
            if ( v27 )
              KxWaitForLockOwnerShip((__int64)&LockHandle, v27);
          }
          if ( *((_QWORD *)Object + 6) )
            break;
          if ( !*v24 )
            goto LABEL_31;
          if ( P )
          {
            v24 = P;
            P = 0LL;
LABEL_31:
            memset(v24, 0, 0x78uLL);
            *((_QWORD *)v24 + 1) = Object;
            *v24 = 766;
            *((_DWORD *)v24 + 1) = 4095;
            v28 = (*(_DWORD *)v24 ^ ((unsigned __int8)PsGetPagePriorityThread(CurrentThread) << 18)) & 0x1C0000;
            *((_QWORD *)v24 + 10) = 0LL;
            *(_DWORD *)v24 ^= v28;
            v29 = v24 + 48;
            v30 = (_QWORD *)*((_QWORD *)v19 + 29);
            if ( (_DWORD *)*v30 != v19 + 56 )
              __fastfail(3u);
            *v29 = v19 + 56;
            *((_QWORD *)v24 + 13) = v30;
            *v30 = v29;
            *((_QWORD *)v19 + 29) = v29;
            *((_QWORD *)Object + 6) = v24;
            goto LABEL_33;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
LABEL_85:
          P = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
          if ( !P )
          {
            VacbArray = -1073741670;
            v48 = 0;
            goto LABEL_108;
          }
        }
        v53 = v19[1];
        if ( v53 <= 1 )
          KeBugCheckEx(0x34u, 0x7F2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v19[1] = v53 - 1;
LABEL_41:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        }
        else
        {
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_44;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_44:
        __writecr8(LockHandle.OldIrql);
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0x63536343u);
      if ( P )
        ExFreePoolWithTag(P, 0x63506343u);
      if ( VacbArray < 0 )
        RtlRaiseStatus(VacbArray);
      return;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    Process = v61;
LABEL_54:
    v33 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x63536343u);
    v8 = v33;
    if ( !v33 )
      RtlRaiseStatus(-1073741670);
    memset(v33, 0, 0x218uLL);
    *v8 = 35128063;
    *((_QWORD *)v8 + 12) = Object;
    *((_QWORD *)v8 + 1) = *((_QWORD *)&v63 + 1);
    *((_QWORD *)v8 + 5) = v64;
    *((_QWORD *)v8 + 6) = v64;
    v8[128] = Process[1].ThreadSeed[1];
    *((_QWORD *)v8 + 66) = &CcSystemPartition;
    VacbArray = CcInitializeVolumeCacheMap(&CcSystemPartition, Object, v8 + 126);
    if ( VacbArray < 0 )
      RtlRaiseStatus(-1073741670);
    v8[70] = 1;
    *((_QWORD *)v8 + 36) = 0LL;
    v8[74] = 0;
    *((_WORD *)v8 + 152) = 1;
    *((_BYTE *)v8 + 306) = 6;
    v8[77] = 0;
    *((_QWORD *)v8 + 40) = v8 + 78;
    *((_QWORD *)v8 + 39) = v8 + 78;
    *((_QWORD *)v8 + 13) = 0LL;
    if ( v55 )
      v8[38] |= 4u;
    if ( (*((_DWORD *)Object + 20) & 0x20) != 0 )
      v8[38] |= 0x40u;
    if ( !v14 )
      v8[38] |= 0x200000u;
    v15 = 2LL;
    *((_QWORD *)v8 + 3) = v8 + 4;
    *((_QWORD *)v8 + 2) = v8 + 4;
    *((_QWORD *)v8 + 26) = v62;
    *((_QWORD *)v8 + 27) = a5;
    *((_QWORD *)v8 + 29) = v8 + 56;
    *((_QWORD *)v8 + 28) = v8 + 56;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x63536343u);
}
