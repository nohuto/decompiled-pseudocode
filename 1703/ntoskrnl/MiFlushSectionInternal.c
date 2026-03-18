/*
 * XREFs of MiFlushSectionInternal @ 0x140094CA0
 * Callers:
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     MiCleanSection @ 0x140149074 (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14000D798 (MiChargePartitionResidentAvailable.c)
 *     MiUnlockFlushMdl @ 0x14001505C (MiUnlockFlushMdl.c)
 *     MiIsRetryIoStatus @ 0x140015264 (MiIsRetryIoStatus.c)
 *     MiInsertUnusedSubsection @ 0x140016540 (MiInsertUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x1400179B0 (MiWaitForPageWriteCompletion.c)
 *     MiReadyFlushMdlToWrite @ 0x140025C70 (MiReadyFlushMdlToWrite.c)
 *     MiIssueSynchronousFlush @ 0x140025D14 (MiIssueSynchronousFlush.c)
 *     MiExpandFlushMdl @ 0x14002BAD0 (MiExpandFlushMdl.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSubsection @ 0x140097D88 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiEndingOffset @ 0x1400CDDC0 (MiEndingOffset.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiCheckProtoPtePageState @ 0x14010B1D8 (MiCheckProtoPtePageState.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiIssueAsynchronousFlush @ 0x140216484 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14021664C (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x140218B04 (MiFlushFileOnlyMdl.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  int v7; // edi
  int v8; // ecx
  __int64 v9; // rsi
  _BYTE *v10; // rbx
  char *PoolWithTag; // rax
  char *v13; // rcx
  char *v14; // r8
  char *v15; // rdx
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // r8
  int v19; // edx
  unsigned int v20; // edi
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  KIRQL v23; // si
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // r10d
  __int64 v32; // rsi
  __int64 v33; // rax
  char v34; // bl
  __int64 v35; // r10
  char v36; // al
  struct _MDL *v37; // rcx
  char v38; // dl
  ULONG_PTR *v39; // r9
  char v40; // al
  __int64 v41; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v44; // ett
  int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r8
  int v49; // ebx
  unsigned int v50; // edx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rbx
  char *v54; // rdx
  int v55; // eax
  unsigned __int64 v56; // rbx
  NTSTATUS v57; // ecx
  struct _MDL *v58; // rcx
  LARGE_INTEGER *v59; // r8
  unsigned int ByteCount; // ebx
  int v61; // ebx
  struct _MDL *v62; // rcx
  int v63; // eax
  KIRQL v64; // al
  __int64 v65; // r8
  __int64 *v66; // rbx
  __int16 v67; // ax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // r10
  struct _MDL *Src; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v75; // [rsp+50h] [rbp-B0h]
  int ByteOffset; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  char v78; // [rsp+68h] [rbp-98h]
  int v79; // [rsp+78h] [rbp-88h]
  __int64 v80; // [rsp+80h] [rbp-80h]
  __int64 v81; // [rsp+88h] [rbp-78h]
  int v82; // [rsp+90h] [rbp-70h]
  __int64 v83; // [rsp+98h] [rbp-68h]
  unsigned __int64 v84; // [rsp+A0h] [rbp-60h]
  char *v85; // [rsp+A8h] [rbp-58h]
  volatile LONG *SpinLock; // [rsp+B0h] [rbp-50h]
  char v87; // [rsp+B8h] [rbp-48h]
  unsigned int v88; // [rsp+BCh] [rbp-44h]
  int IoPriorityThread; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+D0h] [rbp-30h]
  char *P; // [rsp+E0h] [rbp-20h]
  __int64 v93; // [rsp+E8h] [rbp-18h]
  int v94; // [rsp+F0h] [rbp-10h] BYREF
  int v95; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v96; // [rsp+F8h] [rbp-8h]
  __int64 v97; // [rsp+100h] [rbp+0h] BYREF
  __int64 v98; // [rsp+108h] [rbp+8h]
  ULONG_PTR *v99; // [rsp+110h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  __int64 *v101; // [rsp+120h] [rbp+20h]
  ULONG_PTR v102; // [rsp+128h] [rbp+28h]
  unsigned __int64 v103; // [rsp+130h] [rbp+30h]
  __int64 v104; // [rsp+138h] [rbp+38h]
  _BYTE v105[192]; // [rsp+140h] [rbp+40h] BYREF

  v102 = a1;
  v7 = 0;
  v8 = a6;
  v96 = a2;
  if ( (a6 & 2) == 0 )
    v7 = 2;
  v104 = a2;
  v101 = a3;
  if ( a5 )
  {
    v8 = a6 | 4;
    a6 |= 4u;
  }
  v9 = *a3;
  v10 = v105;
  P = 0LL;
  v85 = 0LL;
  Src = (struct _MDL *)v105;
  v83 = *a3;
  if ( (*(_DWORD *)(*a3 + 56) & 0x40000000) != 0 )
  {
    v8 &= ~4u;
    a6 = v8;
  }
  if ( (v8 & 4) == 0 )
    goto LABEL_14;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA00uLL, 0x61466D4Du);
  P = PoolWithTag;
  if ( a5 )
  {
    *(_QWORD *)(a5 + 40) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    goto LABEL_12;
  }
  if ( PoolWithTag )
  {
LABEL_12:
    v85 = PoolWithTag;
    v10 = PoolWithTag + 80;
    v13 = PoolWithTag + 49;
    Src = (struct _MDL *)(PoolWithTag + 80);
    v14 = PoolWithTag + 2112;
    v15 = PoolWithTag + 48;
    v16 = 8LL;
    do
    {
      *(_WORD *)(v13 - 1) = 0;
      v17 = v13 + 7;
      v13[1] = 6;
      v14 += 8;
      *(_DWORD *)(v13 + 3) = 0;
      *(_QWORD *)(v13 + 15) = v13 + 7;
      v13 += 264;
      *v17 = v17;
      *(_QWORD *)(v13 - 241) = v15 + 32;
      *(_DWORD *)(v13 - 313) = 0;
      *(_QWORD *)(v13 - 297) = 0LL;
      *(_QWORD *)(v13 - 273) = a5;
      *(_QWORD *)(v13 - 281) = v9;
      *((_QWORD *)v14 - 1) = v15;
      v15 += 264;
      --v16;
    }
    while ( v16 );
  }
LABEL_14:
  v96 += 8LL;
  v93 = MiReferenceControlAreaFile(v9);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  v19 = IoPriorityThread;
  if ( IoPriorityThread < 2 && (*(_DWORD *)(v18 + 116) & 0x400) == 0 && *(_BYTE *)(v18 + 562) != 1 )
  {
    if ( KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink != (struct _LIST_ENTRY *)2 )
      v19 = 2;
    IoPriorityThread = v19;
  }
  if ( a6 < 0 )
    v7 |= 0x10u;
  v20 = v7 & 0xFFFFFFF3;
  ByteOffset = 16;
  v82 = 0;
  v79 = 1;
  *a7 = 0;
  *((_QWORD *)a7 + 1) = 0LL;
  v21 = (__int64)v101;
  *(_QWORD *)v10 = 0LL;
  *((_WORD *)v10 + 5) = 0;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  v22 = v102;
  --*(_WORD *)(v18 + 484);
  v75 = v22;
  v80 = 0LL;
  v81 = v21;
  SpinLock = (volatile LONG *)(v9 + 72);
  v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
  if ( !*(_QWORD *)(v83 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v23);
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      if ( a5 )
        *(_QWORD *)(a5 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v83, v93);
    KeLeaveCriticalRegionThread(CurrentThread);
    *a7 = 0;
    *((_QWORD *)a7 + 1) = 0LL;
    return 0LL;
  }
  v24 = *(_QWORD *)(v83 + 120) & 0x1FFFFFFFFFFFFFFFLL;
  v98 = 8 * v24;
  if ( 8 * v24 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v24 + 32)) <= 1 )
    __fastfail(0xEu);
  v25 = v81;
  v90 = 0LL;
  v26 = 0LL;
  while ( 2 )
  {
    v27 = a4;
    while ( 1 )
    {
      if ( v25 == v27 )
      {
        v28 = v96;
      }
      else
      {
        v28 = *(_QWORD *)(v25 + 8) + 8LL * *(unsigned int *)(v25 + 44);
        v27 = a4;
      }
      v84 = v28;
      if ( !v22 )
      {
        v22 = *(_QWORD *)(v25 + 8);
        v75 = v22;
      }
      if ( *(_DWORD *)(v25 + 104) && *(_QWORD *)(v25 + 8) )
        break;
      v26 += (__int64)(v28 - v22) >> 3 << 12;
      v71 = *(_QWORD *)(v25 + 16);
      v80 = v26;
      if ( !v71 )
      {
        if ( v28 == *(_QWORD *)(v25 + 8) + 8LL * *(unsigned int *)(v25 + 44) )
        {
          v72 = MiEndingOffset(v25) & 0xFFF;
          if ( v72 )
            v80 = v73 - (unsigned int)(4096 - v72);
        }
        goto LABEL_191;
      }
      if ( v27 == v25 )
        goto LABEL_191;
      v22 = *(_QWORD *)(v71 + 8);
      v25 = *(_QWORD *)(v25 + 16);
      v75 = v22;
      v81 = v71;
    }
    MiIncrementSubsectionViewCount(v25, 0LL);
    if ( (*(_BYTE *)(v81 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(v81);
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v23);
    v103 = v22;
    if ( v22 >= v84 )
      goto LABEL_173;
    do
    {
      v77 = MiCheckProtoPtePageState(v22);
      if ( !v77 )
      {
        v22 = (v22 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        v75 = v22;
        if ( !Src->ByteCount )
          continue;
LABEL_121:
        v20 &= ~4u;
        Src->ByteCount <<= 12;
        v51 = MiReadyFlushMdlToWrite((__int64)Src, v81, a6);
        if ( v85 )
        {
          v52 = MiIssueAsynchronousFlush(
                  v93,
                  (_DWORD)v85,
                  (_DWORD)P,
                  a5,
                  v51,
                  ((unsigned __int8)a6 >> 2) & 4,
                  IoPriorityThread,
                  v98);
          v85 = (char *)v52;
          if ( !v52 )
          {
            v22 = v84;
            v20 |= 1u;
            v75 = v84;
            v79 = 0;
            break;
          }
          ByteOffset = 16;
          Src = *(struct _MDL **)(v52 + 72);
          Src->ByteCount = 0;
LABEL_167:
          v22 = v75;
          continue;
        }
        v56 = *(_QWORD *)(48 * (__int64)Src[1].Next - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
        if ( (*(_DWORD *)(v83 + 56) & 0x40000000) != 0 )
          MiFlushFileOnlyMdl(6 * (__int64)Src[1].Next, Src, v51, a7);
        else
          MiIssueSynchronousFlush(v93, (int)Src, v51, ((unsigned __int8)a6 >> 2) & 4, v98, (NTSTATUS *)a7);
        MiUnlockFlushMdl(Src, v83, (__int64)a7);
        v57 = *a7;
        if ( (*a7 & 0x80000000) == 0 )
        {
          v58 = Src;
          v82 = 0;
          if ( Src != (struct _MDL *)v105 )
          {
            ByteOffset = 16;
            ExFreePoolWithTag(Src, 0);
            v58 = (struct _MDL *)v105;
            Src = (struct _MDL *)v105;
          }
          v58->ByteCount = 0;
          goto LABEL_167;
        }
        v75 = v56;
        if ( v57 == -1073741740 && (v20 & 0x10) != 0 )
        {
          v59 = (LARGE_INTEGER *)&Mi10Milliseconds;
LABEL_159:
          KeDelayExecutionThread(0, 0, v59);
          goto LABEL_160;
        }
        ByteCount = Src->ByteCount;
        if ( MiIsRetryIoStatus(v57, ByteCount) )
        {
          if ( (--v82 & 0x1F) != 0 )
          {
            v59 = (LARGE_INTEGER *)&Mi30Milliseconds;
            goto LABEL_159;
          }
          if ( ByteOffset != 1 && ByteCount > 0x1000 )
          {
            ByteOffset = 1;
LABEL_160:
            *a7 = 0;
            v61 = 1;
            goto LABEL_162;
          }
        }
        v61 = 0;
LABEL_162:
        v62 = Src;
        v79 = v61;
        if ( Src != (struct _MDL *)v105 )
        {
          v63 = ByteOffset;
          if ( ByteOffset != 1 )
            v63 = 16;
          ByteOffset = v63;
          ExFreePoolWithTag(Src, 0);
          v62 = (struct _MDL *)v105;
          Src = (struct _MDL *)v105;
        }
        v62->ByteCount = 0;
        if ( !v61 )
        {
          v22 = v75;
          break;
        }
        goto LABEL_167;
      }
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            v29 = MI_READ_PTE_LOCK_FREE(v22);
            v97 = v29;
            if ( (v29 & 1) != 0 )
              break;
            if ( (v29 & 0x400) != 0 || (v29 & 0x800) == 0 )
              goto LABEL_137;
            if ( (unsigned int)MiInvalidPteConforms(v29) )
            {
              v30 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v97);
              goto LABEL_51;
            }
          }
          v30 = MI_GET_PAGE_FRAME_FROM_PTE(&v97);
LABEL_51:
          ;
        }
        while ( v30 > qword_14036C290
             || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v30 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
        v32 = 48 * v30 - 0x58000000000LL;
        v94 = v31;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v94);
            while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
          v22 = v75;
        }
        v33 = MI_READ_PTE_LOCK_FREE(v22);
        if ( v33 == v97 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v32 )
      {
LABEL_137:
        v37 = Src;
        if ( Src->ByteCount )
LABEL_138:
          v20 |= 4u;
        goto LABEL_139;
      }
      v34 = MI_READ_PTE_LOCK_FREE(v22);
      v36 = *(_BYTE *)(v32 + 34);
      if ( (v36 & 8) != 0 )
      {
        if ( Src->ByteCount )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_121;
        }
        if ( (v20 & 2) != 0 )
        {
          MiWaitForPageWriteCompletion(v32, v83, v77, 17);
          goto LABEL_167;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v22 = v84;
        v20 |= 8u;
        v75 = v84;
        break;
      }
      if ( (v36 & 0x10) != 0 )
      {
        if ( (v36 & 0x20) != 0 )
        {
          if ( Src->ByteCount )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_121;
          }
          v95 = 1;
          MiObtainProtoReference(v77, 1LL);
          MiWaitForCollidedFaultComplete(v32, v77, 0, 0, 17, 17, (__int64)&v95);
          goto LABEL_167;
        }
        v38 = v35;
        v78 = v35;
        if ( !Src->ByteCount )
        {
          v78 = 2;
          ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
          ++*(_DWORD *)(v83 + 76);
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          v35 = 0LL;
          v38 = 2;
          Src->Next = 0LL;
          Src->MdlFlags = 0;
          Src->StartVa = 0LL;
          Src->ByteCount = 0;
          Src->ByteOffset = ByteOffset;
        }
        if ( (v34 & 1) != 0 )
        {
          v38 |= 4u;
          v78 = v38;
        }
        v39 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v32 + 40) >> 40) & 0x3FFLL));
        v99 = v39;
        if ( (v38 & 1) != 0 )
        {
          v45 = 1;
        }
        else
        {
          v40 = v35;
          if ( (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
            v40 = 1;
          v87 = v40;
          if ( (v38 & 2) != 0 )
          {
            v40 |= 2u;
            v87 = v40;
          }
          if ( (v40 & 2) != 0 )
          {
            v88 = 4;
            v41 = 0xFFFFFFFFLL;
          }
          else
          {
            v88 = 8;
            v41 = v35;
          }
          if ( v39 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
            if ( CachedResidentAvailable )
            {
              while ( CachedResidentAvailable != -1 )
              {
                v44 = CachedResidentAvailable;
                CachedResidentAvailable = _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            CachedResidentAvailable - 1,
                                            CachedResidentAvailable);
                if ( v44 == CachedResidentAvailable )
                {
                  v45 = 1;
                  goto LABEL_93;
                }
                if ( !CachedResidentAvailable )
                  break;
              }
            }
          }
          v45 = MiChargePartitionResidentAvailable((__int64)v39, 1uLL, v41);
          if ( !v45 )
            goto LABEL_97;
          v39 = v99;
LABEL_93:
          if ( (v87 & 1) != 0 && !(unsigned int)MiChargeCommit(v39, 1LL, v88) )
          {
            if ( v99 == &MiSystemPartition )
            {
              MiReturnResidentAvailable(1LL, v46, v47);
LABEL_97:
              v45 = 0;
              goto LABEL_109;
            }
            _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 728, 1uLL);
            v45 = 0;
LABEL_109:
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v45 )
            {
              v37 = Src;
              *((_QWORD *)&Src[1].Next + Src->ByteCount++) = (v32 + 0x58000000000LL) / 48;
              v50 = Src->ByteCount;
              if ( v45 == 3 )
              {
                if ( v50 >= 0x10 || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0 )
                {
                  v49 = 2;
                  goto LABEL_118;
                }
                v37 = Src;
              }
              if ( v50 != Src->ByteOffset )
                goto LABEL_136;
              v49 = 1;
            }
            else
            {
              v49 = 3;
            }
LABEL_118:
            MiUnlockProtoPoolPage(v77, 17LL);
            if ( v49 == 3 )
              goto LABEL_121;
            if ( v49 == 2 )
            {
              v75 += 8LL;
              goto LABEL_121;
            }
            if ( ByteOffset == 1 || v75 + 8 >= v84 )
            {
              v75 += 8LL;
              goto LABEL_121;
            }
            v53 = MiExpandFlushMdl((unsigned int *)Src, (unsigned int)((__int64)(v84 - v75) >> 3) + ByteOffset - 1);
            if ( !v53 )
            {
              v75 += 8LL;
              ByteOffset = Src->ByteOffset;
              goto LABEL_121;
            }
            v54 = v85;
            if ( Src != (struct _MDL *)v105 && (!v85 || Src != (struct _MDL *)(v85 + 80)) )
            {
              ExFreePoolWithTag(Src, 0);
              v54 = v85;
            }
            Src = (struct _MDL *)v53;
            if ( v54 )
              *((_QWORD *)v54 + 9) = v53;
            v55 = *(_DWORD *)(v53 + 44);
            v22 = v75 + 8;
            ByteOffset = v55;
            v75 += 8LL;
            continue;
          }
          v38 = v78;
        }
        if ( (v38 & 4) == 0 )
        {
          MiUnlinkPageFromList(v32);
          v38 = v78;
          *(_QWORD *)(v32 + 24) &= 0xC000000000000000uLL;
        }
        ++*(_WORD *)(v32 + 32);
        *(_BYTE *)(v32 + 34) |= 8u;
        if ( (v38 & 8) == 0 )
          *(_BYTE *)(v32 + 34) &= ~0x10u;
        if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v32, 1LL, 0LL) & 0x10) != 0 )
        {
          *(_BYTE *)(v32 + 34) |= 0x20u;
          MiClearPfnImageVerified(v32, 28LL, v48);
        }
        goto LABEL_109;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v37 = Src;
      if ( Src->ByteCount )
      {
        v22 = v75;
        goto LABEL_138;
      }
LABEL_136:
      v22 = v75;
LABEL_139:
      v22 += 8LL;
      v75 = v22;
      if ( (v20 & 4) != 0 || v22 == v84 && v37->ByteCount )
        goto LABEL_121;
    }
    while ( v22 < v84 );
LABEL_173:
    v80 += (__int64)(v22 - v103) >> 3 << 12;
    v64 = ExAcquireSpinLockExclusive(SpinLock);
    v65 = v81;
    v23 = v64;
    v66 = (__int64 *)(v81 + 16);
    if ( !*(_QWORD *)(v81 + 16) && v75 == *(_QWORD *)(v81 + 8) + 8LL * *(unsigned int *)(v81 + 44) )
    {
      v67 = MiEndingOffset(v81);
      if ( (v67 & 0xFFF) != 0 )
        v80 -= 4096 - (v67 & 0xFFFu);
    }
    v68 = MiDecrementSubsectionViewCount(v65, 0LL);
    v70 = v81;
    v90 += v68;
    if ( !*(_QWORD *)(v81 + 96) && (*(_BYTE *)(v81 + 34) & 1) == 0 )
    {
      v90 += MiInsertUnusedSubsection((_DWORD *)v81, v69);
      v70 = v81;
    }
    if ( (v20 & 8) == 0 )
    {
      if ( v79 )
      {
        if ( v70 != a4 )
        {
          v25 = *v66;
          v81 = *v66;
          if ( *v66 )
          {
            v22 = *(_QWORD *)(v25 + 8);
            v26 = v80;
            v75 = v22;
            continue;
          }
        }
      }
    }
    break;
  }
LABEL_191:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v23);
  if ( P && !a5 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(P) < 0 )
      LOBYTE(v20) = v20 | 1;
    ExFreePoolWithTag(P, 0);
  }
  MiDereferenceControlAreaFile(v83, v93);
  if ( v90 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v83 + 60) & 0x3FF)), 1LL, v90);
  if ( v98 )
    IoDiskIoAttributionDereference(v98);
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( (v20 & 1) != 0 )
    return MiFlushSectionInternal(v102, v104, (_DWORD)v101, a4, a5, a6 & 0xFFFFFFFB, (__int64)a7);
  if ( (v20 & 8) != 0 )
    *a7 = -1073740749;
  *((_QWORD *)a7 + 1) = v80;
  return *a7;
}
