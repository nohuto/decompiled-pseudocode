/*
 * XREFs of CcFlushCachePriv @ 0x140062D40
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     CcZeroEndOfLastPage @ 0x1400675C8 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     MiFlushDataSection @ 0x1400B71B4 (MiFlushDataSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1400F2240 (CcCoherencyFlushAndPurgeCache.c)
 *     CcZeroData @ 0x14011E9B0 (CcZeroData.c)
 *     CcFlushCache @ 0x140125A10 (CcFlushCache.c)
 *     CcFlushCacheToLsn @ 0x140130990 (CcFlushCacheToLsn.c)
 *     CcSetPrivateWriteFile @ 0x1401E1390 (CcSetPrivateWriteFile.c)
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     CcReleaseByteRangeFromWrite @ 0x140067F20 (CcReleaseByteRangeFromWrite.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400A5C80 (CcGetVirtualAddressIfMapped.c)
 *     CcAcquireByteRangeForWrite @ 0x1400F2DD0 (CcAcquireByteRangeForWrite.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401167E4 (CcBoostLowPriorityWorkerThread.c)
 *     CcAmILowPriorityWriter @ 0x14011C2D0 (CcAmILowPriorityWriter.c)
 *     CcIsFatalWriteError @ 0x140126240 (CcIsFatalWriteError.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 *     CcPerfLogFlushCache @ 0x1401E27B0 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401E28A4 (CcPerfLogFlushSection.c)
 */

