/*
 * XREFs of MiFlushSectionInternal @ 0x1401187E0
 * Callers:
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiCleanSection @ 0x14015E0C0 (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiWaitForPageWriteCompletion @ 0x140084528 (MiWaitForPageWriteCompletion.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockFlushMdl @ 0x1400B5F10 (MiUnlockFlushMdl.c)
 *     MiIssueSynchronousFlush @ 0x1400B8D58 (MiIssueSynchronousFlush.c)
 *     MiReadyFlushMdlToWrite @ 0x1400B8E08 (MiReadyFlushMdlToWrite.c)
 *     MiExpandFlushMdl @ 0x1400BEDD8 (MiExpandFlushMdl.c)
 *     MiRemoveUnusedSubsection @ 0x1400E3FD8 (MiRemoveUnusedSubsection.c)
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     MiEndingOffset @ 0x140128958 (MiEndingOffset.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiIsRetryIoStatus @ 0x140135210 (MiIsRetryIoStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiIssueAsynchronousFlush @ 0x14025B53C (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14025B704 (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x14025DA0C (MiFlushFileOnlyMdl.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int *a7)
{
  _BYTE *v7; // rsi
  __int64 v8; // rdi
  int v9; // ecx
  unsigned int v10; // edx
  char *PoolWithTag; // rax
  __int64 v12; // r10
  __int64 result; // rax
  char *v14; // rcx
  char *v15; // r8
  char *v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r8
  int v20; // edx
  int *v21; // rax
  int v22; // edi
  bool v23; // sf
  ULONG_PTR v24; // rbx
  ULONG_PTR v25; // rax
  KIRQL v26; // si
  int *v27; // rax
  __int64 v28; // rax
  ULONG_PTR v29; // r8
  __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  ULONG_PTR *v34; // r9
  ULONG_PTR v35; // rcx
  unsigned __int8 v36; // si
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // r11d
  __int64 v40; // rdx
  ULONG_PTR v41; // rsi
  __int64 v42; // rax
  int v43; // r11d
  __int64 v44; // rbx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  char v47; // dl
  char v48; // al
  unsigned int *v49; // rcx
  unsigned int *v50; // rbx
  char v51; // r8
  ULONG_PTR v52; // rdx
  PVOID v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  _DWORD *v56; // r11
  unsigned int v57; // edx
  unsigned int v58; // edx
  int v59; // eax
  volatile LONG *v60; // rcx
  _DWORD *v61; // r11
  unsigned int *v62; // rax
  unsigned __int64 v63; // rcx
  int v64; // edx
  unsigned int v65; // r10d
  char v66; // al
  int v67; // ecx
  int v68; // edx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v71; // ett
  int v72; // ebx
  __int64 v73; // rdx
  int v74; // ebx
  char v75; // al
  unsigned int *v76; // rcx
  _DWORD *v77; // rbx
  char *v78; // rdx
  int v79; // eax
  __int64 v80; // rcx
  _BYTE *v81; // r11
  LARGE_INTEGER *v82; // r8
  unsigned int v83; // ebx
  int v84; // ebx
  _BYTE *v85; // r11
  int v86; // eax
  KIRQL v87; // al
  _QWORD *v88; // r8
  ULONG_PTR *v89; // rbx
  int v90; // eax
  __int64 v91; // rax
  ULONG_PTR v92; // rcx
  __int64 inserted; // rax
  ULONG_PTR v94; // rax
  int v95; // eax
  __int64 v96; // r10
  PVOID v97; // rbx
  __int64 v98; // rsi
  __int64 v99; // rdx
  signed __int64 *v100; // roff
  signed __int64 v101; // rax
  unsigned __int64 v102; // r8
  signed __int64 v103; // rtt
  int *v104; // rcx
  unsigned __int8 v105[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v106; // [rsp+48h] [rbp-B8h]
  int v107; // [rsp+50h] [rbp-B0h]
  PVOID Src; // [rsp+58h] [rbp-A8h]
  int v109; // [rsp+60h] [rbp-A0h]
  unsigned int *v110; // [rsp+68h] [rbp-98h]
  __int64 v111; // [rsp+70h] [rbp-90h]
  int v112; // [rsp+78h] [rbp-88h]
  int *v113; // [rsp+80h] [rbp-80h]
  int v114; // [rsp+88h] [rbp-78h]
  __int64 v115; // [rsp+90h] [rbp-70h]
  __int64 v116; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  int v118; // [rsp+A8h] [rbp-58h]
  signed __int64 v119; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v120; // [rsp+B8h] [rbp-48h]
  PEX_SPIN_LOCK SpinLock; // [rsp+C0h] [rbp-40h]
  char *v122; // [rsp+C8h] [rbp-38h]
  int IoPriorityThread; // [rsp+D0h] [rbp-30h]
  __int64 v124; // [rsp+D8h] [rbp-28h]
  __int64 v125; // [rsp+E0h] [rbp-20h]
  __int64 v126; // [rsp+E8h] [rbp-18h]
  PVOID P; // [rsp+F0h] [rbp-10h]
  PVOID Object; // [rsp+F8h] [rbp-8h]
  __int64 v129; // [rsp+100h] [rbp+0h]
  int v130; // [rsp+108h] [rbp+8h] BYREF
  int v131; // [rsp+10Ch] [rbp+Ch] BYREF
  int v132; // [rsp+110h] [rbp+10h]
  int v133; // [rsp+114h] [rbp+14h]
  __int64 v134; // [rsp+118h] [rbp+18h] BYREF
  __int64 v135; // [rsp+120h] [rbp+20h]
  volatile signed __int64 *v136; // [rsp+128h] [rbp+28h]
  struct _KTHREAD *CurrentThread; // [rsp+130h] [rbp+30h]
  __int64 *v138; // [rsp+138h] [rbp+38h]
  ULONG_PTR v139; // [rsp+140h] [rbp+40h]
  ULONG_PTR v140; // [rsp+148h] [rbp+48h]
  unsigned __int64 v141[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v142[192]; // [rsp+1D0h] [rbp+D0h] BYREF

  v7 = v142;
  v8 = *a3;
  v113 = a7;
  v129 = a2;
  v139 = a1;
  v9 = a6 | 4;
  v124 = a5;
  v126 = a4;
  v138 = a3;
  if ( !a5 )
    v9 = a6;
  Src = v142;
  v115 = v8;
  P = 0LL;
  v10 = v9 & 0xFFFFFFFB;
  v122 = 0LL;
  if ( (*(_DWORD *)(v8 + 56) & 0x40000000) == 0 )
    v10 = v9;
  v112 = v10;
  if ( (v10 & 4) != 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA00uLL, 0x61466D4Du);
    v12 = v124;
    P = PoolWithTag;
    if ( v124 )
    {
      *(_QWORD *)(v124 + 40) = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else if ( !PoolWithTag )
    {
      goto LABEL_12;
    }
    v122 = PoolWithTag;
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
  v129 += 8LL;
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
  v21 = v113;
  v107 = 16;
  v22 = ~(_BYTE)a6 & 2 | 0x10;
  v118 = 0;
  v23 = v112 < 0;
  *v113 = 0;
  *((_QWORD *)v21 + 1) = 0LL;
  if ( !v23 )
    v22 = ~(_BYTE)a6 & 2;
  v24 = v139;
  v25 = (ULONG_PTR)v138;
  *(_QWORD *)v7 = 0LL;
  *((_WORD *)v7 + 5) = 0;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_QWORD *)v7 + 5) = 0LL;
  --*(_WORD *)(v19 + 484);
  v106 = v24;
  v114 = 1;
  v116 = 0LL;
  BugCheckParameter2 = v25;
  SpinLock = (PEX_SPIN_LOCK)(v115 + 72);
  v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v115 + 72));
  if ( !*(_QWORD *)(v115 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v26);
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      if ( v124 )
        *(_QWORD *)(v124 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v115, (unsigned __int64)Object);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v27 = v113;
    *v113 = 0;
    *((_QWORD *)v27 + 1) = 0LL;
    return 0LL;
  }
  v28 = *(_QWORD *)(v115 + 120);
  v135 = 8 * v28;
  if ( 8 * v28 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v28 + 32)) <= 1 )
    __fastfail(0xEu);
  v29 = BugCheckParameter2;
  v125 = 0LL;
  v30 = 0LL;
  while ( 2 )
  {
    v31 = v126;
    while ( 1 )
    {
      if ( v29 == v31 )
      {
        v32 = v129;
      }
      else
      {
        v32 = *(_QWORD *)(v29 + 8) + 8LL * (*(_DWORD *)(v29 + 44) - (*(_DWORD *)(v29 + 52) & 0x3FFFFFFFu));
        v31 = v126;
      }
      v120 = v32;
      if ( !v24 )
      {
        v24 = *(_QWORD *)(v29 + 8);
        v106 = v24;
      }
      if ( *(_DWORD *)(v29 + 104) && *(_QWORD *)(v29 + 8) )
        break;
      v30 += (__int64)(v32 - v24) >> 3 << 12;
      v94 = *(_QWORD *)(v29 + 16);
      v116 = v30;
      if ( !v94 )
      {
        if ( v32 == *(_QWORD *)(v29 + 8) + 8LL * (*(_DWORD *)(v29 + 44) - (*(_DWORD *)(v29 + 52) & 0x3FFFFFFFu)) )
        {
          v95 = MiEndingOffset(v29) & 0xFFF;
          if ( v95 )
            v116 = v96 - (unsigned int)(4096 - v95);
        }
        goto LABEL_200;
      }
      if ( v31 == v29 )
        goto LABEL_200;
      v24 = *(_QWORD *)(v94 + 8);
      v29 = v94;
      v106 = v24;
      BugCheckParameter2 = v94;
    }
    MiIncrementSubsectionViewCount((_QWORD *)v29, 0LL);
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8(v26);
    v140 = v24;
    v35 = 0LL;
    v36 = 17;
    v111 = 0LL;
    v105[0] = 17;
    if ( v24 >= v120 )
      goto LABEL_182;
    while ( 1 )
    {
      v109 = v22;
      if ( (v24 & 0xFFF) != 0 )
      {
        if ( v36 != 17 )
          goto LABEL_48;
      }
      else if ( v36 != 17 )
      {
        MiUnlockProtoPoolPage(v35, v36, v33, (__int64)v34);
      }
      v111 = MiCheckProtoPtePageState(v24, v105);
      v35 = v111;
      if ( v111 )
        break;
      v24 = (v24 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v106 = v24;
      v110 = (unsigned int *)((char *)Src + 40);
      if ( !*((_DWORD *)Src + 10) )
      {
        v36 = v105[0];
        goto LABEL_175;
      }
LABEL_78:
      v36 = v105[0];
      if ( v105[0] != 17 )
      {
        MiUnlockProtoPoolPage(v35, v105[0], v33, (__int64)v34);
        v36 = 17;
        v105[0] = 17;
      }
LABEL_80:
      v50 = v110;
      v22 &= ~4u;
      v51 = v112;
      v52 = BugCheckParameter2;
      v53 = Src;
      *v110 <<= 12;
      v54 = MiReadyFlushMdlToWrite((__int64)v53, v52, v51);
      if ( v122 )
      {
        v55 = MiIssueAsynchronousFlush(
                (_DWORD)Object,
                (_DWORD)v122,
                (_DWORD)P,
                v124,
                v54,
                ((unsigned int)v112 >> 2) & 4,
                IoPriorityThread,
                v135);
        v122 = (char *)v55;
        if ( v55 )
        {
          v56 = *(_DWORD **)(v55 + 72);
          v107 = 16;
          Src = v56;
          v56[10] = 0;
          goto LABEL_173;
        }
        v24 = v120;
        v22 |= 1u;
        v106 = v120;
        v114 = 0;
        goto LABEL_180;
      }
      v119 = *(_QWORD *)(48LL * *((_QWORD *)Src + 6) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
      if ( (*(_DWORD *)(v115 + 56) & 0x40000000) != 0 )
        MiFlushFileOnlyMdl(0x8000000000000000uLL, Src, v54, v113);
      else
        MiIssueSynchronousFlush(
          (struct _FILE_OBJECT *)Object,
          (__int64)Src,
          v54,
          ((unsigned int)v112 >> 2) & 4,
          v135,
          v113);
      MiUnlockFlushMdl((PMDL)Src, v115);
      v80 = (unsigned int)*v113;
      if ( (int)v80 >= 0 )
      {
        v81 = Src;
        v118 = 0;
        if ( Src != v142 )
        {
          v107 = 16;
          ExFreePoolWithTag(Src, 0);
          v81 = v142;
          Src = v142;
        }
        *((_DWORD *)v81 + 10) = 0;
        goto LABEL_173;
      }
      v106 = v119;
      if ( (_DWORD)v80 == -1073741740 && (v22 & 0x10) != 0 )
      {
        v82 = (LARGE_INTEGER *)&Mi10Milliseconds;
LABEL_166:
        KeDelayExecutionThread(0, 0, v82);
        *v113 = 0;
        v84 = 1;
        goto LABEL_168;
      }
      v83 = *v50;
      if ( (unsigned int)MiIsRetryIoStatus(v80, v83) )
      {
        if ( (--v118 & 0x1F) != 0 )
        {
          v82 = (LARGE_INTEGER *)&Mi30Milliseconds;
          goto LABEL_166;
        }
        if ( v107 != 1 && v83 > 0x1000 )
        {
          v107 = 1;
          *v113 = 0;
          v84 = 1;
          goto LABEL_168;
        }
      }
      v84 = 0;
LABEL_168:
      v85 = Src;
      v114 = v84;
      if ( Src != v142 )
      {
        v86 = v107;
        if ( v107 != 1 )
          v86 = 16;
        v107 = v86;
        ExFreePoolWithTag(Src, 0);
        v85 = v142;
        Src = v142;
      }
      *((_DWORD *)v85 + 10) = 0;
      if ( !v84 )
      {
        v24 = v106;
        goto LABEL_180;
      }
LABEL_173:
      v24 = v106;
LABEL_174:
      v35 = v111;
LABEL_175:
      if ( v24 >= v120 )
        goto LABEL_180;
    }
    while ( 1 )
    {
LABEL_48:
      while ( 1 )
      {
        v37 = MI_READ_PTE_LOCK_FREE(v24);
        v134 = v37;
        if ( (v37 & 1) != 0 )
          break;
        if ( (v37 & 0x400) != 0 || (v37 & 0x800) == 0 )
          goto LABEL_143;
        if ( (unsigned int)MiInvalidPteConforms(v37) )
        {
          v38 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v134);
          goto LABEL_54;
        }
      }
      v38 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v134) >> 12) & 0xFFFFFFFFFLL;
LABEL_54:
      if ( v38 <= qword_1403CB780 )
      {
        v40 = 48 * v38;
        v119 = 48 * v38;
        if ( !MmPhysicalMemoryBlock || (*(_QWORD *)(v40 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
          break;
      }
    }
    v41 = v40 - 0x58000000000LL;
    v130 = v39;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v130);
      while ( *(__int64 *)(v41 + 24) < 0 );
    }
    v42 = MI_READ_PTE_LOCK_FREE(v24);
    if ( v42 != v134 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_48;
    }
    if ( !v41 )
    {
LABEL_143:
      v110 = (unsigned int *)((char *)Src + 40);
      v57 = *((_DWORD *)Src + 10);
LABEL_144:
      v22 = v109 | 4;
      if ( !v57 )
        v22 = v109;
      goto LABEL_146;
    }
    v44 = *(_QWORD *)v24;
    v33 = v106;
    if ( v106 >= 0xFFFFF6FB7DBED000uLL
      && v106 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v44 & 1) != 0
      && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
    {
      v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 8 * ((v33 >> 3) & 0x1FF));
        v47 = v44 | 0x20;
        if ( (v46 & 0x20) == 0 )
          v47 = v44;
        LOBYTE(v44) = v47;
        if ( (v46 & 0x42) != 0 )
          LOBYTE(v44) = v47 | 0x42;
      }
    }
    v48 = *(_BYTE *)(v41 + 34);
    v49 = (unsigned int *)((char *)Src + 40);
    v110 = (unsigned int *)((char *)Src + 40);
    if ( (v48 & 8) == 0 )
    {
      v110 = (unsigned int *)((char *)Src + 40);
      if ( (v48 & 0x10) == 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v57 = *v49;
        v24 = v33;
        goto LABEL_144;
      }
      v58 = *v49;
      v110 = (unsigned int *)((char *)Src + 40);
      if ( (v48 & 0x20) != 0 )
      {
        if ( v58 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v110 = v49;
          goto LABEL_77;
        }
        v131 = 1;
        memset(v141, 0, 0x78uLL);
        MiFillPteHierarchy(0LL, &v141[3]);
        memset(v141, 0, 24);
        LOBYTE(v141[10]) = 0;
        MiObtainProtoReference(v111, 1);
        MiWaitForCollidedFaultComplete(v141, v41, v111, v105[0], &v131);
        v36 = 17;
        v105[0] = 17;
        goto LABEL_173;
      }
      v59 = v43;
      if ( !v58 )
      {
        v109 = 2;
        ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
        v60 = SpinLock;
        ++*(_DWORD *)(v115 + 76);
        ExReleaseSpinLockExclusiveFromDpcLevel(v60);
        v61 = Src;
        v62 = v110;
        *(_QWORD *)Src = 0LL;
        *v62 = 0;
        v61[11] = v107;
        v59 = v109;
        *((_WORD *)v61 + 5) = 0;
        *((_QWORD *)v61 + 4) = 0LL;
      }
      v63 = *(_QWORD *)(v41 + 40);
      v64 = v59 | 4;
      v65 = 4;
      if ( (v44 & 1) == 0 )
        v64 = v59;
      v133 = v64;
      v34 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * ((v63 >> 40) & 0x3FF));
      v66 = v64;
      v67 = (*(_DWORD *)(v41 + 16) >> 10) & 1;
      v136 = (volatile signed __int64 *)v34;
      v68 = v67 | 2;
      if ( (v66 & 2) == 0 )
        v68 = v67;
      v132 = v68;
      v33 = (unsigned int)-((v68 & 2) != 0);
      if ( (v68 & 2) == 0 )
        v65 = 8;
      v109 = v65;
      if ( v34 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        if ( CachedResidentAvailable )
        {
          while ( CachedResidentAvailable != -1 )
          {
            v71 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v71 == CachedResidentAvailable )
            {
              v72 = 1;
              goto LABEL_106;
            }
            if ( !CachedResidentAvailable )
              break;
          }
        }
      }
      v72 = MiChargePartitionResidentAvailable(v34, 1LL, v33, v34);
      if ( v72 )
      {
        v34 = (ULONG_PTR *)v136;
        v65 = v109;
LABEL_106:
        if ( (v132 & 1) == 0 || (unsigned int)MiChargeCommit(v34, 1LL, v65, v34) )
        {
          if ( (v133 & 4) == 0 )
          {
            MiUnlinkPageFromList(v41);
            *(_QWORD *)(v41 + 24) &= 0xC000000000000000uLL;
          }
          v75 = *(_BYTE *)(v41 + 34);
          ++*(_WORD *)(v41 + 32);
          v75 |= 8u;
          *(_BYTE *)(v41 + 34) = v75;
          *(_BYTE *)(v41 + 34) = v75 & 0xEF;
          if ( (*(_DWORD *)(v41 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v41, 1, 0LL) & 0x10) != 0 )
          {
            *(_BYTE *)(v41 + 34) |= 0x20u;
            MiClearPfnImageVerified(v41, 28);
          }
LABEL_111:
          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v72 )
          {
            v76 = v110;
            v34 = (ULONG_PTR *)Src;
            *((_QWORD *)Src + *v110 + 6) = v119 / 48;
            v33 = *((unsigned int *)v34 + 11);
            v57 = *v76 + 1;
            *v76 = v57;
            if ( v72 == 3 )
            {
              if ( v57 >= 0x10 || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0 )
              {
                v74 = 2;
                goto LABEL_127;
              }
              v76 = v110;
            }
            if ( v57 != (_DWORD)v33 )
            {
              v24 = v106;
              v110 = v76;
LABEL_146:
              v24 += 8LL;
              v106 = v24;
              if ( (v22 & 4) != 0 || v24 == v120 && v57 )
                goto LABEL_77;
              v36 = v105[0];
              goto LABEL_174;
            }
            v74 = 1;
          }
          else
          {
            v74 = 3;
          }
LABEL_127:
          MiUnlockProtoPoolPage(v111, v105[0], v33, (__int64)v34);
          v36 = 17;
          v105[0] = 17;
          if ( v74 == 3 )
            goto LABEL_80;
          if ( v74 == 2 )
          {
            v106 += 8LL;
            goto LABEL_80;
          }
          if ( v107 == 1 || (v119 = v106 + 8, v106 + 8 >= v120) )
          {
            v106 += 8LL;
            goto LABEL_80;
          }
          v77 = (_DWORD *)MiExpandFlushMdl((unsigned int *)Src, (unsigned int)((__int64)(v120 - v106) >> 3) + v107 - 1);
          if ( !v77 )
          {
            v107 = *((_DWORD *)Src + 11);
            v106 = v119;
            goto LABEL_80;
          }
          v78 = v122;
          if ( Src != v142 && (!v122 || Src != v122 + 80) )
          {
            ExFreePoolWithTag(Src, 0);
            v78 = v122;
          }
          Src = v77;
          if ( v78 )
            *((_QWORD *)v78 + 9) = v77;
          v79 = v77[11];
          v24 = v119;
          v106 = v119;
          v107 = v79;
          goto LABEL_174;
        }
        if ( v136 == (volatile signed __int64 *)&MiSystemPartition )
          MiReturnResidentAvailable(1LL, v73);
        else
          _InterlockedExchangeAdd64(v136 + 888, 1uLL);
      }
      v72 = 0;
      goto LABEL_111;
    }
    if ( *v49 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_77:
      v35 = v111;
      goto LABEL_78;
    }
    if ( (v109 & 2) != 0 )
    {
      MiWaitForPageWriteCompletion(v41, v115, v111, v105[0]);
      v36 = 17;
      v105[0] = 17;
      goto LABEL_173;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v24 = v120;
    v22 |= 8u;
    v36 = v105[0];
    v106 = v120;
LABEL_180:
    if ( v36 != 17 )
      MiUnlockProtoPoolPage(v111, v36, v33, (__int64)v34);
LABEL_182:
    v116 += (__int64)(v24 - v140) >> 3 << 12;
    v87 = ExAcquireSpinLockExclusive(SpinLock);
    v88 = (_QWORD *)BugCheckParameter2;
    v26 = v87;
    v89 = (ULONG_PTR *)(BugCheckParameter2 + 16);
    if ( !*(_QWORD *)(BugCheckParameter2 + 16)
      && v106 == *(_QWORD *)(BugCheckParameter2 + 8)
               + 8LL * (*(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu)) )
    {
      v90 = MiEndingOffset(BugCheckParameter2) & 0xFFF;
      if ( v90 )
        v116 -= (unsigned int)(4096 - v90);
    }
    v91 = MiDecrementSubsectionViewCount(v88, 0LL, (__int64)v88);
    v92 = BugCheckParameter2;
    v125 += v91;
    if ( !*(_QWORD *)(BugCheckParameter2 + 96) && (*(_BYTE *)(BugCheckParameter2 + 34) & 1) == 0 )
    {
      inserted = MiInsertUnusedSubsection(BugCheckParameter2);
      v125 += inserted;
      v92 = BugCheckParameter2;
    }
    if ( (v22 & 8) == 0 )
    {
      if ( v114 )
      {
        if ( v92 != v126 )
        {
          v29 = *v89;
          BugCheckParameter2 = v29;
          if ( v29 )
          {
            v24 = *(_QWORD *)(v29 + 8);
            v30 = v116;
            v106 = v24;
            continue;
          }
        }
      }
    }
    break;
  }
LABEL_200:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  __writecr8(v26);
  v97 = P;
  v98 = v124;
  if ( P && !v124 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(P) < 0 )
      LOBYTE(v22) = v22 | 1;
    ExFreePoolWithTag(v97, 0);
  }
  v99 = v115;
  v100 = (signed __int64 *)(v115 + 64);
  _m_prefetchw((const void *)(v115 + 64));
  v101 = *v100;
  v102 = (unsigned __int64)Object;
  if ( ((unsigned __int64)Object ^ *v100) >= 0xF )
  {
LABEL_208:
    ObDereferenceObjectDeferDelete((PVOID)v102);
    v99 = v115;
  }
  else
  {
    while ( 1 )
    {
      v103 = v101;
      v101 = _InterlockedCompareExchange64((volatile signed __int64 *)(v99 + 64), v101 + 1, v101);
      if ( v103 == v101 )
        break;
      if ( (v102 ^ v101) >= 0xF )
        goto LABEL_208;
    }
  }
  if ( v125 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v99 + 60) & 0x3FF)), 1LL, v125);
  if ( v135 )
    IoDiskIoAttributionDereference(v135);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( (v22 & 1) != 0 )
    return MiFlushSectionInternal(v139, (int)v129 - 8, (_DWORD)v138, v126, v98, v112 & 0xFFFFFFFB, (__int64)v113);
  v104 = v113;
  if ( (v22 & 8) != 0 )
  {
    result = 3221226547LL;
    *v113 = -1073740749;
  }
  else
  {
    result = (unsigned int)*v113;
  }
  *((_QWORD *)v104 + 1) = v116;
  return result;
}
