/*
 * XREFs of CcFlushCachePriv @ 0x140097F80
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x140014340 (CcCoherencyFlushAndPurgeCache.c)
 *     CcFlushCache @ 0x140034710 (CcFlushCache.c)
 *     MiFlushDataSection @ 0x14005E1F4 (MiFlushDataSection.c)
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcFlushCacheToLsn @ 0x140131740 (CcFlushCacheToLsn.c)
 *     CcSetPrivateWriteFile @ 0x1401DE2BC (CcSetPrivateWriteFile.c)
 * Callees:
 *     CcIsFatalWriteError @ 0x1400140C8 (CcIsFatalWriteError.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400250F8 (CcGetVirtualAddressIfMapped.c)
 *     CcAmILowPriorityWriter @ 0x140026B84 (CcAmILowPriorityWriter.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140029248 (CcBoostLowPriorityWorkerThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     CcPerfLogFlushSection @ 0x140118638 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x140118844 (CcPerfLogFlushCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x14011A1E8 (CcReleaseByteRangeFromWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall CcFlushCachePriv(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, char a5, unsigned int *a6)
{
  unsigned __int64 v7; // r12
  int v8; // r13d
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int *v12; // r15
  unsigned __int8 CurrentIrql; // al
  __int64 v14; // r14
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // r9d
  __int64 result; // rax
  unsigned int v19; // ebx
  unsigned int v20; // edi
  int v21; // ebx
  bool v22; // al
  signed __int64 *v23; // rdx
  unsigned int v24; // ebx
  int v25; // esi
  unsigned int v26; // edi
  __int64 v27; // r15
  void *VirtualAddressIfMapped; // rax
  int v29; // r9d
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rsi
  int v33; // edx
  signed __int64 v34; // rbx
  char v35; // al
  signed __int64 v36; // rbx
  int v37; // edi
  signed __int64 v38; // rdx
  struct _KEVENT *v39; // rcx
  unsigned int v40; // eax
  signed __int64 v41; // rdi
  int v42; // r9d
  unsigned int v43; // ebx
  int v44; // r13d
  int v45; // r12d
  int v46; // ecx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+38h] [rbp-C8h]
  unsigned int v49; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h]
  signed __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+58h] [rbp-A8h] BYREF
  int v54; // [rsp+5Ch] [rbp-A4h]
  unsigned int v55; // [rsp+60h] [rbp-A0h]
  unsigned int v56; // [rsp+64h] [rbp-9Ch]
  unsigned int v57; // [rsp+68h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  unsigned int v61; // [rsp+98h] [rbp-68h]
  signed __int64 v62; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h] BYREF
  signed __int64 v66; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v67; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h] BYREF
  char v69; // [rsp+D8h] [rbp-28h] BYREF
  int v70; // [rsp+140h] [rbp+40h]
  _QWORD *v71; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+158h] [rbp+58h]

  v73 = a4;
  v70 = a1;
  v7 = (unsigned __int64)a2;
  v55 = 0;
  v8 = 0;
  v57 = 0;
  v9 = 0;
  v54 = 0;
  v10 = 0LL;
  v51 = 0;
  v50 = 0;
  v65 = 0LL;
  v60 = 0LL;
  if ( a4 && a2 && a2 != (_QWORD *)&CcNoDelay )
    KeBugCheckEx(0x34u, 0x15B7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v11 = 0LL;
  v12 = (unsigned int *)&v69;
  if ( a6 )
    v12 = a6;
  v67 = v12;
  *v12 = 0;
  if ( a2 == (_QWORD *)&CcNoDelay )
  {
    v8 = 1;
    v60 = *((_QWORD *)v12 + 1);
    v7 = 0LL;
    *v12 = -2147483626;
  }
  else
  {
    v50 = 1;
    if ( a5 )
      v50 = 17;
  }
  v59 = v8;
  LockHandle.LockQueue.Lock = &qword_14036F740;
  v71 = (_QWORD *)v7;
  *((_QWORD *)v12 + 1) = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &qword_14036F740);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&qword_14036F740, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v14 = *(_QWORD *)(a1 + 8);
  if ( !v14 )
    goto LABEL_15;
  if ( &CcSystemPartition != *(_UNKNOWN **)(v14 + 528) )
    KeBugCheckEx(0x34u, 0x1614uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v15 = *(_DWORD *)(v14 + 152);
  if ( (v15 & 0x2000) != 0 )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_145;
    v7 ^= 1uLL;
    v71 = (_QWORD *)v7;
  }
  if ( !v8 )
  {
    if ( !v7 )
      goto LABEL_123;
    v38 = *(_QWORD *)(v14 + 32);
    if ( *(_QWORD *)v7 < v38 )
    {
      v16 = a3;
      if ( *(_QWORD *)v7 + a3 <= v38 )
      {
LABEL_112:
        ++*(_DWORD *)(v14 + 516);
        goto LABEL_16;
      }
      a3 = v38 - *(_DWORD *)v7;
LABEL_123:
      v16 = a3;
      goto LABEL_112;
    }
LABEL_145:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    return result;
  }
  if ( (v15 & 0x10000) == 0 )
  {
LABEL_15:
    v16 = a3;
    goto LABEL_16;
  }
  v16 = a3;
  v51 = 1;
  if ( *(_DWORD *)(v14 + 516) )
    v9 = 1;
LABEL_16:
  if ( v7 && !v16 )
  {
    if ( v14 && !v8 )
      --*(_DWORD *)(v14 + 516);
    goto LABEL_145;
  }
  if ( v14 )
  {
    ++*(_DWORD *)(v14 + 4);
    v10 = *(_QWORD *)((*(_QWORD *)(v14 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v14 && (*(_DWORD *)(v14 + 152) & 0x40000000) != 0 )
    v9 = 1;
  if ( (xmmword_1403E4010 & 0x20000) != 0 )
    result = CcPerfLogFlushCache(v60, v14, v7, a3, v8 == 1, v51 == 1, v9 == 1);
  if ( !v8 )
  {
    if ( !v14 )
      goto LABEL_26;
    result = *(unsigned int *)(v14 + 152);
    if ( (result & 0x20) != 0 )
      result = CcBoostLowPriorityWorkerThread(v14);
  }
  if ( (v14
     && ((*(_BYTE *)(v10 + 6) & 0x10) == 0 || (*(_BYTE *)(v10 + 4) & 0x20) == 0)
     && (*(_DWORD *)(v14 + 152) & 0x20000) == 0
     || v8)
    && !v9 )
  {
    if ( !v14 )
      return result;
    if ( (*(_DWORD *)(v14 + 152) & 0x4000000) == 0 )
    {
      v19 = a3;
      goto LABEL_41;
    }
  }
LABEL_26:
  v19 = a3;
  if ( (xmmword_1403E4010 & 0x20000) != 0 )
    CcPerfLogFlushSection(v60, v14, v7, a3, v50);
  if ( v14 )
    CcUnmapVacbArray(v14, v7, a3, 0, 0, 0);
  MmFlushSection(v70, v7, a3, v17, (__int64)v12, v50);
  result = *v12;
  if ( (int)result < 0 )
  {
    v55 = *v12;
    goto LABEL_42;
  }
LABEL_41:
  result = 0LL;
LABEL_42:
  if ( !v14 )
    goto LABEL_58;
  if ( (*(_DWORD *)(v14 + 152) & 0x4000000) != 0 )
    goto LABEL_55;
  if ( v7 )
    v66 = *(_QWORD *)v7;
  v20 = 1;
  if ( v19 )
    v20 = v19;
  v49 = v20;
  if ( v8 )
  {
    v20 = v49;
    v11 = CcIdleDelayTick / 0xAu + MEMORY[0xFFFFF78000000320];
  }
  v63 = v11;
  while ( 1 )
  {
    v21 = v51;
    if ( !*(_DWORD *)(v14 + 192) && v8 && !v51 )
      break;
    if ( !*(_QWORD *)(v14 + 8) && (*(_DWORD *)(v14 + 152) & 4) == 0 && !*(_DWORD *)(v14 + 112) || v54 )
      break;
    v22 = v8 && CcAmILowPriorityWriter();
    if ( !v8 || v21 )
    {
      v23 = &v66;
      if ( !v7 )
        LODWORD(v23) = 0;
    }
    else
    {
      v20 = 0;
      LODWORD(v23) = 0;
    }
    LOBYTE(v48) = v22;
    if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                             v14,
                             (_DWORD)v23,
                             v20,
                             v73,
                             (__int64)&v52,
                             (__int64)&v49,
                             (__int64)&v68,
                             v48) )
      break;
    v24 = v49;
    v25 = v51;
    v26 = 0;
    v27 = v49;
    v64 = v49;
    do
    {
      VirtualAddressIfMapped = (void *)CcGetVirtualAddressIfMapped(v14, v52 + v27 - v24, &v65, &v53);
      if ( VirtualAddressIfMapped )
      {
        v30 = v53;
        if ( v53 > v24 )
        {
          v30 = v24;
          v53 = v24;
        }
        v26 = (MmSetAddressRangeModifiedEx(VirtualAddressIfMapped, v30) || v26)
           && v27 + v52 < *(_QWORD *)(v14 + 40)
           && (*(_DWORD *)(v14 + 268) & 0xF) != 0
           && v8
           && !v25
           && (*(_DWORD *)(v14 + 152) & 0x200) == 0
           && !CcCoalescingState;
        v31 = *(_QWORD *)(v65 + 8);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v65 + 16)) )
        {
          v39 = *(struct _KEVENT **)(v31 + 184);
          if ( v39 )
            KeSetEvent(v39, 0, 0);
        }
      }
      else
      {
        v40 = v53;
        if ( v53 > v24 )
          v40 = v24;
        v53 = v40;
      }
      v24 -= v53;
    }
    while ( v24 );
    __addgsdword(0x5EA8u, v26);
    v32 = v63;
    v12 = v67;
    v7 = (unsigned __int64)v71;
    if ( v26 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
      qword_14036FA10 += v64 >> 12;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v20 = v49;
      v34 = v52;
      goto LABEL_136;
    }
    v20 = v49;
    v56 = v49;
    if ( (xmmword_1403E4010 & 0x20000) != 0 )
      CcPerfLogFlushSection(v60, v14, (unsigned int)&v52, v49, v50);
    MmFlushSection(v70, (unsigned int)&v52, v64, v29, (__int64)v12, v50);
    v33 = *v12;
    if ( (*v12 & 0x80000000) != 0 )
    {
      v34 = v52;
      v41 = v52;
      v62 = v52;
      v61 = v56;
      if ( !CcIsFatalWriteError(v14, v33) )
      {
        v54 = 1;
LABEL_144:
        v20 = v56;
LABEL_136:
        v35 = 1;
        goto LABEL_94;
      }
      v43 = v61;
      v44 = v50;
      v45 = v60;
      do
      {
        if ( (xmmword_1403E4010 & 0x20000) != 0 )
          CcPerfLogFlushSection(v45, v14, (unsigned int)&v62, 4096, v44);
        MmFlushSection(v70, (unsigned int)&v62, 4096, v42, (__int64)v12, v44);
        if ( (*v12 & 0x80000000) != 0 )
        {
          if ( CcIsFatalWriteError(v14, *v12) )
          {
            v46 = v54;
            v55 = *v12;
          }
          else
          {
            v46 = 1;
            v54 = 1;
          }
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
          *(_DWORD *)(v14 + 152) |= 0x400u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          v46 = v54;
        }
        v41 += 4096LL;
        v62 = v41;
        v43 -= 4096;
      }
      while ( v43 );
      v34 = v52;
      v32 = v63;
      v7 = (unsigned __int64)v71;
      v8 = v59;
      if ( v46 )
        goto LABEL_144;
      v20 = v56;
    }
    else
    {
      if ( (*(_DWORD *)(v14 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
        *(_DWORD *)(v14 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
      }
      if ( v8 )
      {
        __incgsdword(0x5EACu);
        __addgsdword(0x5EB0u, (v49 + 4095) >> 12);
        v20 = v49;
      }
      v34 = v52;
    }
    v35 = 0;
LABEL_94:
    LOBYTE(BugCheckParameter4) = v35;
    CcReleaseByteRangeFromWrite(v14, &v52, v20, v68, BugCheckParameter4);
    v57 += v20;
    if ( v57 >= 0x40000 && (__int64 *)qword_14036FA30 != &qword_14036FA30 )
    {
      CcPostDeferredWrites(&CcSystemPartition);
      v57 = 0;
    }
    if ( v8 && !v51 && (__int64 *)qword_14036FA30 == &qword_14036FA30 )
    {
      if ( MEMORY[0xFFFFF78000000320] > v32 )
      {
        *((_QWORD *)v12 + 1) = 35422LL;
        break;
      }
      v20 = v49;
      v34 = v52;
    }
    if ( v7 )
    {
      v36 = v64 + v34;
      v52 = v36;
      if ( *(_QWORD *)v7 + a3 <= v36 )
        break;
      v37 = *(_DWORD *)v7 - v36;
      v66 = v36;
      v20 = a3 + v37;
      v49 = v20;
    }
  }
  if ( v57 && (__int64 *)qword_14036FA30 != &qword_14036FA30 )
    CcPostDeferredWrites(&CcSystemPartition);
LABEL_55:
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  CcDecrementOpenCount(v14);
  if ( !v8 )
    --*(_DWORD *)(v14 + 516);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  result = v55;
LABEL_58:
  if ( (int)result < 0 )
    *v12 = result;
  return result;
}