__int64 __fastcall CcFlushCachePriv(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, char a5, int *a6)
{
  char v6; // di
  int v8; // r12d
  int v9; // ebx
  __int64 v10; // r15
  __int64 v11; // r13
  int *v12; // rcx
  int v13; // eax
  unsigned __int8 CurrentIrql; // al
  __int64 v15; // r14
  int v16; // ecx
  signed __int64 *v17; // r8
  unsigned int v18; // r9d
  signed __int64 v19; // rdx
  __int64 result; // rax
  int v21; // r9d
  unsigned int v22; // r13d
  signed __int64 *v23; // r15
  int *v24; // rbx
  int v25; // ecx
  int v26; // ebx
  unsigned int v27; // r12d
  int v28; // edi
  bool v29; // al
  signed __int64 *v30; // rdx
  unsigned int v31; // edi
  unsigned int v32; // ebx
  __int64 v33; // r15
  unsigned __int64 v34; // r13
  int v35; // r12d
  int v36; // esi
  unsigned __int64 VirtualAddressIfMapped; // rax
  int v38; // r9d
  unsigned int v39; // ecx
  __int64 v40; // rdx
  struct _KEVENT *v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rsi
  signed __int64 v44; // rdi
  unsigned int *v45; // rbx
  __int64 v46; // rdx
  char v47; // al
  signed __int64 v48; // rbx
  unsigned int v49; // r15d
  int v50; // r9d
  __int64 v51; // rsi
  int *v52; // rdi
  int v53; // r13d
  int v54; // r12d
  __int64 v55; // rdx
  int v56; // ecx
  __int64 v57; // rcx
  signed __int64 v58; // rdi
  int v59; // r12d
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+38h] [rbp-C8h]
  unsigned int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh]
  int v64; // [rsp+48h] [rbp-B8h]
  int v65; // [rsp+4Ch] [rbp-B4h]
  unsigned int v66; // [rsp+50h] [rbp-B0h] BYREF
  int v67; // [rsp+54h] [rbp-ACh]
  signed __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+64h] [rbp-9Ch]
  __int64 Partition; // [rsp+68h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v73; // [rsp+88h] [rbp-78h]
  int *v74; // [rsp+90h] [rbp-70h]
  unsigned int v75; // [rsp+98h] [rbp-68h]
  signed __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE v78; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-38h] BYREF
  signed __int64 v80; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp-28h]
  __int64 v82; // [rsp+E0h] [rbp-20h] BYREF
  char v83; // [rsp+E8h] [rbp-18h] BYREF
  int v84; // [rsp+150h] [rbp+50h]
  unsigned __int64 v85; // [rsp+158h] [rbp+58h]
  int v87; // [rsp+168h] [rbp+68h]

  v87 = a4;
  v85 = (unsigned __int64)a2;
  v84 = a1;
  v6 = 0;
  v70 = 0;
  v69 = 0;
  v67 = 0;
  v8 = 0;
  v63 = 0;
  v9 = 0;
  v64 = 0;
  v10 = 0LL;
  v65 = 0;
  v11 = 0LL;
  v79 = 0LL;
  v73 = 0LL;
  Partition = 0LL;
  if ( a4 && a2 && a2 != (__int64 *)&CcNoDelay )
    KeBugCheckEx(0x34u, 0x15BBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v12 = (int *)&v83;
  v77 = 0LL;
  if ( a6 )
    v12 = a6;
  v74 = v12;
  *v12 = 0;
  if ( a2 == (__int64 *)&CcNoDelay )
  {
    v8 = 1;
    v73 = *((_QWORD *)v12 + 1);
    v63 = 1;
    *v12 = -2147483626;
    v85 = 0LL;
  }
  else
  {
    v13 = 1;
    if ( a5 )
      v13 = 17;
    v65 = v13;
  }
  *((_QWORD *)v12 + 1) = 0LL;
  v78.LockQueue.Lock = &CcMasterLock;
  v78.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v78.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&v78);
  v15 = *(_QWORD *)(a1 + 8);
  if ( !v15 )
    goto LABEL_25;
  Partition = CcGetPartition(v15);
  v11 = Partition;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  KxAcquireQueuedSpinLock(&LockHandle);
  v16 = *(_DWORD *)(v15 + 152);
  v6 = 1;
  v17 = (signed __int64 *)v85;
  if ( (v16 & 0x2000) != 0 )
  {
    if ( (v85 & 1) == 0 )
      goto LABEL_32;
    v17 = (signed __int64 *)(v85 ^ 1);
    v85 ^= 1uLL;
  }
  if ( !v8 )
  {
    if ( !v17 )
      goto LABEL_23;
    v19 = *(_QWORD *)(v15 + 32);
    if ( *v17 < v19 )
    {
      v18 = a3;
      if ( *v17 + a3 <= v19 )
      {
LABEL_24:
        ++*(_DWORD *)(v15 + 516);
        goto LABEL_26;
      }
      a3 = v19 - *(_DWORD *)v17;
LABEL_23:
      v18 = a3;
      goto LABEL_24;
    }
LABEL_32:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_33:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v78);
    result = v78.OldIrql;
    __writecr8(v78.OldIrql);
    return result;
  }
  if ( (v16 & 0x10000) == 0 )
  {
LABEL_25:
    v18 = a3;
    goto LABEL_26;
  }
  v18 = a3;
  v64 = 1;
  if ( *(_DWORD *)(v15 + 516) )
    v9 = 1;
