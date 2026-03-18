/*
 * XREFs of MiGatherPagefilePages @ 0x1400D5DC8
 * Callers:
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 * Callees:
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiFindPageFileWriteCluster @ 0x14009C6F0 (MiFindPageFileWriteCluster.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14009D014 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x14009D2DC (MiPageFileLargestBitmapsRun.c)
 *     MiSetPageFileAllocationBits @ 0x14009D510 (MiSetPageFileAllocationBits.c)
 *     MiFillNoReservationCluster @ 0x1400BC0FC (MiFillNoReservationCluster.c)
 *     MI_PAGEFILE_WRITE @ 0x1400C99D0 (MI_PAGEFILE_WRITE.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     MiUpdatePagefilePeakUsage @ 0x1400D5DAC (MiUpdatePagefilePeakUsage.c)
 *     MiUpdatePfnBackingStore @ 0x1400D6420 (MiUpdatePfnBackingStore.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x140134F38 (MiReleaseWriteInProgressCharges.c)
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiPageFileNoFreeSpace @ 0x14025FBA0 (MiPageFileNoFreeSpace.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int16 v13; // dx
  unsigned int v14; // edi
  int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // r12d
  ULONG v18; // esi
  unsigned int v19; // eax
  unsigned int v20; // r12d
  unsigned int v21; // edi
  _QWORD *v22; // rcx
  _QWORD *v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int v25; // r10d
  ULONG v26; // r14d
  unsigned int v27; // r12d
  _QWORD *v28; // r14
  __int64 v29; // r15
  int v30; // edi
  unsigned int v31; // edi
  int v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned int v36; // esi
  __int64 result; // rax
  unsigned int v38; // eax
  NTSTATUS v39; // eax
  unsigned __int8 v40; // al
  __int64 v41; // r15
  __int64 *v42; // rax
  _QWORD *v43; // r14
  _QWORD *v44; // r12
  ULONG_PTR v45; // rsi
  unsigned __int64 v46; // rdi
  __int64 v47; // r8
  int v48; // eax
  unsigned __int8 CurrentIrql; // di
  unsigned int v50; // [rsp+60h] [rbp-49h] BYREF
  int v51; // [rsp+64h] [rbp-45h]
  _QWORD *v52; // [rsp+68h] [rbp-41h]
  _QWORD *v53; // [rsp+70h] [rbp-39h]
  unsigned __int64 v54; // [rsp+78h] [rbp-31h]
  struct _KTHREAD *v55; // [rsp+80h] [rbp-29h]
  __int64 v56; // [rsp+88h] [rbp-21h]
  _QWORD *v57; // [rsp+90h] [rbp-19h]
  __int64 v58; // [rsp+98h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-9h] BYREF
  ULONG v61; // [rsp+118h] [rbp+6Fh] BYREF
  int v62; // [rsp+120h] [rbp+77h] BYREF
  ULONG v63; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0;
  v55 = CurrentThread;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 256);
  v56 = v7;
  if ( !*(_QWORD *)(v1 + 24) )
    goto LABEL_72;
  v8 = a1 + 208;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v9 = *(_WORD *)(v1 + 204) & 0xF;
  v58 = v8;
  v52 = (_QWORD *)(v8 + 48);
  v10 = *(_WORD *)(v1 + 204);
  v11 = *(_QWORD *)(v7 + 40 * v9 + 2752);
  if ( *(_DWORD *)(v7 + 1144) )
    v5 = 4;
  if ( !_bittest16((const __int16 *)&v10, 4u)
    && (v5 & 4) != 0
    && (v12 = *(_QWORD *)(v7 + 40LL * *(unsigned int *)(v7 + 1140) + 2752)) != 0 )
  {
    v5 |= 2u;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 1136) )
      goto LABEL_66;
    v12 = *(_QWORD *)(v7 + 2688);
  }
  if ( v11 )
  {
    v13 = v10 >> 4;
    goto LABEL_10;
  }
  if ( !v12 || (v13 = v10 >> 4, (v13 & 1) != 0) )
  {
LABEL_66:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    *(_BYTE *)(v1 + 206) |= 1u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    *(_QWORD *)v4 = 2575857425LL;
    goto LABEL_50;
  }
LABEL_10:
  if ( (v5 & 2) == 0
    && v12
    && (v13 & 1) == 0
    && (!v11
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v12 >= (unsigned __int64)(unsigned int)dword_14044B180 >> 2 || v12 >= v11)) )
  {
    v5 |= 2u;
  }
  v14 = dword_14044B180;
  v62 = dword_14044B180;
  if ( (v5 & 2) != 0 )
  {
    if ( v12 < (unsigned int)dword_14044B180 )
      v14 = v12;
    v62 = v14;
  }
  v15 = 0;
  if ( *(_BYTE *)(v7 + 984) )
  {
    LOBYTE(v61) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 980));
    if ( *(_BYTE *)(v7 + 986) )
    {
      *(_BYTE *)(v7 + 986) = 0;
      v15 = 1;
      *(_BYTE *)(v7 + 984) = 0;
    }
    else
    {
      v40 = *(_BYTE *)(v7 + 984);
      if ( v40 )
      {
        v14 = v40;
        v62 = v40;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 980));
    __writecr8((unsigned __int8)v61);
    if ( v15 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v14 > 0x100 )
      v14 = 256;
    v62 = v14;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  v51 = (v5 >> 1) & 1;
  if ( !v51 )
  {
    v61 = v14;
    v16 = MiBuildReservationCluster(v52, v1, &v61, &v50);
    v17 = v50;
    v18 = v16;
    v63 = v16;
    v19 = v61;
    goto LABEL_23;
  }
  v63 = 0;
  MiFindPageFileWriteCluster((int *)v1, &v63, (unsigned int *)&v62, 0);
  v2 = (unsigned int)v62;
  if ( !v62 )
  {
LABEL_72:
    MiPageFileNoFreeSpace(v1, v4, v2, v6);
    goto LABEL_50;
  }
  v19 = MiFillNoReservationCluster((_DWORD *)v7, v52, v62);
  v18 = v63;
  v17 = v19;
  v61 = v19;
LABEL_23:
  if ( v19 )
  {
    v20 = v17 - 1;
    v62 = v19;
    v50 = v20;
    v21 = v19;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    if ( v51 )
    {
      MiFindPageFileWriteCluster((int *)v1, &v63, (unsigned int *)&v62, 1);
      v21 = v62;
      v18 = v63;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v18, v61);
      v22 = v52;
      v23 = (_QWORD *)v61;
      v24 = 0LL;
      v53 = v52;
      v25 = -1;
      v54 = 0LL;
      if ( v52 > &v52[v61] )
        v23 = 0LL;
      v57 = v23;
      if ( !v23 )
      {
LABEL_35:
        *(_DWORD *)(v1 + 136) = v21 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
LABEL_36:
        MiUpdatePagefilePeakUsage((_QWORD *)v1);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KeLeaveCriticalRegionThread(v55);
        v5 &= ~1u;
        if ( v21 != v61 )
        {
          v57 = &v52[v61];
          v43 = v57;
          v44 = &v52[v21];
          do
          {
            v45 = 48LL * *v44 - 0x58000000000LL;
            v46 = (unsigned __int8)MiLockPageInline(v45);
            MiWriteCompletePfn(v45, 1, v47);
            _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v46);
            ++v44;
          }
          while ( v44 < v43 );
          v21 = v62;
          v20 = v62 - v61 + v50;
          v50 = v20;
          MiReleaseWriteInProgressCharges(v56, v61 - v62, 0LL);
          v18 = v63;
          v4 = a1;
        }
        v61 = v21;
        *(_DWORD *)(v4 + 248) = v21 << 12;
        *(_DWORD *)(v4 + 136) = v21 << 12;
        *(_DWORD *)(v4 + 140) = v20;
        v27 = 0;
        v28 = v52;
        v51 = v18;
        do
        {
          if ( *v28 != qword_1403CC408 )
            MiUpdatePfnBackingStore(48LL * *v28 - 0x58000000000LL, v1, v18, 0LL);
          ++v28;
          ++v27;
          ++v18;
        }
        while ( v27 < v21 );
        v29 = v56;
        v63 = v18;
        *(_WORD *)(v58 + 8) = 8 * (dword_14044B180 + 6);
        *(_DWORD *)(a1 + 40) &= ~2u;
        v30 = *(_DWORD *)(a1 + 40) >> 2;
        *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000014];
        v31 = v30 & 7;
        v32 = *(_DWORD *)(v29 + 844);
        v33 = *(_QWORD *)(v29 + 7040);
        v62 = v27;
        if ( v32 )
        {
          if ( v33 >= 0x420 )
          {
            v48 = 0;
          }
          else
          {
            v31 = 4;
            v48 = v32 - 1;
          }
          *(_DWORD *)(v29 + 844) = v48;
          goto LABEL_44;
        }
        if ( v33 < 0xA0 )
        {
          *(_DWORD *)(v29 + 844) = 32;
        }
        else
        {
          if ( v33 >= 0x120 )
          {
LABEL_44:
            CurrentThread = v55;
            *(_DWORD *)(a1 + 40) = (4 * v31) | *(_DWORD *)(a1 + 40) & 0xFFFFFFE3;
            if ( v31 < 2 )
            {
              --CurrentThread->SpecialApcDisable;
              ++*(_DWORD *)(v29 + 676);
              KiLeaveGuardedRegionUnsafe(CurrentThread);
            }
            MI_PAGEFILE_WRITE(a1, (_QWORD *)(a1 + 184), v31, ((v5 >> 1) & 1) == 0, -1);
            v34 = *(_DWORD *)(v29 + 832);
            v35 = *(_QWORD *)(v29 + 824);
            if ( v34 == 512 )
            {
              v35 -= v35 >> 9;
              *(_QWORD *)(v29 + 824) = v35;
            }
            else
            {
              *(_DWORD *)(v29 + 832) = v34 + 1;
            }
            v36 = v51;
            *(_QWORD *)(v29 + 824) = v35 + v61;
            *(_DWORD *)(a1 + 40) &= ~0x20u;
            *(_QWORD *)(a1 + 176) = (unsigned __int64)v36 << 12;
            if ( v5 < 4 || (int)MiStoreWriteModifiedPages(a1) < 0 )
            {
              __incgsdword(0x2EACu);
              __addgsdword(0x2EA8u, v61);
              MiMapPageFileHash(v1, a1 + 208, 0LL, v36, v61);
              v39 = IoAsynchronousPageWrite(
                      *(struct _FILE_OBJECT **)(v1 + 56),
                      (struct _MDL *)(a1 + 208),
                      (LARGE_INTEGER *)(a1 + 176),
                      (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
                      (void *)a1,
                      v31,
                      *(_DWORD *)(v1 + 200),
                      0,
                      0LL,
                      (struct _IO_STATUS_BLOCK *)(a1 + 16),
                      (IRP **)(a1 + 32));
              if ( (v39 & 0xC0000000) == 0xC0000000 )
              {
                *(_DWORD *)(a1 + 16) = v39;
                *(_QWORD *)(a1 + 24) = 0LL;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(1uLL);
                MiWriteComplete(a1, a1 + 16, 0LL);
                __writecr8(CurrentIrql);
              }
            }
            goto LABEL_50;
          }
          *(_DWORD *)(v29 + 844) = 8;
        }
        v31 = 4;
        goto LABEL_44;
      }
      v26 = v18;
      do
      {
        if ( *v22 != qword_1403CC408
          || (v22 = v53, v24 = v54, _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v26)) )
        {
          if ( v25 != -1 )
          {
            MiInvalidatePageFileBitmapsCache(v1, v25, v26 - v25, 0LL);
            v22 = v53;
            v24 = v54;
            v25 = -1;
            v23 = v57;
          }
        }
        else
        {
          v38 = v26;
          if ( v25 != -1 )
            v38 = v25;
          v25 = v38;
        }
        ++v22;
        ++v24;
        ++v26;
        v53 = v22;
        v54 = v24;
      }
      while ( v24 < (unsigned __int64)v23 );
      v4 = a1;
    }
    if ( v51 )
      goto LABEL_36;
    goto LABEL_35;
  }
  CurrentThread = v55;
  --v55->SpecialApcDisable;
  v41 = v7 + 888;
  v42 = *(__int64 **)(v41 + 8);
  if ( *v42 != v41 )
    __fastfail(3u);
  *(_QWORD *)v4 = v41;
  *(_QWORD *)(v4 + 8) = v42;
  *v42 = v4;
  *(_QWORD *)(v41 + 8) = v4;
  KiLeaveGuardedRegionUnsafe(CurrentThread);
LABEL_50:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return KeLeaveCriticalRegionThread(CurrentThread);
  return result;
}
