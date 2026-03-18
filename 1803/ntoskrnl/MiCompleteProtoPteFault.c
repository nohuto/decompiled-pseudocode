/*
 * XREFs of MiCompleteProtoPteFault @ 0x140019F00
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 * Callees:
 *     PfSnTraceBufferAllocate @ 0x1400065D4 (PfSnTraceBufferAllocate.c)
 *     ExAcquireRundownProtectionEx @ 0x1400066B0 (ExAcquireRundownProtectionEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     MiGetSubsectionDriverProtos @ 0x140048594 (MiGetSubsectionDriverProtos.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14005BAA0 (ObpTraceObjectDereferenceIfActive.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfSnGetFileInformation @ 0x14008E100 (PfSnGetFileInformation.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     PfSnTraceGetLogEntry @ 0x14008E554 (PfSnTraceGetLogEntry.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiSystemImageHasPrivateFixups @ 0x1400B5824 (MiSystemImageHasPrivateFixups.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     ObReferenceObjectExWithTag @ 0x1400EB030 (ObReferenceObjectExWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1401379B4 (MiCheckAndUpdateIoAttribution.c)
 *     MiGetPagingFileOffset @ 0x14013C69C (MiGetPagingFileOffset.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiSetFaultPacketDirectives @ 0x1402620F0 (MiSetFaultPacketDirectives.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  ULONG_PTR v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  char v8; // si
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r14
  ULONG_PTR v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  signed __int64 *v18; // r14
  signed __int64 v19; // rdx
  signed __int64 v20; // rax
  char *v21; // r15
  unsigned int v22; // edx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r12
  _KPROCESS *Process; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r12
  __int64 SharedProtos; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *v39; // rdi
  signed __int64 v40; // rdx
  signed __int64 v41; // rax
  unsigned __int64 v42; // rbx
  unsigned int v43; // edx
  BOOLEAN v44; // r14
  KIRQL v45; // bl
  struct _EX_RUNDOWN_REF *v46; // rdi
  unsigned int v47; // r13d
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  unsigned __int64 v52; // rax
  unsigned int v53; // edx
  struct _KTHREAD *v54; // rax
  unsigned __int64 v55; // r14
  int v56; // r15d
  int v57; // edi
  unsigned __int64 v58; // r12
  unsigned __int64 *v59; // rcx
  _QWORD *v60; // rcx
  __int64 v61; // rdi
  signed __int32 v62; // eax
  char v63; // cc
  signed __int32 v64; // eax
  _QWORD *v65; // r14
  KIRQL v66; // r15
  _QWORD *v67; // rcx
  signed __int32 v68; // eax
  __int64 v69; // r8
  signed __int64 v70; // rax
  signed __int64 v71; // rtt
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r11
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // rcx
  unsigned __int64 v80; // rbx
  unsigned __int64 v81; // r9
  unsigned __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  unsigned __int64 v85; // r9
  __int64 v86; // r10
  __int64 v87; // rbx
  unsigned __int64 *v88; // rdx
  int v89; // eax
  unsigned int v90; // ebx
  __int64 v91; // rcx
  char v92; // al
  char PagePrivilege; // al
  __int64 v94; // r8
  char v95; // al
  int v96; // r12d
  __int64 v97; // r14
  __int64 v98; // r13
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // r14
  int v101; // eax
  int v102; // ecx
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // r10
  __int64 v105; // rax
  unsigned __int64 v106; // rdi
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rdx
  __int64 v109; // rcx
  unsigned __int64 v110; // rcx
  _DWORD *v111; // r12
  ULONG_PTR v112; // r13
  __int64 v113; // rdi
  unsigned __int8 v114; // al
  char v115; // r8
  unsigned __int8 v116; // r14
  __int64 v117; // rax
  unsigned __int64 v118; // rdi
  unsigned __int64 v119; // r13
  unsigned __int64 v120; // r12
  __int64 v121; // rdx
  __int64 HasPrivateFixups; // rax
  unsigned int v123; // r14d
  __int64 v124; // rcx
  ULONG_PTR v125; // r11
  __int64 v126; // rax
  _KPROCESS *v127; // r8
  struct _KTHREAD *v128; // rax
  __int64 Address; // rax
  unsigned __int64 v130; // r11
  int v131; // ecx
  unsigned int v132; // ecx
  char v133; // di
  __int64 v134; // rax
  unsigned int v135; // r9d
  char v137; // r9
  _BYTE *v138; // rcx
  int v139; // eax
  char v140; // [rsp+40h] [rbp-91h]
  unsigned __int64 *v141; // [rsp+48h] [rbp-89h]
  unsigned int v142; // [rsp+50h] [rbp-81h] BYREF
  ULONG_PTR v143; // [rsp+58h] [rbp-79h]
  __int64 ValidPte; // [rsp+60h] [rbp-71h] BYREF
  int v145; // [rsp+68h] [rbp-69h]
  __int64 v146; // [rsp+70h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-59h]
  int v148; // [rsp+80h] [rbp-51h] BYREF
  PVOID Object; // [rsp+88h] [rbp-49h]
  unsigned __int64 v150; // [rsp+90h] [rbp-41h] BYREF
  __int64 PrototypePteDirect; // [rsp+98h] [rbp-39h]
  __int64 v152; // [rsp+A0h] [rbp-31h]
  __int64 v153; // [rsp+A8h] [rbp-29h]
  unsigned __int64 *v154; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v155; // [rsp+B8h] [rbp-19h]
  _DWORD *v156; // [rsp+C8h] [rbp-9h]
  __int64 v157; // [rsp+D0h] [rbp-1h]
  __int64 v158[9]; // [rsp+D8h] [rbp+7h] BYREF
  unsigned __int64 v160; // [rsp+138h] [rbp+67h] BYREF
  __int64 v161; // [rsp+140h] [rbp+6Fh]
  int v162; // [rsp+148h] [rbp+77h]

  v162 = a4;
  v161 = a3;
  v160 = a2;
  v5 = *a1;
  v6 = a1[7];
  BugCheckParameter2 = v5;
  v7 = a2;
  v153 = v6;
  v8 = 0;
  v9 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v141 = (unsigned __int64 *)v9;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)&v160 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v160 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v160, a2, a3, v9)
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v12 )
    {
      v7 = v11 | 0x20;
      v13 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v160 >> 3) & 0x1FF));
      if ( (v13 & 0x20) == 0 )
        v7 = v11;
      if ( (v13 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
    else
    {
      v7 = v160;
    }
  }
  v14 = (v7 >> 12) & 0xFFFFFFFFFLL;
  v152 = v14;
  v15 = 48 * v14 - 0x58000000000LL;
  v143 = v15;
  v16 = *(_QWORD *)(v15 + 16);
  v157 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v15 + 40) >> 40) & 0x3FFLL));
  v156 = (_DWORD *)(v15 + 16);
  v150 = v16;
  if ( !PfSnNumActiveTraces || (v16 & 0x400) == 0 )
    goto LABEL_110;
  PrototypePteDirect = MiGetPrototypePteDirect(v16);
  v17 = *(_QWORD *)PrototypePteDirect;
  v18 = (signed __int64 *)(*(_QWORD *)PrototypePteDirect + 64LL);
  _m_prefetchw(v18);
  v19 = *v18;
  if ( (*v18 & 0xF) != 0 )
  {
    do
    {
      v20 = _InterlockedCompareExchange64(v18, v19 - 1, v19);
      if ( v19 == v20 )
        break;
      v19 = v20;
    }
    while ( (v20 & 0xF) != 0 );
  }
  v21 = (char *)(v19 & 0xFFFFFFFFFFFFFFF0uLL);
  v22 = v19 & 0xF;
  Object = v21;
  if ( v22 > 1 )
  {
LABEL_28:
    if ( v21 )
      goto LABEL_30;
    goto LABEL_29;
  }
  if ( v22 )
  {
    ObReferenceObjectExWithTag((ULONG_PTR)v21);
    _m_prefetchw(v18);
    v23 = *v18;
    while ( (v23 & 0xF) == 0 )
    {
      if ( v21 != (char *)(v23 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v24 = v23;
      v23 = _InterlockedCompareExchange64(v18, v23 + 15, v23);
      if ( v24 == v23 )
        goto LABEL_28;
    }
    ObpTraceObjectDereferenceIfActive(v21 - 48, 15LL, 1953261124LL);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v21 - 6, 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *((_QWORD *)v21 - 5) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v21 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v21 - 48) >> 8)],
          (ULONG_PTR)v21,
          6uLL,
          *((_QWORD *)v21 - 5));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v21, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v21 - 48);
    }
    goto LABEL_28;
  }
LABEL_29:
  v26 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v17 + 72));
  Object = (PVOID)ObFastReferenceObjectLocked(v18);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
  __writecr8(v26);
LABEL_30:
  v27 = *(_QWORD *)(v143 + 8) | 0x8000000000000000uLL;
  if ( (BugCheckParameter2 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1)
    && (Process = KeGetCurrentThread()->ApcState.Process, (v29 = Process[1].ActiveProcessors.Bitmap[2]) != 0)
    && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
  {
    v30 = *(unsigned int *)(v29 + 8);
  }
  else
  {
    v30 = 0xFFFFFFFFLL;
  }
  v31 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
  {
    v32 = *(_QWORD *)(PrototypePteDirect + 8);
    if ( v27 < v32 || v27 >= v32 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
    {
      if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
      {
        SharedProtos = MiGetSharedProtos(*(_QWORD *)PrototypePteDirect, v30, PrototypePteDirect);
        v31 = *(_QWORD *)PrototypePteDirect;
        v33 = (v27 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
      }
      else
      {
        v33 = (v27 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(PrototypePteDirect, v30) + 72) << 9);
      }
    }
    else
    {
      v33 = (v27 << 9) - (v32 << 9);
    }
    v34 = ((unsigned __int64)*(unsigned int *)(PrototypePteDirect + 36) << 9) + (v33 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v36 = *(_QWORD *)(PrototypePteDirect + 8);
    if ( v36 )
      v37 = (__int64)(v27 - v36) >> 3 << 12;
    else
      v37 = 0LL;
    v34 = v37
        + ((*(unsigned int *)(PrototypePteDirect + 36) | ((unsigned __int64)(*(_WORD *)(PrototypePteDirect + 32) & 0xFFC0) << 26)) << 12);
  }
  CurrentThread = KeGetCurrentThread();
  v145 = *(_DWORD *)(v31 + 56) & 0x20;
  v39 = CurrentThread->ApcState.Process;
  _m_prefetchw(&v39[1].ThreadSeed[4]);
  v40 = *(_QWORD *)&v39[1].ThreadSeed[4];
  if ( (v40 & 0xF) != 0 )
  {
    do
    {
      v41 = _InterlockedCompareExchange64((volatile signed __int64 *)&v39[1].ThreadSeed[4], v40 - 1, v40);
      if ( v40 == v41 )
        break;
      v40 = v41;
    }
    while ( (v41 & 0xF) != 0 );
  }
  v42 = v40 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v40 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v43 = v40 & 0xF;
    if ( v43 <= 1 )
    {
      if ( !v43 )
      {
        v44 = 1;
        v45 = KeAcquireSpinLockRaiseToDpc(&qword_1403CD850);
        v46 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)&v39[1].ThreadSeed[4] & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v46 )
          v44 = ExAcquireRundownProtection(v46 + 45);
        KxReleaseSpinLock(&qword_1403CD850);
        __writecr8(v45);
        v47 = 0;
        v42 = 0LL;
        if ( v44 )
          v42 = (unsigned __int64)v46;
LABEL_71:
        if ( v42 )
        {
          if ( ((__int64)CurrentThread[1].Queue & 0x40) == 0 )
          {
            v53 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
            if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
              v53 = 0;
            if ( v53 >= 2 || CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
            {
              v54 = *(struct _KTHREAD **)(v42 + 432);
              if ( !v54 || v54 == CurrentThread && *(_QWORD *)(v42 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
              {
                v55 = *((_QWORD *)Object + 3);
                v155 = v55;
                PfSnGetFileInformation(v42, Object);
                if ( (*(_BYTE *)(v42 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v42 + 352) + 1466LL) == 2 )
                  _InterlockedOr16((volatile signed __int16 *)(v42 + 484), 1u);
                if ( v34 < 0x20000000000LL )
                {
                  v56 = v145;
                  v57 = dword_1403E27D0;
                  v58 = v34 >> 9;
                  LOBYTE(v47) = v145 != 0;
                  if ( dword_1403E27D0 != *(_DWORD *)(v42 + 404) && (int)PfSnTraceGetLogEntry(v42, 1LL, &v154) >= 0 )
                  {
                    v59 = v154;
                    *v154 = *v154 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                    *((_DWORD *)v59 + 2) = v57;
                    *(_DWORD *)(v42 + 404) = v57;
                    *(_QWORD *)(v42 + 408) = v42 + 416;
                  }
                  if ( v56 || (v60 = *(_QWORD **)(v42 + 408), *v60 >> 3 != v58) || v60[1] != v55 )
                  {
                    if ( _InterlockedIncrement((volatile signed __int32 *)(v42 + 344)) <= *(_DWORD *)(v42 + 340) )
                    {
                      v61 = *(_QWORD *)(v42 + 96);
                      v62 = _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 16), 1u);
                      v63 = (v62 + 1 < 0) ^ __OFADD__(1, v62) | (v62 == -1);
                      v64 = v62 + 1;
                      if ( v63 )
                      {
LABEL_103:
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 344), 0xFFFFFFFF);
                      }
                      else
                      {
                        while ( v64 > *(_DWORD *)(v61 + 20) )
                        {
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 16), 0xFFFFFFFF);
                          v65 = PfSnTraceBufferAllocate();
                          if ( v65 )
                          {
                            v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v42 + 128));
                            if ( *(_QWORD *)(v42 + 96) == v61 )
                            {
                              v67 = *(_QWORD **)(v42 + 112);
                              if ( *v67 != v42 + 104 )
                                __fastfail(3u);
                              v65[1] = v67;
                              *v65 = v42 + 104;
                              *v67 = v65;
                              *(_QWORD *)(v42 + 112) = v65;
                              ++*(_DWORD *)(v42 + 120);
                              *(_QWORD *)(v42 + 96) = v65;
                              KxReleaseSpinLock((PKSPIN_LOCK)(v42 + 128));
                              __writecr8(v66);
                            }
                            else
                            {
                              KxReleaseSpinLock((PKSPIN_LOCK)(v42 + 128));
                              __writecr8(v66);
                              ExFreePoolWithTag(v65, 0);
                            }
                            v61 = *(_QWORD *)(v42 + 96);
                            v68 = _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 16), 1u);
                            v63 = (v68 + 1 < 0) ^ __OFADD__(1, v68) | (v68 == -1);
                            v64 = v68 + 1;
                            if ( !v63 )
                              continue;
                          }
                          goto LABEL_103;
                        }
                        v88 = (unsigned __int64 *)(v61 + 16LL * (v64 - 1) + 24);
                        v88[1] = v155;
                        *v88 = v47 | (8 * v58);
                        _InterlockedIncrement((volatile signed __int32 *)(v42 + 332));
                        if ( !v145 )
                          *(_QWORD *)(v42 + 408) = v88;
                      }
                    }
                    else
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 344), 0xFFFFFFFF);
                      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v42 + 400), 3, 0) )
                        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v42 + 368), DelayedWorkQueue);
                    }
                  }
                }
              }
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v42 + 336));
            }
          }
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v42 + 360));
        }
        goto LABEL_105;
      }
      if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v42 + 360), 0xFu) )
      {
        _m_prefetchw(&v39[1].ThreadSeed[4]);
        v48 = *(_QWORD *)&v39[1].ThreadSeed[4];
        while ( (v48 & 0xF) == 0 )
        {
          if ( v42 != (v48 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v49 = v48;
          v48 = _InterlockedCompareExchange64((volatile signed __int64 *)&v39[1].ThreadSeed[4], v48 + 15, v48);
          if ( v49 == v48 )
            goto LABEL_70;
        }
        _m_prefetchw((const void *)(v42 + 360));
        v50 = *(_QWORD *)(v42 + 360);
        if ( (v50 & 1) != 0 )
        {
LABEL_67:
          v52 = v50 & 0xFFFFFFFFFFFFFFFEuLL;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFF1uLL) == 15
            && !_interlockedbittestandreset((volatile signed __int32 *)(v52 + 32), 0) )
          {
            KeSetEvent((PRKEVENT)(v52 + 8), 0, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v51 = v50;
            v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 360), v50 - 30, v50);
            if ( v51 == v50 )
              break;
            if ( (v50 & 1) != 0 )
              goto LABEL_67;
          }
        }
      }
    }
LABEL_70:
    v47 = 0;
    goto LABEL_71;
  }
LABEL_105:
  v69 = *(_QWORD *)PrototypePteDirect;
  _m_prefetchw((const void *)(*(_QWORD *)PrototypePteDirect + 64LL));
  v70 = *(_QWORD *)(v69 + 64);
  v16 = (unsigned __int64)Object ^ v70;
  if ( ((unsigned __int64)Object ^ v70) >= 0xF )
  {
LABEL_108:
    ObDereferenceObjectDeferDelete(Object);
  }
  else
  {
    while ( 1 )
    {
      v71 = v70;
      v70 = _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 64), v70 + 1, v70);
      if ( v71 == v70 )
        break;
      if ( ((unsigned __int64)Object ^ v70) >= 0xF )
        goto LABEL_108;
    }
  }
  v9 = (unsigned __int64)v141;
  v15 = v143;
  v14 = v152;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_110:
  v72 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = 0xFFFFF6FB7DBED000uLL;
  v74 = *(_QWORD *)v72;
  if ( v72 >= 0xFFFFF6FB7DBED000uLL
    && v72 <= v10
    && (unsigned int)MiPteHasShadow(v16, v74, v72, v9)
    && (v74 & 1) != 0
    && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
  {
    v75 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v75 )
    {
      v76 = *(_QWORD *)(v75 + 8 * ((v72 >> 3) & 0x1FF));
      v72 = v74 | 0x20;
      if ( (v76 & 0x20) == 0 )
        v72 = v74;
      v74 = v72;
      if ( (v76 & 0x42) != 0 )
        v74 = v72 | 0x42;
    }
  }
  ValidPte = v74;
  if ( (unsigned __int64)&ValidPte >= v73
    && (unsigned __int64)&ValidPte <= v10
    && (unsigned int)MiPteHasShadow(&ValidPte, v74, v72, v9)
    && (v74 & 1) != 0
    && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
  {
    v72 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v72 )
    {
      v77 = *(_QWORD *)(v72 + 8 * (((unsigned __int64)&ValidPte >> 3) & 0x1FF));
      v72 = v74 | 0x20;
      if ( (v77 & 0x20) == 0 )
        v72 = v74;
      v74 = v72;
      if ( (v77 & 0x42) != 0 )
        v74 = v72 | 0x42;
    }
  }
  v78 = 48 * ((v74 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v148 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v148);
      while ( *(__int64 *)(v78 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v78 + 24), 0x3FuLL) );
    v9 = (unsigned __int64)v141;
    v73 = 0xFFFFF6FB7DBED000uLL;
  }
  v79 = *(_QWORD *)(v78 + 24) ^ (*(_QWORD *)(v78 + 24) ^ (*(_QWORD *)(v78 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v78 + 24) = v79;
  _InterlockedAnd64((volatile signed __int64 *)(v78 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v80 = *(_QWORD *)v9;
  if ( v9 >= v73
    && v9 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v79, 0x3FFFFFFFFFFFFFFFLL, v72, v9)
    && (v80 & 1) != 0
    && ((v80 & 0x20) == 0 || (v80 & 0x42) == 0) )
  {
    v82 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v82 )
    {
      v83 = *(_QWORD *)(v82 + 8 * ((v81 >> 3) & 0x1FF));
      v84 = v80 | 0x20;
      if ( (v83 & 0x20) == 0 )
        v84 = v80;
      v80 = v84;
      if ( (v83 & 0x42) != 0 )
        v80 = v84 | 0x42;
    }
  }
  if ( (unsigned int)MiIsPrototypePteVadLookup(v80) )
  {
    v87 = (v80 >> 5) & 0x1F;
  }
  else
  {
    v89 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v150);
    v90 = v80 & 8;
    v91 = v90;
    if ( v90 )
      v89 = 1;
    LODWORD(v87) = v89;
    v92 = 3;
    if ( !v91 )
      v92 = 1;
    v8 = v92;
    if ( v161 && (v87 & 4) == 0 )
      v161 = 0LL;
  }
  if ( (MiFlags & 0x10000) != 0 && BugCheckParameter2 >= 0xFFFF800000000000uLL && (v87 & 2) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v15);
    if ( (PagePrivilege & 1) != 0 )
    {
      LODWORD(v87) = 3;
      v161 = 0LL;
    }
    else if ( (PagePrivilege & 8) != 0 )
    {
      LODWORD(v87) = 1;
      v161 = 0LL;
    }
    else
    {
      LODWORD(v87) = v87 & 0xFFFFFFFD;
      if ( !(_DWORD)v87 )
        LODWORD(v87) = 1;
    }
    v85 = (unsigned __int64)v141;
    v86 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v94 = *(unsigned __int8 *)(v15 + 34);
  v140 = *(_BYTE *)(v15 + 34);
  v95 = (unsigned __int8)v94 >> 6;
  v96 = v87 & 0xFFFFFFE7;
  if ( (unsigned __int8)v94 >> 6 != 1 )
  {
    if ( v95 )
    {
      if ( v95 == 2 )
        v96 |= 0x18u;
    }
    else
    {
      v96 |= 8u;
    }
  }
  v97 = v14 << 12;
  v98 = v96 & 0x1F;
  v99 = v97 | MmProtectToPteMask[v98] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v85 < 0xFFFFF68000000000uLL || v85 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v106 = v97 | MmProtectToPteMask[v98] & 0xFFFF000000000E7FuLL | 0x121;
  }
  else
  {
    v100 = (__int64)(v85 << 25) >> 16;
    if ( v85 >= 0xFFFFF6FB40000000uLL && v85 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v85 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v99 |= 0x8000000000000000uLL;
      }
      else if ( (v96 & 0x4000000) == 0 )
      {
        v99 &= v86;
      }
      v101 = MiUserPdeOrAbove(v85, 0xFFFFF6FFFFFFFFFFuLL, v94, v85);
      LOBYTE(v94) = v140;
      v85 = (unsigned __int64)v141;
      if ( v101 )
        v99 |= 4uLL;
    }
    if ( v85 <= 0xFFFFF6BFFFFFFF78uLL )
      v99 |= 4uLL;
    if ( v100 >= 0xFFFF800000000000uLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(v100) == 1 )
      {
        v102 = 0;
      }
      else if ( v100 < v104 || v100 > v103 )
      {
        if ( v100 < qword_1403CD100 || (v102 = HIBYTE(word_1403CB7D0), v100 > qword_1403CBB70) )
          v102 = (unsigned __int8)word_1403CB7D0;
      }
      else
      {
        v102 = 0;
      }
    }
    else
    {
      v102 = HIBYTE(word_1403CB7D0);
    }
    v105 = v99 | 0x100;
    if ( !v102 )
      v105 = v99;
    v106 = v105;
  }
  if ( v96 < 0 && (v96 & 5) == 4 )
    v106 |= 0x42uLL;
  v107 = v106 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v96 & 0x40000000) == 0 )
    v107 = v106;
  if ( (v96 & 0x20000000) != 0 )
    v107 ^= ((unsigned __int16)v107 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100;
  v108 = v107 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v96 & 0x8000000) == 0 )
    v108 = v107;
  v109 = v108 | 0x80;
  if ( (v96 & 0x4000000) == 0 )
    v109 = v108;
  v110 = v109 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  ValidPte = v110;
  if ( !v161 || (v87 & 5) == 5 )
  {
    v118 = v150;
  }
  else
  {
    ValidPte = v110 | 0x42;
    if ( (v94 & 0x10) != 0 || (v111 = v156, (*v156 & 0x400LL) != 0) )
    {
      v112 = v143;
    }
    else
    {
      v112 = v143;
      if ( (unsigned int)MiGetPagingFileOffset(v156) )
      {
        v113 = 0LL;
        v114 = MiLockPageInline(v143);
        v115 = *(_BYTE *)(v143 + 34);
        v116 = v114;
        if ( (v115 & 0x10) == 0 && (*v111 & 0x400LL) == 0 )
        {
          if ( (v115 & 8) == 0 )
          {
            v117 = MiCapturePageFileInfoInline(v111, 1LL);
            v115 = *(_BYTE *)(v143 + 34);
            v113 = v117;
          }
          *(_BYTE *)(v143 + 34) = v115 | 0x10;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v112 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v113 )
          MiReleasePageFileInfo(v157, v113, 1LL);
        __writecr8(v116);
      }
    }
    v118 = v150;
    if ( (v150 & 0x400) != 0 && (*(_BYTE *)(v153 + 184) & 7) != 2 )
      MiCheckAndUpdateIoAttribution(v112);
  }
  v119 = v143;
  v120 = 0LL;
  v121 = 0LL;
  HasPrivateFixups = 0LL;
  v123 = 0;
  v146 = 0LL;
  v142 = 0;
  if ( !v162 )
  {
    v124 = *(_QWORD *)(v143 + 8);
    if ( v124 < 0 )
    {
      v125 = BugCheckParameter2;
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
      {
        HasPrivateFixups = MiSystemImageHasPrivateFixups(BugCheckParameter2, &v146, &v142);
LABEL_245:
        LODWORD(v121) = v146;
        goto LABEL_246;
      }
      if ( (v118 & 0x400) != 0 )
      {
        v126 = MiGetPrototypePteDirect(v118);
        v121 = *(_QWORD *)v126;
        HasPrivateFixups = (*(_DWORD *)(*(_QWORD *)v126 + 56LL) >> 5) & 1;
        if ( !(_DWORD)HasPrivateFixups )
          goto LABEL_246;
      }
      else
      {
        v128 = KeGetCurrentThread();
        v127 = v128->ApcState.Process;
        if ( v127[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v128->ApcState.Process, v124 | 0x8000000000000000uLL) )
          goto LABEL_244;
      }
      v142 = 0;
      v146 = 0LL;
      if ( !*(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 352LL) )
        goto LABEL_257;
      Address = MiLocateAddress(v125, v121, v127, v85);
      if ( !Address )
        goto LABEL_257;
      v131 = *(_DWORD *)(Address + 48);
      if ( (v131 & 7) == 2 && (v131 & 0x8000) != 0 )
      {
        v121 = **(_QWORD **)(Address + 72);
        v132 = (v130 >> 12)
             + ((__int64)(*(_QWORD *)(Address + 80) - *(_QWORD *)(v121 + 136)) >> 3)
             - *(_DWORD *)(Address + 24);
        if ( _bittest(*(const signed __int32 **)(Address + 152), v132) )
        {
          HasPrivateFixups = *(_QWORD *)(Address + 136);
          v142 = v132;
          goto LABEL_246;
        }
LABEL_257:
        v133 = 0;
        goto LABEL_258;
      }
LABEL_244:
      HasPrivateFixups = 0LL;
      goto LABEL_245;
    }
  }
LABEL_246:
  v133 = 0;
  if ( HasPrivateFixups )
  {
    v123 = MiPrivateFixup((_DWORD)a1, v121, v142, v119, HasPrivateFixups);
    MiLockAndDecrementShareCount(v119, 0LL);
    if ( v123 == 297 || v123 == -1073741670 )
    {
      MiLockAndDecrementShareCount(v78, 0LL);
      if ( v123 == 297 )
        return (unsigned int)-1073740748;
      return v123;
    }
    if ( (v123 & 0x80000000) != 0 )
      return v123;
    v158[0] = MI_READ_PTE_LOCK_FREE((unsigned __int64)v141);
    v134 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v158);
    ValidPte = MiMakeValidPte(v141, v134, v135);
    v119 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL)
         - 0x58000000000LL;
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v119 + 35) & 8) != 0 )
      v133 = 2;
    LOBYTE(v87) = 0;
    v8 = -2;
  }
LABEL_258:
  v137 = 0;
  if ( (v8 & 1) == 0 )
    v137 = v87;
  v138 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a5 & 1) != 0 )
  {
    if ( *v138 == 5 )
      v120 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (a5 & 1) != 0 && *v138 == 3 )
      v133 |= 1u;
  }
  if ( !(unsigned int)MiAllocateWsle(v153, v141, (_QWORD *)v119, v137, ValidPte, v133, v120) )
  {
    MiLockAndDecrementShareCount(v119, 0LL);
    if ( (v8 & 4) == 0 )
      MiLockAndDecrementShareCount(v78, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v161 )
    return v123;
  if ( (ValidPte & 0x800) != 0 )
    return v123;
  if ( (ValidPte & 0x200) == 0 )
    return v123;
  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
    return v123;
  v139 = MiCopyOnWrite(BugCheckParameter2);
  v123 = v139;
  if ( v139 >= 0 )
    return v123;
  MiSetFaultPacketDirectives(a1, (unsigned int)v139);
  return 3221226548LL;
}