LABEL_26:
  if ( v85 && !v18 )
  {
    if ( v15 )
    {
      if ( !v8 )
        --*(_DWORD *)(v15 + 516);
    }
    if ( !v6 )
      goto LABEL_33;
    goto LABEL_32;
  }
  if ( v15 )
  {
    ++*(_DWORD *)(v15 + 4);
    ++*(_DWORD *)(v15 + 536);
    v10 = *(_QWORD *)((*(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
  if ( v6 )
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v78);
  result = v78.OldIrql;
  __writecr8(v78.OldIrql);
  if ( v15 && (*(_DWORD *)(v15 + 152) & 0x40000000) != 0 )
    v9 = 1;
  if ( (xmmword_140401150 & 0x20000) != 0 )
    result = CcPerfLogFlushCache(v73, v15, v85, a3, v8, v64, v9 == 1);
  if ( !v8 )
  {
    if ( !v15 )
    {
LABEL_55:
      v22 = a3;
      v23 = (signed __int64 *)v85;
      if ( (xmmword_140401150 & 0x20000) != 0 )
        CcPerfLogFlushSection(v73, v15, v85, a3, v65);
      if ( v15 )
        CcUnmapVacbArray(v15, (__int64 *)v85, a3, 0, 0, 0);
      v24 = v74;
      MmFlushSection(v84, v85, a3, v21, (__int64)v74, v65);
      result = (unsigned int)*v24;
      v25 = v70;
      if ( (int)result < 0 )
        v25 = *v24;
      v70 = v25;
      goto LABEL_63;
    }
    result = *(unsigned int *)(v15 + 152);
    if ( (result & 0x20) != 0 )
      result = CcBoostLowPriorityWorkerThread(v11, v15);
  }
  if ( (!v15
     || (*(_BYTE *)(v10 + 6) & 0x10) != 0 && (*(_BYTE *)(v10 + 4) & 0x20) != 0
     || (*(_DWORD *)(v15 + 152) & 0x20000) != 0)
    && !v8
    || v9 )
  {
    goto LABEL_55;
  }
  if ( !v15 )
    return result;
  if ( (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 )
    goto LABEL_55;
  v23 = (signed __int64 *)v85;
  v22 = a3;
LABEL_63:
  if ( !v15 )
    goto LABEL_155;
  if ( (*(_DWORD *)(v15 + 152) & 0x4000000) != 0 )
    goto LABEL_152;
  if ( v23 )
    v80 = *v23;
  v26 = v63;
  v27 = 1;
  if ( v22 )
    v27 = v22;
  v62 = v27;
  if ( v63 )
  {
    v27 = v62;
    v77 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  }
  while ( 1 )
  {
    v28 = v64;
    if ( !*(_DWORD *)(v15 + 192) && v26 && !v64 )
      break;
    if ( !*(_QWORD *)(v15 + 8) && (*(_DWORD *)(v15 + 152) & 4) == 0 && !*(_DWORD *)(v15 + 112) || v67 )
      break;
    v29 = v26 && (unsigned __int8)CcAmILowPriorityWriter(v15);
    if ( v26 && !v28 )
      v27 = 0;
    if ( !v26 || v28 )
    {
      v30 = &v80;
      if ( !v23 )
        LODWORD(v30) = 0;
    }
    else
    {
      LODWORD(v30) = 0;
    }
    LOBYTE(v61) = v29;
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v15,
                             (_DWORD)v30,
                             v27,
                             v87,
                             (__int64)&v68,
                             (__int64)&v62,
                             (__int64)&v82,
                             v61) )
      break;
    v31 = v62;
    v32 = 0;
    v33 = Partition;
    v34 = v62;
    v35 = v63;
    v36 = v64;
    v81 = v62;
    do
    {
      VirtualAddressIfMapped = CcGetVirtualAddressIfMapped(v15, v68 + v34 - v31, &v79, &v66);
      if ( VirtualAddressIfMapped )
      {
        v39 = v66;
        if ( v66 > v31 )
          v39 = v31;
        v66 = v39;
        v32 = ((unsigned __int8)MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v39) || v32)
           && (signed __int64)(v34 + v68) < *(_QWORD *)(v15 + 40)
           && (*(_DWORD *)(v15 + 268) & 0xF) != 0
           && v35
           && !v36
           && (*(_DWORD *)(v15 + 152) & 0x200) == 0
           && !*(_BYTE *)(v33 + 900);
        v40 = *(_QWORD *)(v79 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v79 + 16)) )
        {
          v41 = *(struct _KEVENT **)(v40 + 184);
          if ( v41 )
            KeSetEvent(v41, 0, 0);
        }
      }
      else
      {
        v42 = v66;
        if ( v66 > v31 )
          v42 = v31;
        v66 = v42;
      }
      v31 -= v66;
    }
    while ( v31 );
    __addgsdword(0x5E28u, v32);
    v27 = v62;
    v43 = v77;
    v44 = v68;
    v75 = v62;
    if ( v32 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v33 + 128), &LockHandle);
      *(_QWORD *)(v33 + 712) += v34 >> 12;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      goto LABEL_135;
    }
    if ( (xmmword_140401150 & 0x20000) != 0 )
      CcPerfLogFlushSection(v73, v15, (unsigned int)&v68, v62, v65);
    v45 = (unsigned int *)v74;
    MmFlushSection(v84, (unsigned int)&v68, v34, v38, (__int64)v74, v65);
    v46 = *v45;
    if ( (int)v46 < 0 )
    {
      v48 = v44;
      v76 = v44;
      v49 = v27;
      if ( !(unsigned __int8)CcIsFatalWriteError(v15, v46) )
      {
        v67 = 1;
LABEL_135:
        v47 = 1;
        goto LABEL_136;
      }
      v51 = Partition;
      v52 = v74;
      v53 = v65;
      v54 = v73;
      do
      {
        if ( (xmmword_140401150 & 0x20000) != 0 )
          CcPerfLogFlushSection(v54, v15, (unsigned int)&v76, 4096, v53);
        MmFlushSection(v84, (unsigned int)&v76, 4096, v50, (__int64)v52, v53);
        v55 = (unsigned int)*v52;
        if ( (int)v55 < 0 )
        {
          if ( (unsigned __int8)CcIsFatalWriteError(v15, v55) )
          {
            v56 = v67;
            v70 = *v52;
          }
          else
          {
            v56 = 1;
            v67 = 1;
          }
        }
        else
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v51 + 128), &LockHandle);
          *(_DWORD *)(v15 + 152) |= 0x400u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v56 = v67;
        }
        v48 += 4096LL;
        v76 = v48;
        v49 -= 4096;
      }
      while ( v49 );
      v44 = v68;
      v43 = v77;
      v27 = v75;
      v34 = v81;
      if ( v56 )
        goto LABEL_135;
      v47 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(v15 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v33 + 128), &LockHandle);
        *(_DWORD *)(v15 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
      if ( v63 )
      {
        __incgsdword(0x5E2Cu);
        __addgsdword(0x5E30u, (v62 + 4095) >> 12);
        v27 = v62;
      }
      v44 = v68;
      v47 = 0;
    }
