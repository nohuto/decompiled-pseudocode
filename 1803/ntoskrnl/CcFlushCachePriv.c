/*
 * XREFs of CcFlushCachePriv @ 0x1400DEE80
 * Callers:
 *     MiFlushDataSection @ 0x14004D85C (MiFlushDataSection.c)
 *     CcZeroEndOfLastPage @ 0x14005BC54 (CcZeroEndOfLastPage.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x140082000 (CcCoherencyFlushAndPurgeCache.c)
 *     CcZeroData @ 0x140098570 (CcZeroData.c)
 *     CcFlushCache @ 0x1400C3570 (CcFlushCache.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcFlushCacheToLsn @ 0x14014CA60 (CcFlushCacheToLsn.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14009B00C (CcBoostLowPriorityWorkerThread.c)
 *     CcAmILowPriorityWriter @ 0x1400BAFF8 (CcAmILowPriorityWriter.c)
 *     CcIsFatalWriteError @ 0x1400C52EC (CcIsFatalWriteError.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400DB2F8 (CcGetVirtualAddressIfMapped.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E22D8 (CcReleaseByteRangeFromWrite.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     CcPerfLogFlushSection @ 0x14017CC58 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x14017CD38 (CcPerfLogFlushCache.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 */

unsigned __int64 __fastcall CcFlushCachePriv(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        unsigned int *a6)
{
  char v6; // bl
  unsigned __int64 v7; // r13
  int v9; // r12d
  int v10; // r15d
  __int64 v11; // r14
  unsigned int *v12; // rcx
  __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 v15; // rsi
  int v16; // ecx
  __int64 v17; // rcx
  signed __int64 v18; // rdx
  unsigned int v19; // r8d
  int v20; // r9d
  unsigned __int64 result; // rax
  int v22; // ebx
  int *v23; // r15
  unsigned int v24; // r14d
  bool v25; // al
  __int64 *v26; // rdx
  __int64 v27; // rdi
  unsigned int v28; // r14d
  unsigned int v29; // ebx
  int v30; // r15d
  unsigned __int64 v31; // r13
  __int64 VirtualAddressIfMapped; // rax
  int v33; // r9d
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rdi
  int v37; // edx
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // r14
  signed __int64 v41; // rax
  unsigned int v42; // eax
  struct _KEVENT *v43; // rcx
  __int64 v44; // rbx
  signed __int64 v45; // rbx
  unsigned int v46; // r15d
  int v47; // r9d
  int *v48; // r13
  __int64 v49; // rdi
  int v50; // r12d
  int v51; // ecx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+38h] [rbp-C8h]
  unsigned int v54; // [rsp+40h] [rbp-C0h] BYREF
  __int64 Partition; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+50h] [rbp-B0h]
  int v57; // [rsp+54h] [rbp-ACh]
  unsigned int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h]
  unsigned int v60; // [rsp+60h] [rbp-A0h]
  unsigned int v61; // [rsp+64h] [rbp-9Ch]
  signed __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v63; // [rsp+70h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  int v65; // [rsp+90h] [rbp-70h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  signed __int64 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE v69; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v71; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h] BYREF
  char v75; // [rsp+F0h] [rbp-10h] BYREF
  int v76; // [rsp+150h] [rbp+50h]
  __int64 *v77; // [rsp+158h] [rbp+58h]
  int v79; // [rsp+168h] [rbp+68h]

  v79 = a4;
  v76 = a1;
  v6 = 0;
  v60 = 0;
  v7 = (unsigned __int64)a2;
  v61 = 0;
  v59 = 0;
  v9 = 0;
  v65 = 0;
  v10 = 0;
  v57 = 0;
  v11 = 0LL;
  v56 = 0;
  v70 = 0LL;
  v66 = 0LL;
  Partition = 0LL;
  if ( a4 && a2 && a2 != (__int64 *)&CcNoDelay )
    KeBugCheckEx(0x34u, 0x15BCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v12 = (unsigned int *)&v75;
  v13 = 0LL;
  if ( a6 )
    v12 = a6;
  v63 = v12;
  *v12 = 0;
  if ( a2 == (__int64 *)&CcNoDelay )
  {
    v9 = 1;
    v66 = *((_QWORD *)v12 + 1);
    v7 = 0LL;
    *v12 = -2147483626;
  }
  else
  {
    v56 = 1;
    if ( a5 )
      v56 = 17;
  }
  v77 = (__int64 *)v7;
  v69.LockQueue.Lock = &CcMasterLock;
  v65 = v9;
  *((_QWORD *)v12 + 1) = 0LL;
  v69.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v69.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&v69, &CcMasterLock);
  v15 = *(_QWORD *)(a1 + 8);
  if ( !v15 )
    goto LABEL_15;
  Partition = CcGetPartition(v15);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock(&LockHandle, Partition + 128);
  v16 = *(_DWORD *)(v15 + 152);
  v6 = 1;
  if ( (v16 & 0x2000) != 0 )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_140;
    v7 ^= 1uLL;
    v77 = (__int64 *)v7;
  }
  if ( !v9 )
  {
    if ( !v7 )
      goto LABEL_120;
    v17 = *(_QWORD *)v7;
    v18 = *(_QWORD *)(v15 + 32);
    if ( *(_QWORD *)v7 < v18 )
    {
      v19 = a3;
      if ( v17 + a3 <= v18 )
      {
LABEL_13:
        ++*(_DWORD *)(v15 + 516);
        goto LABEL_16;
      }
      a3 = v18 - v17;
LABEL_120:
      v19 = a3;
      goto LABEL_13;
    }
LABEL_140:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_141:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v69);
    result = v69.OldIrql;
    __writecr8(v69.OldIrql);
    return result;
  }
  if ( (v16 & 0x10000) == 0 )
  {
LABEL_15:
    v19 = a3;
    goto LABEL_16;
  }
  v19 = a3;
  v57 = 1;
  if ( *(_DWORD *)(v15 + 516) )
    v10 = 1;
