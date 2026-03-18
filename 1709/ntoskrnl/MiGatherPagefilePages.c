/*
 * XREFs of MiGatherPagefilePages @ 0x140225D30
 * Callers:
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400EFDE0 (MiReleaseWriteInProgressCharges.c)
 *     MiPageFileLargestBitmapsRun @ 0x14011A3F8 (MiPageFileLargestBitmapsRun.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14011A84C (MiInvalidatePageFileBitmapsCache.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x140225384 (MiFillNoReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140225658 (MiFindPageFileWriteCluster.c)
 *     MiPageFileNoFreeSpace @ 0x140226984 (MiPageFileNoFreeSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140226D20 (MiSetPageFileAllocationBits.c)
 *     MiUpdatePagefilePeakUsage @ 0x140227164 (MiUpdatePagefilePeakUsage.c)
 *     MiUpdatePfnBackingStore @ 0x1402271CC (MiUpdatePfnBackingStore.c)
 *     MI_PAGEFILE_WRITE @ 0x14022B8B4 (MI_PAGEFILE_WRITE.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 */

__int64 __fastcall MiGatherPagefilePages(__int64 a1)
{
  __int64 v1; // r13
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r14
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rcx
  __int16 v8; // dx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // r15
  __int64 *v17; // rax
  unsigned int v18; // edi
  __int64 v19; // r12
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned int v22; // r10d
  _QWORD *v23; // rax
  _QWORD *v24; // r12
  unsigned int v25; // r14d
  _QWORD *v26; // r14
  _QWORD *v27; // r12
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  _QWORD *v30; // r12
  unsigned int v31; // eax
  __int64 v32; // r15
  int v33; // edi
  unsigned int v34; // edi
  int v35; // ecx
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // esi
  NTSTATUS v39; // eax
  __int64 v40; // r9
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  unsigned int v43; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v44; // [rsp+64h] [rbp-35h]
  _QWORD *v45; // [rsp+68h] [rbp-31h]
  unsigned __int64 v46; // [rsp+70h] [rbp-29h]
  _QWORD *v47; // [rsp+78h] [rbp-21h]
  struct _KTHREAD *v48; // [rsp+80h] [rbp-19h]
  __int64 v49; // [rsp+88h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v52; // [rsp+100h] [rbp+67h]
  unsigned int v53; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v54; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v55; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = 0;
  v48 = CurrentThread;
  v5 = *(_QWORD *)(v1 + 256);
  v49 = v5;
  if ( !*(_QWORD *)(v1 + 24) )
  {
    MiPageFileNoFreeSpace(v1, a1);
    goto LABEL_83;
  }
  v6 = a1 + 208;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_DWORD *)(a1 + 216) = 131120;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v7 = *(_WORD *)(v1 + 204) & 0xF;
  v47 = (_QWORD *)(v6 + 48);
  v8 = *(_WORD *)(v1 + 204);
  if ( *(_DWORD *)(v5 + 1144) )
    v4 = 4;
  v9 = *(_QWORD *)(v5 + 40 * v7 + 2688);
  if ( (*(_WORD *)(v1 + 204) & 0x10) == 0
    && (v4 & 4) != 0
    && (v10 = *(_QWORD *)(v5 + 40LL * *(unsigned int *)(v5 + 1140) + 2688)) != 0 )
  {
    v4 |= 2u;
  }
  else
  {
    if ( *(_DWORD *)(v5 + 1136) )
    {
LABEL_82:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
      *(_BYTE *)(v1 + 206) |= 1u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      *(_QWORD *)v3 = 2575857425LL;
      goto LABEL_83;
    }
    v10 = *(_QWORD *)(v5 + 2624);
  }
  if ( !v9 && (!v10 || (v8 & 0x10) != 0) )
    goto LABEL_82;
  if ( (v4 & 2) == 0
    && v10
    && (v8 & 0x10) == 0
    && (!v9
     || (*(_BYTE *)(v1 + 207) & 1) != 0
     || (unsigned int)MiPageFileLargestBitmapsRun(v1) >= *(_DWORD *)(v1 + 136) >> 2
     && (v10 >= (unsigned __int64)(unsigned int)dword_140400120 >> 2 || v10 >= v9)) )
  {
    v4 |= 2u;
  }
  if ( *(_DWORD *)(v5 + 980) )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    v11 = 1;
    v53 = 1;
  }
  else
  {
    v11 = dword_140400120;
    v53 = dword_140400120;
    if ( (v4 & 2) != 0 && v10 < (unsigned int)dword_140400120 )
    {
      v11 = v10;
      v53 = v10;
    }
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x1Cu) < 8 )
  {
    if ( v11 > 0x100 )
      v11 = 256;
    v53 = v11;
  }
  v4 |= 1u;
  --CurrentThread->KernelApcDisable;
  if ( ((v4 >> 1) & 1) != 0 )
  {
    v55 = 0;
    MiFindPageFileWriteCluster(v1, &v55, &v53, 0);
    if ( !v53 )
    {
      MiPageFileNoFreeSpace(v1, v3);
      CurrentThread = v48;
      goto LABEL_83;
    }
    v12 = MiFillNoReservationCluster((_DWORD *)v5, v47, v53);
    v13 = v55;
    v14 = v12;
    v54 = v12;
  }
  else
  {
    v54 = v11;
    v15 = MiBuildReservationCluster(v47, v1, &v54, &v43);
    v14 = v54;
    v13 = v15;
    v55 = v15;
    v12 = v43;
  }
  if ( !v14 )
  {
    CurrentThread = v48;
    --v48->SpecialApcDisable;
    v16 = v5 + 888;
    v17 = *(__int64 **)(v16 + 8);
    if ( *v17 != v16 )
      __fastfail(3u);
    *(_QWORD *)v3 = v16;
    *(_QWORD *)(v3 + 8) = v17;
    *v17 = v3;
    *(_QWORD *)(v16 + 8) = v3;
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    goto LABEL_83;
  }
  v53 = v14;
  v18 = v14;
  v44 = v12 - 1;
  v43 = v12 - 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 232), &LockHandle);
  if ( ((v4 >> 1) & 1) != 0 )
  {
    MiFindPageFileWriteCluster(v1, &v55, &v53, 1);
    v18 = v53;
    v13 = v55;
  }
  else
  {
    v19 = v54;
    MiSetPageFileAllocationBits(v1, v13, v54);
    v20 = (unsigned int)v19;
    v21 = 0LL;
    v22 = -1;
    v46 = 0LL;
    v23 = &v47[v19];
    v24 = v47;
    if ( v47 > v23 )
      v20 = 0LL;
    v45 = (_QWORD *)v20;
    if ( v20 )
    {
      v25 = v13;
      do
      {
        if ( *v24 != qword_140389188
          || (v21 = v46,
              v20 = (unsigned __int64)v45,
              _bittest64(*(const signed __int64 **)(*(_QWORD *)(v1 + 112) + 32LL), v25)) )
        {
          if ( v22 != -1 )
          {
            MiInvalidatePageFileBitmapsCache(v1, v22, v25 - v22, 0LL);
            v21 = v46;
            v20 = (unsigned __int64)v45;
            v22 = -1;
          }
        }
        else if ( v22 == -1 )
        {
          v22 = v25;
        }
        ++v21;
        ++v25;
        ++v24;
        v46 = v21;
      }
      while ( v21 < v20 );
      v3 = a1;
    }
  }
  if ( (v4 & 2) == 0 )
    *(_DWORD *)(v1 + 136) = v18 + *(_DWORD *)(v1 + 136) - (*(_DWORD *)(v1 + 136) >> 2);
  MiUpdatePagefilePeakUsage(v1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  KeLeaveCriticalRegionThread((__int64)v48);
  v4 &= ~1u;
  if ( v18 != v54 )
  {
    v45 = &v47[v54];
    v26 = v45;
    v27 = &v47[v18];
    do
    {
      v28 = 48LL * *v27 - 0x58000000000LL;
      v29 = (unsigned __int8)MiLockPageInline(v28);
      MiWriteCompletePfn(v28, 1);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v29);
      ++v27;
    }
    while ( v27 < v26 );
    v18 = v53;
    v44 = v53 - v54 + v43;
    v43 = v44;
    MiReleaseWriteInProgressCharges(v49, v54 - v53, 0);
    v13 = v55;
    v3 = a1;
  }
  v30 = v47;
  *(_DWORD *)(v3 + 248) = v18 << 12;
  *(_DWORD *)(v3 + 136) = v18 << 12;
  *(_DWORD *)(v3 + 140) = v44;
  v31 = 0;
  v54 = v18;
  v52 = 0;
  v44 = v13;
  do
  {
    if ( *v30 != qword_140389188 )
    {
      MiUpdatePfnBackingStore(48LL * *v30 - 0x58000000000LL, v1, v13, 0LL);
      v31 = v52;
    }
    ++v31;
    ++v30;
    ++v13;
    v52 = v31;
    v53 = v31;
  }
  while ( v31 < v18 );
  v32 = v49;
  *(_WORD *)(v3 + 216) = 8 * (dword_140400120 + 6);
  *(_DWORD *)(v3 + 40) &= ~2u;
  v33 = *(_DWORD *)(v3 + 40) >> 2;
  v55 = v13;
  v34 = v33 & 7;
  *(_QWORD *)(v3 + 184) = MEMORY[0xFFFFF78000000014];
  v35 = *(_DWORD *)(v32 + 844);
  v36 = *(_QWORD *)(v32 + 5952);
  if ( v35 )
  {
    if ( v36 < 0x420 )
    {
      *(_DWORD *)(v32 + 844) = v35 - 1;
LABEL_72:
      v34 = 4;
      goto LABEL_73;
    }
    *(_DWORD *)(v32 + 844) = 0;
  }
  else
  {
    if ( v36 < 0xA0 )
    {
      *(_DWORD *)(v32 + 844) = 32;
      goto LABEL_72;
    }
    if ( v36 < 0x120 )
    {
      *(_DWORD *)(v32 + 844) = 8;
      goto LABEL_72;
    }
  }