LABEL_136:
    LOBYTE(BugCheckParameter4) = v47;
    CcReleaseByteRangeFromWrite(v15, &v68, v27, v82, BugCheckParameter4);
    v57 = Partition;
    v69 += v27;
    if ( v69 >= 0x40000 && *(_QWORD *)(Partition + 744) != Partition + 744 )
    {
      CcPostDeferredWrites(Partition);
      v57 = Partition;
      v69 = 0;
    }
    v26 = v63;
    if ( v63 && !v64 && *(_QWORD *)(v57 + 744) == v57 + 744 )
    {
      if ( MEMORY[0xFFFFF78000000320] > v43 )
      {
        *((_QWORD *)v74 + 1) = 35422LL;
        break;
      }
      v27 = v62;
      v44 = v68;
    }
    v23 = (signed __int64 *)v85;
    if ( v85 )
    {
      v58 = v34 + v44;
      v68 = v58;
      if ( *(_QWORD *)v85 + a3 <= v58 )
        break;
      v59 = *(_DWORD *)v85 - v58;
      v80 = v58;
      v27 = a3 + v59;
      v62 = v27;
    }
  }
  if ( v69 && *(_QWORD *)(Partition + 744) != Partition + 744 )
    CcPostDeferredWrites(Partition);
  v8 = v63;
LABEL_152:
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  CcDecrementOpenCount(v15);
  if ( !v8 )
    --*(_DWORD *)(v15 + 516);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
LABEL_155:
  if ( v70 < 0 )
  {
    result = (__int64)v74;
    *v74 = v70;
  }
  return result;
}
