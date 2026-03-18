/*
 * XREFs of MiGatherPagefilePages @ 0x140056D98
 * Callers:
 *     MiModifiedPageWriter @ 0x140162A30 (MiModifiedPageWriter.c)
 * Callees:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x140015008 (MiReleaseWriteInProgressCharges.c)
 *     MI_PAGEFILE_WRITE @ 0x1400152A8 (MI_PAGEFILE_WRITE.c)
 *     MiFillNoReservationCluster @ 0x14002DC7C (MiFillNoReservationCluster.c)
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x140057400 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x1400574A4 (MiUpdatePagefilePeakUsage.c)
 *     MiMapPageFileHash @ 0x140075F48 (MiMapPageFileHash.c)
 *     MiPageFileLargestBitmapsRun @ 0x14007DC78 (MiPageFileLargestBitmapsRun.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14007E0DC (MiInvalidatePageFileBitmapsCache.c)
 *     MiFindPageFileWriteCluster @ 0x14007E698 (MiFindPageFileWriteCluster.c)
 *     MiSetPageFileAllocationBits @ 0x14007E9A0 (MiSetPageFileAllocationBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MiPageFileNoFreeSpace @ 0x14021A3F4 (MiPageFileNoFreeSpace.c)
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
  _QWORD *v8; // rax
  __int16 v9; // cx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // r10d
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  _QWORD *v22; // rcx
  unsigned int v23; // r14d
  unsigned __int64 v24; // r15
  _QWORD *v25; // r15
  unsigned int v26; // eax
  __int64 v27; // r15
  int v28; // edi
  unsigned int v29; // edi
  int v30; // ecx
  unsigned __int64 v31; // rax
  int v32; // eax
  unsigned int v33; // esi
  __int64 result; // rax
  __int64 v35; // r15
  __int64 *v36; // rax
  NTSTATUS v37; // eax
  _QWORD *v38; // r15
  _QWORD *v39; // r14
  __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  unsigned __int8 CurrentIrql; // di
  unsigned int v43; // [rsp+60h] [rbp-49h] BYREF
  int v44; // [rsp+64h] [rbp-45h]
  unsigned int v45; // [rsp+68h] [rbp-41h]
  _QWORD *v46; // [rsp+70h] [rbp-39h]
  _QWORD *v47; // [rsp+78h] [rbp-31h]
  __int64 v48; // [rsp+80h] [rbp-29h]
  _QWORD *v49; // [rsp+88h] [rbp-21h]
  unsigned __int64 v50; // [rsp+90h] [rbp-19h]
  struct _KTHREAD *v51; // [rsp+98h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-9h] BYREF
  unsigned int v54; // [rsp+110h] [rbp+67h]
  unsigned int v55; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v56; // [rsp+120h] [rbp+77h] BYREF
  unsigned int v57; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0;
  v51 = CurrentThread;
  v6 = 1LL;
  v7 = *(_QWORD *)(v1 + 256);
  v48 = v7;
  if ( !*(_QWORD *)(v1 + 24) )
    goto LABEL_69;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v8 = (_QWORD *)(a1 + 256);
  v9 = *(_WORD *)(v1 + 204);
  v47 = v8;
  v10 = *(unsigned __int16 *)(v1 + 204);
  if ( *(_DWORD *)(v7 + 1192) )
    v5 = 4;
  v11 = *(_QWORD *)(v7 + 40 * ((v9 & 0xF) + 64LL));
  if ( !_bittest16((const __int16 *)&v10, 4u)
    && (v5 & 4) != 0
    && (v12 = *(_QWORD *)(v7 + 40 * (*(unsigned int *)(v7 + 1188) + 64LL))) != 0 )
  {
    v5 |= 2u;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 1184) )
    {
LABEL_62:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
      *(_BYTE *)(v1 + 206) |= 1u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      *(_QWORD *)v4 = 2575857425LL;
      goto LABEL_50;
    }
    v12 = *(_QWORD *)(v7 + 2496);
  }
  if ( !v11 && (!v12 || (v10 & 0x10) != 0) )
    goto LABEL_62;
  if ( (v5 & 2) == 0
    && v12
    && (v10 & 0x10) == 0
    && (!v11
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1, v10, 0LL, 1LL) >= *(_DWORD *)(v1 + 136) >> 2
     && (v12 >= (unsigned __int64)(unsigned int)dword_1403E3124 >> 2 || v12 >= v11)) )
  {
    v5 |= 2u;
  }
  if ( *(_DWORD *)(v7 + 1028) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    v13 = 1;
    v56 = 1;
  }
  else
  {
    v13 = dword_1403E3124;
    v56 = dword_1403E3124;
    if ( (v5 & 2) != 0 && v12 < (unsigned int)dword_1403E3124 )
    {
      v13 = v12;
      v56 = v12;
    }
  }
  if ( (*(_DWORD *)(v4 + 40) & 0x1Cu) < 8 )
  {
    if ( v13 > 0x100 )
      v13 = 256;
    v56 = v13;
  }
  v5 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( (v5 & 2) == 0 )
  {
    v55 = v13;
    v14 = MiBuildReservationCluster(v47, v1, &v55, &v43);
    v15 = v55;
    v16 = v14;
    v57 = v14;
    v17 = v43;
    goto LABEL_22;
  }
  v57 = 0;
  MiFindPageFileWriteCluster(v1, &v57, &v56, 0LL);
  v2 = v56;
  if ( !v56 )
  {
LABEL_69:
    MiPageFileNoFreeSpace(v1, v4, v2, v6);
    goto LABEL_50;
  }
  v17 = MiFillNoReservationCluster(v7, v47, v56);
  v16 = v57;
  v15 = v17;
  v55 = v17;
LABEL_22:
  if ( v15 )
  {
    v56 = v15;
    v18 = v15;
    v45 = v17 - 1;
    v43 = v17 - 1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
    v44 = (v5 >> 1) & 1;
    if ( v44 )
    {
      MiFindPageFileWriteCluster(v1, &v57, &v56, 1LL);
      v18 = v56;
      v16 = v57;
    }
    else
    {
      MiSetPageFileAllocationBits(v1, v16, v55);
      v19 = -1;
      v50 = 0LL;
      v20 = 0LL;
      v46 = v47;
      v21 = (8 * (unsigned __int64)v55 + 7) >> 3;
      v22 = v47;
      if ( v47 > &v47[v55] )
        v21 = 0LL;
      if ( !v21 )
      {
LABEL_35:
        *(_DWORD *)(v1 + 136) = v18 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
LABEL_36:
        MiUpdatePagefilePeakUsage(v1);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        KiLeaveCriticalRegionUnsafe(CurrentThread);
        v5 &= ~1u;
        if ( v18 != v55 )
        {
          v49 = &v47[v55];
          v38 = v49;
          v39 = &v47[v18];
          do
          {
            v40 = 48LL * *v39 - 0x58000000000LL;
            v41 = (unsigned __int8)MiLockPageInline(v40);
            MiWriteCompletePfn(v40, 1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v41);
            ++v39;
          }
          while ( v39 < v38 );
          v18 = v56;
          v45 = v56 - v55 + v43;
          v43 = v45;
          MiReleaseWriteInProgressCharges(v48, v55 - v56, 0LL);
          v16 = v57;
          v4 = a1;
        }
        v25 = v47;
        *(_DWORD *)(v4 + 248) = v18 << 12;
        *(_DWORD *)(v4 + 136) = v18 << 12;
        *(_DWORD *)(v4 + 140) = v45;
        v26 = 0;
        v55 = v18;
        v54 = 0;
        v44 = v16;
        do
        {
          if ( *v25 != qword_14036CEC8 )
          {
            MiUpdatePfnBackingStore(48LL * *v25 - 0x58000000000LL, v1, v16, 0LL);
            v26 = v54;
          }
          ++v26;
          ++v25;
          ++v16;
          v54 = v26;
          v56 = v26;
        }
        while ( v26 < v18 );
        v27 = v48;
        *(_WORD *)(v4 + 216) = 8 * (dword_1403E3124 + 6);
        *(_DWORD *)(v4 + 40) &= ~2u;
        v28 = *(_DWORD *)(v4 + 40) >> 2;
        v57 = v16;
        v29 = v28 & 7;
        *(_QWORD *)(v4 + 184) = MEMORY[0xFFFFF78000000014];
        v30 = *(_DWORD *)(v27 + 892);
        v31 = *(_QWORD *)(v27 + 5760);
        if ( v30 )
        {
          if ( v31 >= 0x420 )
          {
            *(_DWORD *)(v27 + 892) = 0;
            goto LABEL_44;
          }
          *(_DWORD *)(v27 + 892) = v30 - 1;
        }
        else if ( v31 < 0xA0 )
        {
          *(_DWORD *)(v27 + 892) = 32;
        }
        else
        {
          if ( v31 >= 0x120 )
          {
LABEL_44:
            CurrentThread = v51;
            *(_DWORD *)(v4 + 40) = (4 * v29) | *(_DWORD *)(v4 + 40) & 0xFFFFFFE3;
            if ( v29 < 2 )
            {
              --CurrentThread->SpecialApcDisable;
              ++*(_DWORD *)(v27 + 724);
              KiLeaveGuardedRegionUnsafe(CurrentThread);
            }
            MI_PAGEFILE_WRITE(v4, (_QWORD *)(v4 + 184), v29, ((v5 >> 1) & 1) == 0, -1);
            v32 = *(_DWORD *)(v27 + 880);
            if ( v32 == 512 )
              *(_QWORD *)(v27 + 872) -= *(_QWORD *)(v27 + 872) >> 9;
            else
              *(_DWORD *)(v27 + 880) = v32 + 1;
            *(_QWORD *)(v27 + 872) += v55;
            v33 = v44;
            *(_DWORD *)(v4 + 40) &= ~0x20u;
            *(_QWORD *)(v4 + 176) = (unsigned __int64)v33 << 12;
            if ( v5 < 4 || (int)MiStoreWriteModifiedPages(v4) < 0 )
            {
              __incgsdword(0x2EACu);
              __addgsdword(0x2EA8u, v55);
              MiMapPageFileHash(v1, v4 + 208, 0LL, v33, v55);
              v37 = IoAsynchronousPageWrite(
                      *(struct _FILE_OBJECT **)(v1 + 56),
                      (struct _MDL *)(v4 + 208),
                      (LARGE_INTEGER *)(v4 + 176),
                      (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
                      (void *)v4,
                      v29,
                      *(_DWORD *)(v1 + 200),
                      0,
                      0LL,
                      (struct _IO_STATUS_BLOCK *)(v4 + 16),
                      (IRP **)(v4 + 32));
              if ( (v37 & 0xC0000000) == 0xC0000000 )
              {
                *(_DWORD *)(v4 + 16) = v37;
                *(_QWORD *)(v4 + 24) = 0LL;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(1uLL);
                MiWriteComplete(v4, (int *)(v4 + 16), 0);
                __writecr8(CurrentIrql);
              }
            }
            goto LABEL_50;
          }
          *(_DWORD *)(v27 + 892) = 8;
        }
        v29 = 4;
        goto LABEL_44;
      }
      v23 = v16;
      v24 = v21;
      do
      {
        if ( *v22 == qword_14036CEC8
          && (v22 = v46, !_bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v23)) )
        {
          if ( v19 == -1 )
            v19 = v23;
        }
        else if ( v19 != -1 )
        {
          MiInvalidatePageFileBitmapsCache(v1, v19, v23 - v19, 0LL);
          v22 = v46;
          v20 = v50;
          v19 = -1;
        }
        ++v22;
        ++v20;
        ++v23;
        v46 = v22;
        v50 = v20;
      }
      while ( v20 < v24 );
      v4 = a1;
      CurrentThread = v51;
    }
    if ( v44 )
      goto LABEL_36;
    goto LABEL_35;
  }
  --CurrentThread->SpecialApcDisable;
  v35 = v7 + 936;
  v36 = *(__int64 **)(v35 + 8);
  if ( *v36 != v35 )
    __fastfail(3u);
  *(_QWORD *)v4 = v35;
  *(_QWORD *)(v4 + 8) = v36;
  *v36 = v4;
  *(_QWORD *)(v35 + 8) = v4;
  KiLeaveGuardedRegionUnsafe(CurrentThread);
LABEL_50:
  result = 1LL;
  if ( (v5 & 1) != 0 )
    return KiLeaveCriticalRegionUnsafe(CurrentThread);
  return result;
}