LABEL_16:
  if ( v7 && !v19 )
  {
    if ( v15 && !v9 )
      --*(_DWORD *)(v15 + 516);
    if ( !v6 )
      goto LABEL_141;
    goto LABEL_140;
  }
  if ( v15 )
  {
    ++*(_DWORD *)(v15 + 4);
    v11 = *(_QWORD *)((*(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
  if ( v6 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v69);
  __writecr8(v69.OldIrql);
  if ( v15 && (*(_DWORD *)(v15 + 152) & 0x40000000) != 0 )
    v10 = 1;
  result = (unsigned int)xmmword_14044C2D0;
  v22 = v57;
  if ( (xmmword_14044C2D0 & 0x20000) != 0 )
    result = CcPerfLogFlushCache(v66, v15, v7, a3, v9, v57, v10 == 1);
  if ( !v9 )
  {
    if ( !v15 )
      goto LABEL_108;
    result = *(unsigned int *)(v15 + 152);
    if ( (result & 0x20) != 0 )
      result = (unsigned __int64)CcBoostLowPriorityWorkerThread(Partition, v15);
  }
  if ( (v15
     && ((*(_BYTE *)(v11 + 6) & 0x10) == 0 || (*(_BYTE *)(v11 + 4) & 0x20) == 0)
     && (*(_DWORD *)(v15 + 152) & 0x20000) == 0
     || v9)
    && !v10 )
  {
    if ( !v15 )
      return result;
    if ( (*(_DWORD *)(v15 + 152) & 0x4000000) == 0 )
    {
      v23 = (int *)v63;
      goto LABEL_37;
    }
  }
LABEL_108:
  if ( (xmmword_14044C2D0 & 0x20000) != 0 )
    CcPerfLogFlushSection(v66, v15, v7, a3, v56);
  if ( v15 )
    CcUnmapVacbArray(v15, (__int64 *)v7, a3, 0, 0, 0);
  v23 = (int *)v63;
  MmFlushSection(v76, v7, a3, v20, (__int64)v63, v56);
  result = *v63;
  if ( (result & 0x80000000) != 0LL )
  {
    v60 = *v63;
    goto LABEL_38;
  }
LABEL_37:
  result = 0LL;
LABEL_38:
  if ( !v15 )
    goto LABEL_95;
  if ( (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 )
    goto LABEL_134;
  if ( v7 )
    v71 = *(_QWORD *)v7;
  v24 = 1;
  if ( a3 )
    v24 = a3;
  v54 = v24;
  if ( v9 )
  {
    v24 = v54;
    v13 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  }
  v68 = v13;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v15 + 192) && v9 && !v22
      || !*(_QWORD *)(v15 + 8) && (*(_DWORD *)(v15 + 152) & 4) == 0 && !*(_DWORD *)(v15 + 112)
      || v59 )
    {
      goto LABEL_90;
    }
    v25 = v9 && CcAmILowPriorityWriter(v15);
    if ( !v9 || v22 )
    {
      v26 = &v71;
      if ( !v77 )
        LODWORD(v26) = 0;
    }
    else
    {
      v24 = 0;
      LODWORD(v26) = 0;
    }
    LOBYTE(v53) = v25;
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v15,
                             (_DWORD)v26,
                             v24,
                             v79,
                             (__int64)&v62,
                             (__int64)&v54,
                             (__int64)&v74,
                             v53) )
    {
LABEL_90:
      v39 = Partition;
      goto LABEL_91;
    }
    v27 = Partition;
    v28 = 0;
    v29 = v54;
    v30 = v57;
    v31 = v54;
    v73 = v54;
    do
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v15, v62 + v31 - v29, &v70, &v58);
      if ( VirtualAddressIfMapped )
      {
        v34 = v58;
        if ( v58 > v29 )
        {
          v34 = v29;
          v58 = v29;
        }
        v28 = ((unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v34) || v28)
           && (signed __int64)(v31 + v62) < *(_QWORD *)(v15 + 40)
           && (*(_DWORD *)(v15 + 268) & 0xF) != 0
           && v9
           && !v30
           && (*(_DWORD *)(v15 + 152) & 0x200) == 0
           && !*(_BYTE *)(v27 + 900);
        v35 = *(_QWORD *)(v70 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v70 + 16)) )
        {
          v43 = *(struct _KEVENT **)(v35 + 184);
          if ( v43 )
            KeSetEvent(v43, 0, 0);
        }
      }
      else
      {
        v42 = v58;
        if ( v58 > v29 )
          v42 = v29;
        v58 = v42;
      }
      v29 -= v58;
    }
    while ( v29 );
    __addgsdword(0x5E28u, v28);
    v36 = v68;
    v23 = (int *)v63;
    if ( v28 )
    {
      v44 = Partition;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      *(_QWORD *)(v44 + 712) += v31 >> 12;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v24 = v54;
LABEL_133:
      v23 = (int *)v63;
      v38 = 1;
      goto LABEL_80;
    }
    v24 = v54;
    v72 = v54;
    if ( (xmmword_14044C2D0 & 0x20000) != 0 )
      CcPerfLogFlushSection(v66, v15, (unsigned int)&v62, v54, v56);
    MmFlushSection(v76, (unsigned int)&v62, v31, v33, (__int64)v23, v56);
    v37 = *v23;
    if ( *v23 < 0 )
    {
      v45 = v62;
      v67 = v62;
      v46 = v24;
      if ( !CcIsFatalWriteError(v15, v37) )
      {
        v23 = (int *)v63;
        v38 = 1;
        v59 = 1;
        goto LABEL_80;
      }
      v48 = (int *)v63;
      v49 = Partition;
      v50 = v56;
      do
      {
        if ( (xmmword_14044C2D0 & 0x20000) != 0 )
          CcPerfLogFlushSection(v66, v15, (unsigned int)&v67, 4096, v50);
        MmFlushSection(v76, (unsigned int)&v67, 4096, v47, (__int64)v48, v50);
        if ( *v48 < 0 )
        {
          if ( CcIsFatalWriteError(v15, *v48) )
          {
            v51 = v59;
            v60 = *v48;
          }
          else
          {
            v51 = 1;
            v59 = 1;
          }
        }
        else
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v49 + 128), &LockHandle);
          *(_DWORD *)(v15 + 152) |= 0x400u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v51 = v59;
        }
        v45 += 4096LL;
        v67 = v45;
        v46 -= 4096;
      }
      while ( v46 );
      v36 = v68;
      v24 = v72;
      v9 = v65;
      v31 = v73;
      if ( v51 )
        goto LABEL_133;
      v23 = (int *)v63;
    }
    else
    {
      if ( (*(_DWORD *)(v15 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
        *(_DWORD *)(v15 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
      if ( v9 )
      {
        __incgsdword(0x5E2Cu);
        __addgsdword(0x5E30u, (v54 + 4095) >> 12);
        v24 = v54;
      }
    }
    v38 = 0;
LABEL_80:
    LOBYTE(BugCheckParameter4) = v38;
    CcReleaseByteRangeFromWrite(v15, &v62, v24, v74, BugCheckParameter4);
    v39 = Partition;
    v61 += v24;
    if ( v61 >= 0x40000 && *(_QWORD *)(Partition + 744) != Partition + 744 )
    {
      CcPostDeferredWrites(Partition);
      v39 = Partition;
      v61 = 0;
    }
    v22 = v57;
    if ( !v9 || v57 || *(_QWORD *)(v39 + 744) != v39 + 744 )
      goto LABEL_86;
    if ( MEMORY[0xFFFFF78000000320] > v36 )
      break;
    v24 = v54;
LABEL_86:
    if ( v77 )
    {
      v40 = *v77;
      v41 = v31 + v62;
      v62 = v41;
      if ( v40 + a3 <= v41 )
        goto LABEL_90;
      v71 = v41;
      v24 = a3 + v40 - v41;
      v54 = v24;
    }
  }
  *((_QWORD *)v23 + 1) = 35422LL;
LABEL_91:
  if ( v61 && *(_QWORD *)(v39 + 744) != v39 + 744 )
  {
    CcPostDeferredWrites(v39);
LABEL_134:
    v39 = Partition;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v39 + 128), &LockHandle);
  CcDecrementOpenCount(v15);
  if ( !v9 )
    --*(_DWORD *)(v15 + 516);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  result = v60;
LABEL_95:
  if ( (result & 0x80000000) != 0LL )
    *v23 = result;
  return result;
}
