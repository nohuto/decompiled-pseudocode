/*
 * XREFs of MiFlushSectionInternal @ 0x140038530
 * Callers:
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     MiCleanSection @ 0x14010A810 (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x14001F358 (MiRemoveUnusedSubsection.c)
 *     MiObtainProtoReference @ 0x140027120 (MiObtainProtoReference.c)
 *     MiReadyFlushMdlToWrite @ 0x14002813C (MiReadyFlushMdlToWrite.c)
 *     MiEndingOffset @ 0x14002B178 (MiEndingOffset.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiUnlockFlushMdl @ 0x1400A5008 (MiUnlockFlushMdl.c)
 *     MiInsertUnusedSubsection @ 0x1400B779C (MiInsertUnusedSubsection.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiIssueSynchronousFlush @ 0x14011A188 (MiIssueSynchronousFlush.c)
 *     MiExpandFlushMdl @ 0x140122B1C (MiExpandFlushMdl.c)
 *     MiIsRetryIoStatus @ 0x140124FC0 (MiIsRetryIoStatus.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiWaitForPageWriteCompletion @ 0x1401585BC (MiWaitForPageWriteCompletion.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiIssueAsynchronousFlush @ 0x14021FC34 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14021FDFC (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x140222DFC (MiFlushFileOnlyMdl.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  _BYTE *v7; // rsi
  __int64 v8; // rdi
  int v9; // ecx
  unsigned int v10; // edx
  char *PoolWithTag; // rax
  __int64 v12; // r10
  char *v14; // rcx
  char *v15; // r8
  char *v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r8
  int v20; // edx
  _DWORD *v21; // rax
  int v22; // edi
  bool v23; // sf
  unsigned __int64 v24; // rbx
  ULONG_PTR v25; // rax
  KIRQL v26; // si
  _DWORD *v27; // rax
  __int64 v28; // rax
  ULONG_PTR v29; // r8
  __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rdx
  ULONG_PTR *v33; // r9
  unsigned __int64 v34; // r8
  __int64 v35; // rbx
  unsigned __int8 v36; // si
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 PteShadow; // rax
  unsigned __int64 v41; // rax
  int v42; // r10d
  int v43; // eax
  ULONG_PTR v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rbx
  char v47; // al
  char v48; // al
  _DWORD *v49; // rcx
  int v50; // eax
  volatile LONG *v51; // rcx
  _WORD *v52; // rax
  int v53; // ecx
  int v54; // edx
  __int64 v55; // rcx
  char v56; // al
  unsigned int v57; // r10d
  int v58; // edx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v61; // ett
  int v62; // ebx
  int v63; // ebx
  unsigned int v64; // edx
  int v65; // r8d
  PVOID v66; // rcx
  unsigned int v67; // ebx
  char v68; // r8
  ULONG_PTR v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rax
  _DWORD *v72; // rcx
  unsigned __int64 v73; // rsi
  _DWORD *v74; // rbx
  unsigned __int64 v75; // rbx
  __int64 v76; // r9
  __int64 v77; // rcx
  _BYTE *v78; // rcx
  LARGE_INTEGER *v79; // r8
  unsigned int v80; // ebx
  _BYTE *v81; // rcx
  int v82; // ebx
  KIRQL v83; // al
  ULONG_PTR v84; // r8
  ULONG_PTR *v85; // rbx
  __int16 v86; // ax
  __int64 v87; // rax
  ULONG_PTR v88; // rcx
  __int64 inserted; // rax
  ULONG_PTR v90; // rax
  int v91; // eax
  __int64 v92; // r10
  PVOID v93; // rbx
  __int64 v94; // rsi
  __int64 v95; // rdx
  signed __int64 *v96; // roff
  signed __int64 v97; // rax
  unsigned __int64 v98; // r8
  signed __int64 v99; // rtt
  unsigned int *v100; // rax
  unsigned __int8 v101[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v102; // [rsp+48h] [rbp-B8h]
  PVOID Src; // [rsp+50h] [rbp-B0h]
  int v104; // [rsp+58h] [rbp-A8h]
  __int64 v105; // [rsp+60h] [rbp-A0h]
  int v106; // [rsp+68h] [rbp-98h]
  int v107; // [rsp+6Ch] [rbp-94h]
  _DWORD *v108; // [rsp+70h] [rbp-90h]
  int v109; // [rsp+78h] [rbp-88h]
  __int64 v110; // [rsp+80h] [rbp-80h]
  __int64 v111; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h]
  int v113; // [rsp+98h] [rbp-68h]
  int v114; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v115; // [rsp+A0h] [rbp-60h]
  PEX_SPIN_LOCK SpinLock; // [rsp+A8h] [rbp-58h]
  int IoPriorityThread; // [rsp+B0h] [rbp-50h]
  char *v118; // [rsp+B8h] [rbp-48h]
  __int64 v119; // [rsp+C0h] [rbp-40h]
  __int64 v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+D8h] [rbp-28h]
  PVOID Object; // [rsp+E0h] [rbp-20h]
  __int64 v124; // [rsp+E8h] [rbp-18h]
  int v125; // [rsp+F0h] [rbp-10h] BYREF
  int v126; // [rsp+F4h] [rbp-Ch] BYREF
  int v127; // [rsp+F8h] [rbp-8h]
  __int64 v128; // [rsp+100h] [rbp+0h]
  __int64 v129; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR *v130; // [rsp+110h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  _QWORD *v132; // [rsp+120h] [rbp+20h]
  unsigned __int64 v133; // [rsp+128h] [rbp+28h]
  __int64 v134; // [rsp+130h] [rbp+30h]
  unsigned __int64 v135; // [rsp+138h] [rbp+38h]
  _BYTE v136[192]; // [rsp+140h] [rbp+40h] BYREF

  v7 = v136;
  v8 = *a3;
  v108 = a7;
  v124 = a2;
  v133 = a1;
  v9 = a6 | 4;
  v119 = a5;
  v121 = a4;
  v132 = a3;
  if ( !a5 )
    v9 = a6;
  Src = v136;
  v110 = v8;
  P = 0LL;
  v10 = v9 & 0xFFFFFFFB;
  v118 = 0LL;
  if ( (*(_DWORD *)(v8 + 56) & 0x40000000) == 0 )
    v10 = v9;
  v109 = v10;
  if ( (v10 & 4) == 0 )
    goto LABEL_12;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA00uLL, 0x61466D4Du);
  v12 = v119;
  P = PoolWithTag;
  if ( v119 )
  {
    *(_QWORD *)(v119 + 40) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    goto LABEL_10;
  }
  if ( PoolWithTag )
  {
LABEL_10:
    v118 = PoolWithTag;
    v7 = PoolWithTag + 80;
    v14 = PoolWithTag + 49;
    Src = PoolWithTag + 80;
    v15 = PoolWithTag + 2112;
    v16 = PoolWithTag + 48;
    v17 = 8LL;
    do
    {
      *(_WORD *)(v14 - 1) = 0;
      v18 = v14 + 7;
      v14[1] = 6;
      v15 += 8;
      *(_DWORD *)(v14 + 3) = 0;
      *(_QWORD *)(v14 + 15) = v14 + 7;
      v14 += 264;
      *v18 = v18;
      *(_QWORD *)(v14 - 241) = v16 + 32;
      *(_DWORD *)(v14 - 313) = 0;
      *(_QWORD *)(v14 - 297) = 0LL;
      *(_QWORD *)(v14 - 273) = v12;
      *(_QWORD *)(v14 - 281) = v8;
      *((_QWORD *)v15 - 1) = v16;
      v16 += 264;
      --v17;
    }
    while ( v17 );
  }
LABEL_12:
  v124 += 8LL;
  Object = (PVOID)MiReferenceControlAreaFile(v8);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  v20 = IoPriorityThread;
  if ( IoPriorityThread < 2 && (*(_DWORD *)(v19 + 116) & 0x400) == 0 && *(_BYTE *)(v19 + 562) != 1 )
  {
    if ( KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
      v20 = 2;
    IoPriorityThread = v20;
  }
  v21 = v108;
  v104 = 16;
  v22 = ~(_BYTE)a6 & 2 | 0x10;
  v113 = 0;
  v23 = v109 < 0;
  *v108 = 0;
  *((_QWORD *)v21 + 1) = 0LL;
  if ( !v23 )
    v22 = ~(_BYTE)a6 & 2;
  v24 = v133;
  v25 = (ULONG_PTR)v132;
  *(_QWORD *)v7 = 0LL;
  *((_WORD *)v7 + 5) = 0;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_QWORD *)v7 + 5) = 0LL;
  --*(_WORD *)(v19 + 484);
  v102 = v24;
  v106 = 1;
  v111 = 0LL;
  BugCheckParameter2 = v25;
  SpinLock = (PEX_SPIN_LOCK)(v110 + 72);
  v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v110 + 72));
  if ( !*(_QWORD *)(v110 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v26);
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      if ( v119 )
        *(_QWORD *)(v119 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v110, Object);
    KeLeaveCriticalRegionThread(CurrentThread);
    v27 = v108;
    *v108 = 0;
    *((_QWORD *)v27 + 1) = 0LL;
    return 0LL;
  }
  v28 = *(_QWORD *)(v110 + 120);
  v128 = 8 * v28;
  if ( 8 * v28 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v28 + 32)) <= 1 )
    __fastfail(0xEu);
  v29 = BugCheckParameter2;
  v120 = 0LL;
  v30 = 0LL;
  while ( 2 )
  {
    v31 = v121;
    while ( 1 )
    {
      if ( v29 == v31 )
      {
        v32 = v124;
      }
      else
      {
        v32 = *(_QWORD *)(v29 + 8) + 8LL * *(unsigned int *)(v29 + 44);
        v31 = v121;
      }
      v115 = v32;
      if ( !v24 )
      {
        v24 = *(_QWORD *)(v29 + 8);
        v102 = v24;
      }
      if ( *(_DWORD *)(v29 + 104) && *(_QWORD *)(v29 + 8) )
        break;
      v30 += (__int64)(v32 - v24) >> 3 << 12;
      v90 = *(_QWORD *)(v29 + 16);
      v111 = v30;
      if ( !v90 )
      {
        if ( v32 == *(_QWORD *)(v29 + 8) + 8LL * *(unsigned int *)(v29 + 44) )
        {
          v91 = MiEndingOffset(v29) & 0xFFF;
          if ( v91 )
            v111 = v92 - (unsigned int)(4096 - v91);
        }
        goto LABEL_207;
      }
      if ( v31 == v29 )
        goto LABEL_207;
      v24 = *(_QWORD *)(v90 + 8);
      v29 = v90;
      v102 = v24;
      BugCheckParameter2 = v90;
    }
    MiIncrementSubsectionViewCount(v29);
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v26);
    v34 = v102;
    v35 = 0LL;
    v36 = 17;
    v105 = 0LL;
    v101[0] = 17;
    v135 = v102;
    if ( v102 >= v115 )
      goto LABEL_189;
    while ( 1 )
    {
      v107 = v22;
      v114 = v22;
      if ( (v34 & 0xFFF) != 0 )
      {
        if ( v36 != 17 )
          break;
      }
      else if ( v36 != 17 )
      {
        MiUnlockProtoPoolPage(v35, v36);
        v34 = v102;
      }
      v37 = MiCheckProtoPtePageState(v34, v101, v34, (__int64)v33);
      v34 = v102;
      v35 = v37;
      v105 = v37;
      if ( v37 )
        break;
      v34 = (v102 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v102 = v34;
      if ( !*((_DWORD *)Src + 10) )
      {
        v36 = v101[0];
        goto LABEL_182;
      }
LABEL_78:
      v36 = v101[0];
      if ( v101[0] != 17 )
      {
        MiUnlockProtoPoolPage(v35, v101[0]);
        v36 = 17;
        v101[0] = 17;
      }
LABEL_133:
      v22 &= ~4u;
      v66 = Src;
      v67 = v109;
      v68 = v109;
      v69 = BugCheckParameter2;
      *((_DWORD *)Src + 10) <<= 12;
      v70 = MiReadyFlushMdlToWrite((__int64)v66, v69, v68);
      if ( !v118 )
      {
        v75 = *(_QWORD *)(48LL * *((_QWORD *)Src + 6) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
        if ( (*(_DWORD *)(v110 + 56) & 0x40000000) != 0 )
        {
          MiFlushFileOnlyMdl(6LL * *((_QWORD *)Src + 6), Src, v70, v108);
        }
        else
        {
          v76 = (unsigned int)v109 >> 2;
          LOBYTE(v76) = v76 & 4;
          MiIssueSynchronousFlush(Object, Src, v70, v76, v128, v108);
        }
        MiUnlockFlushMdl((PMDL)Src);
        v77 = (unsigned int)*v108;
        if ( (int)v77 >= 0 )
        {
          v78 = Src;
          v113 = 0;
          if ( Src != v136 )
          {
            v104 = 16;
            ExFreePoolWithTag(Src, 0);
            v78 = v136;
            Src = v136;
          }
          *((_DWORD *)v78 + 10) = 0;
          goto LABEL_180;
        }
        v102 = v75;
        if ( (_DWORD)v77 == -1073741740 && (v22 & 0x10) != 0 )
        {
          v79 = (LARGE_INTEGER *)&Mi10Milliseconds;
          goto LABEL_172;
        }
        v80 = *((_DWORD *)Src + 10);
        if ( !(unsigned int)MiIsRetryIoStatus(v77, v80) )
          goto LABEL_174;
        if ( (--v113 & 0x1F) != 0 )
        {
          v79 = (LARGE_INTEGER *)&Mi30Milliseconds;
LABEL_172:
          KeDelayExecutionThread(0, 0, v79);
LABEL_173:
          v106 = 1;
          *v108 = 0;
        }
        else
        {
          if ( v104 != 1 && v80 > 0x1000 )
          {
            v104 = 1;
            goto LABEL_173;
          }
LABEL_174:
          v106 = 0;
        }
        v81 = Src;
        if ( Src != v136 )
        {
          v82 = v104;
          if ( v104 != 1 )
            v82 = 16;
          v104 = v82;
          ExFreePoolWithTag(Src, 0);
          v81 = v136;
          Src = v136;
        }
        *((_DWORD *)v81 + 10) = 0;
        if ( !v106 )
        {
          v34 = v102;
          goto LABEL_187;
        }
        goto LABEL_180;
      }
      v71 = MiIssueAsynchronousFlush(
              (_DWORD)Object,
              (_DWORD)v118,
              (_DWORD)P,
              v119,
              v70,
              (v67 >> 2) & 4,
              IoPriorityThread,
              v128);
      v118 = (char *)v71;
      if ( !v71 )
      {
        v34 = v115;
        v22 |= 1u;
        v102 = v115;
        v106 = 0;
        goto LABEL_187;
      }
      v72 = *(_DWORD **)(v71 + 72);
      v104 = 16;
      Src = v72;
      v72[10] = 0;
LABEL_180:
      v35 = v105;
LABEL_181:
      v34 = v102;
LABEL_182:
      if ( v34 >= v115 )
        goto LABEL_187;
    }
    v38 = 0xFFFFF6FB7DBED000uLL;
    do
    {
LABEL_49:
      v39 = *(_QWORD *)v34;
      if ( v34 >= 0xFFFFF6FB7DBED000uLL && v34 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(v34, *(_QWORD *)v34);
        v34 = v102;
        v39 = PteShadow;
      }
      v129 = v39;
      if ( (v39 & 1) != 0 )
      {
        v41 = MI_GET_PAGE_FRAME_FROM_PTE(&v129);
        goto LABEL_58;
      }
      if ( (v39 & 0x400) != 0 || (v39 & 0x800) == 0 )
        goto LABEL_148;
      v43 = MiInvalidPteConforms(v39, v38, v34, v33);
      v34 = v102;
      v38 = 0xFFFFF6FB7DBED000uLL;
    }
    while ( !v43 );
    v41 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v129);
LABEL_58:
    v33 = (ULONG_PTR *)v41;
    v34 = v102;
    v38 = 0xFFFFF6FB7DBED000uLL;
    if ( v41 > qword_1403885E0
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v41 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      goto LABEL_49;
    }
    v134 = 48 * v41;
    v44 = 48 * v41 - 0x58000000000LL;
    v125 = v42;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v125);
        while ( *(__int64 *)(v44 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) );
      v42 = 0;
    }
    v34 = v102;
    v38 = 0xFFFFF6FB7DBED000uLL;
    v45 = *(_QWORD *)v102;
    v33 = (ULONG_PTR *)0xFFFFF6FB7DBED7F8LL;
    if ( v102 >= 0xFFFFF6FB7DBED000uLL && v102 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v45 = MiReadPteShadow(v102, *(_QWORD *)v102);
      v34 = v102;
      v38 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( v45 != v39 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_49;
    }
    if ( !v44 )
    {
LABEL_148:
      v49 = Src;
      v22 |= 4u;
      if ( !*((_DWORD *)Src + 10) )
        v22 = v114;
      goto LABEL_152;
    }
    v46 = *(_QWORD *)v34;
    if ( v34 >= 0xFFFFF6FB7DBED000uLL && v34 <= (unsigned __int64)v33 )
    {
      v47 = MiReadPteShadow(v34, *(_QWORD *)v34);
      v34 = v102;
      LOBYTE(v46) = v47;
    }
    v48 = *(_BYTE *)(v44 + 34);
    if ( (v48 & 8) == 0 )
    {
      if ( (v48 & 0x10) == 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v49 = Src;
        v22 |= 4u;
        if ( !*((_DWORD *)Src + 10) )
          v22 = v107;
        goto LABEL_152;
      }
      if ( (v48 & 0x20) != 0 )
      {
        v35 = v105;
        if ( *((_DWORD *)Src + 10) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_78;
        }
        v126 = 1;
        MiObtainProtoReference(v105, 1);
        MiWaitForCollidedFaultComplete(v44, v35, 0, 0, 17, v101[0], (__int64)&v126);
        v36 = 17;
        v101[0] = 17;
        goto LABEL_181;
      }
      v50 = v42;
      if ( !*((_DWORD *)Src + 10) )
      {
        v107 = 2;
        ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
        v51 = SpinLock;
        ++*(_DWORD *)(v110 + 76);
        ExReleaseSpinLockExclusiveFromDpcLevel(v51);
        v52 = Src;
        LOBYTE(v42) = 0;
        v53 = v104;
        *(_QWORD *)Src = 0LL;
        v52[5] = 0;
        *((_QWORD *)v52 + 4) = 0LL;
        *((_DWORD *)v52 + 10) = 0;
        *((_DWORD *)v52 + 11) = v53;
        v50 = v107;
      }
      v54 = v50 | 4;
      if ( (v46 & 1) == 0 )
        v54 = v50;
      v55 = (*(_QWORD *)(v44 + 40) >> 40) & 0x3FFLL;
      v114 = v54;
      v33 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v55);
      v130 = v33;
      if ( (_BYTE)v42 )
      {
        v62 = 1;
      }
      else
      {
        v56 = v54;
        v57 = 4;
        v58 = (*(_DWORD *)(v44 + 16) >> 10) & 1 | 2;
        if ( (v56 & 2) == 0 )
          v58 = (*(_DWORD *)(v44 + 16) >> 10) & 1;
        v127 = v58;
        if ( (v58 & 2) == 0 )
          v57 = 8;
        v107 = v57;
        if ( v33 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          if ( CachedResidentAvailable )
          {
            while ( CachedResidentAvailable != -1 )
            {
              v61 = CachedResidentAvailable;
              CachedResidentAvailable = _InterlockedCompareExchange(
                                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                          CachedResidentAvailable - 1,
                                          CachedResidentAvailable);
              if ( v61 == CachedResidentAvailable )
              {
                v62 = 1;
                goto LABEL_106;
              }
              if ( !CachedResidentAvailable )
                break;
            }
          }
        }
        v62 = MiChargePartitionResidentAvailable(v33);
        if ( !v62 )
          goto LABEL_110;
        v33 = v130;
        v57 = v107;
LABEL_106:
        if ( (v127 & 1) != 0 && !(unsigned int)MiChargeCommit(v33, 1LL, v57) )
        {
          if ( v130 == &MiSystemPartition )
          {
            MiReturnResidentAvailable(1LL);
LABEL_110:
            v62 = 0;
            goto LABEL_120;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)v130 + 752, 1uLL);
          v62 = 0;
LABEL_120:
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v62 )
          {
            v63 = 3;
            goto LABEL_129;
          }
          v49 = Src;
          *((_QWORD *)Src + *((unsigned int *)Src + 10) + 6) = v134 / 48;
          v64 = ++v49[10];
          v65 = v49[11];
          if ( v62 == 3 )
          {
            if ( v64 >= 0x10 || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0 )
            {
              v63 = 2;
              goto LABEL_129;
            }
            v49 = Src;
          }
          if ( v64 != v65 )
          {
            v34 = v102;
LABEL_152:
            v34 += 8LL;
            v102 = v34;
            if ( (v22 & 4) != 0 || v34 == v115 && v49[10] )
              goto LABEL_77;
            v36 = v101[0];
            v35 = v105;
            goto LABEL_182;
          }
          v63 = 1;
LABEL_129:
          MiUnlockProtoPoolPage(v105, v101[0]);
          v101[0] = 17;
          if ( v63 != 3 )
          {
            if ( v63 == 2 )
            {
              v102 += 8LL;
            }
            else if ( v104 == 1 || (v73 = v102 + 8, v102 + 8 >= v115) )
            {
              v102 += 8LL;
            }
            else
            {
              v74 = (_DWORD *)MiExpandFlushMdl(Src);
              if ( v74 )
              {
                if ( Src != v136 && (!v118 || Src != v118 + 80) )
                  ExFreePoolWithTag(Src, 0);
                Src = v74;
                if ( v118 )
                  *((_QWORD *)v118 + 9) = v74;
                v34 = v73;
                v104 = v74[11];
                v35 = v105;
                v102 = v73;
                v36 = v101[0];
                goto LABEL_182;
              }
              v102 = v73;
              v104 = *((_DWORD *)Src + 11);
            }
          }
          v36 = v101[0];
          goto LABEL_133;
        }
        LOBYTE(v54) = v114;
      }
      if ( (v54 & 4) == 0 )
      {
        MiUnlinkPageFromList(v44);
        *(_QWORD *)(v44 + 24) &= 0xC000000000000000uLL;
      }
      ++*(_WORD *)(v44 + 32);
      *(_BYTE *)(v44 + 34) |= 8u;
      *(_BYTE *)(v44 + 34) &= ~0x10u;
      if ( (*(_DWORD *)(v44 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v44, 1LL, 0LL) & 0x10) != 0 )
      {
        *(_BYTE *)(v44 + 34) |= 0x20u;
        MiClearPfnImageVerified(v44, 28LL);
      }
      goto LABEL_120;
    }
    if ( *((_DWORD *)Src + 10) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_77:
      v35 = v105;
      goto LABEL_78;
    }
    if ( (v22 & 2) != 0 )
    {
      v35 = v105;
      MiWaitForPageWriteCompletion(v44, v110, v105, v101[0]);
      v36 = 17;
      v101[0] = 17;
      goto LABEL_181;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v34 = v115;
    v22 |= 8u;
    v102 = v115;
LABEL_187:
    if ( v101[0] != 17 )
    {
      MiUnlockProtoPoolPage(v105, v101[0]);
      v34 = v102;
    }
LABEL_189:
    v111 += (__int64)(v34 - v135) >> 3 << 12;
    v83 = ExAcquireSpinLockExclusive(SpinLock);
    v84 = BugCheckParameter2;
    v26 = v83;
    v85 = (ULONG_PTR *)(BugCheckParameter2 + 16);
    if ( !*(_QWORD *)(BugCheckParameter2 + 16)
      && v102 == *(_QWORD *)(BugCheckParameter2 + 8) + 8LL * *(unsigned int *)(BugCheckParameter2 + 44) )
    {
      v86 = MiEndingOffset(BugCheckParameter2);
      if ( (v86 & 0xFFF) != 0 )
        v111 -= 4096 - (v86 & 0xFFFu);
    }
    v87 = MiDecrementSubsectionViewCount(v84);
    v88 = BugCheckParameter2;
    v120 += v87;
    if ( !*(_QWORD *)(BugCheckParameter2 + 96) && (*(_BYTE *)(BugCheckParameter2 + 34) & 1) == 0 )
    {
      inserted = MiInsertUnusedSubsection(BugCheckParameter2);
      v120 += inserted;
      v88 = BugCheckParameter2;
    }
    if ( (v22 & 8) == 0 )
    {
      if ( v106 )
      {
        if ( v88 != v121 )
        {
          v29 = *v85;
          BugCheckParameter2 = v29;
          if ( v29 )
          {
            v24 = *(_QWORD *)(v29 + 8);
            v30 = v111;
            v102 = v24;
            continue;
          }
        }
      }
    }
    break;
  }
LABEL_207:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v26);
  v93 = P;
  v94 = v119;
  if ( P && !v119 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(P) < 0 )
      LOBYTE(v22) = v22 | 1;
    ExFreePoolWithTag(v93, 0);
  }
  v95 = v110;
  v96 = (signed __int64 *)(v110 + 64);
  _m_prefetchw((const void *)(v110 + 64));
  v97 = *v96;
  v98 = (unsigned __int64)Object;
  if ( ((unsigned __int64)Object ^ *v96) >= 0xF )
  {
LABEL_215:
    ObDereferenceObjectDeferDelete((PVOID)v98);
    v95 = v110;
  }
  else
  {
    while ( 1 )
    {
      v99 = v97;
      v97 = _InterlockedCompareExchange64((volatile signed __int64 *)(v95 + 64), v97 + 1, v97);
      if ( v99 == v97 )
        break;
      if ( (v98 ^ v97) >= 0xF )
        goto LABEL_215;
    }
  }
  if ( v120 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v95 + 60) & 0x3FF)), 1LL, v120);
  if ( v128 )
    IoDiskIoAttributionDereference(v128);
  KeLeaveCriticalRegionThread(CurrentThread);
  v100 = v108;
  if ( (v22 & 1) != 0 )
    return MiFlushSectionInternal(v133, (int)v124 - 8, (_DWORD)v132, v121, v94, v109 & 0xFFFFFFFB, (__int64)v108);
  if ( (v22 & 8) != 0 )
    *v108 = -1073740749;
  *((_QWORD *)v100 + 1) = v111;
  return *v100;
}