LABEL_73:
  CurrentThread = v48;
  *(_DWORD *)(v3 + 40) = (4 * v34) | *(_DWORD *)(v3 + 40) & 0xFFFFFFE3;
  if ( v34 < 2 )
  {
    --CurrentThread->SpecialApcDisable;
    ++*(_DWORD *)(v32 + 676);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  MI_PAGEFILE_WRITE(v3, v3 + 184, v34, ((v4 >> 1) & 1) == 0, -1);
  v37 = *(_DWORD *)(v32 + 832);
  if ( v37 == 512 )
    *(_QWORD *)(v32 + 824) -= *(_QWORD *)(v32 + 824) >> 9;
  else
    *(_DWORD *)(v32 + 832) = v37 + 1;
  *(_QWORD *)(v32 + 824) += v54;
  v38 = v44;
  *(_DWORD *)(v3 + 40) &= ~0x20u;
  *(_QWORD *)(v3 + 176) = (unsigned __int64)v38 << 12;
  if ( v4 < 4 || (int)MiStoreWriteModifiedPages(v3) < 0 )
  {
    __incgsdword(0x2EACu);
    __addgsdword(0x2EA8u, v54);
    MiMapPageFileHash(v1, v3 + 208, 0LL, v38, v54);
    v39 = IoAsynchronousPageWrite(
            *(struct _FILE_OBJECT **)(v1 + 56),
            (struct _MDL *)(v3 + 208),
            (LARGE_INTEGER *)(v3 + 176),
            (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiWriteComplete,
            (void *)v3,
            v34,
            *(_DWORD *)(v1 + 200),
            0,
            0LL,
            (struct _IO_STATUS_BLOCK *)(v3 + 16),
            (IRP **)(v3 + 32));
    if ( (v39 & 0xC0000000) == 0xC0000000 )
    {
      *(_DWORD *)(v3 + 16) = v39;
      *(_QWORD *)(v3 + 24) = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(v3, (int *)(v3 + 16), 0LL, v40);
      __writecr8(CurrentIrql);
    }
  }
LABEL_83:
  result = 1LL;
  if ( (v4 & 1) != 0 )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return result;
}
