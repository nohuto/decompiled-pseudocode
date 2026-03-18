/*
 * XREFs of MiCompleteProtoPteFault @ 0x140045530
 * Callers:
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 * Callees:
 *     PfSnTraceBufferAllocate @ 0x1400106D0 (PfSnTraceBufferAllocate.c)
 *     PfSnGetFileInformation @ 0x140012BC0 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140012EB8 (PfSnTraceGetLogEntry.c)
 *     MiMakeTransitionPteValid @ 0x14002C750 (MiMakeTransitionPteValid.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     MiSystemImageHasPrivateFixups @ 0x140064EF0 (MiSystemImageHasPrivateFixups.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiIsAddressGlobal @ 0x140079510 (MiIsAddressGlobal.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiGetSubsectionDriverProtos @ 0x1400B6F28 (MiGetSubsectionDriverProtos.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     ExAcquireRundownProtectionEx @ 0x1400FA410 (ExAcquireRundownProtectionEx.c)
 *     MiGetPagingFileOffset @ 0x14010C6B8 (MiGetPagingFileOffset.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140129D90 (MiCheckAndUpdateIoAttribution.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiGetSharedProtos @ 0x14022DECC (MiGetSharedProtos.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 MiCompleteProtoPteFault(__int64 a1, unsigned __int8 a2, unsigned __int64 a3, ...)
{
  unsigned __int64 v3; // rsi
  char v4; // r14
  signed __int64 *v5; // r8
  __int64 *v6; // r9
  __int64 v7; // r15
  int v8; // r10d
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *PrototypePteDirect; // r13
  __int64 v13; // rdi
  signed __int64 v14; // rdx
  signed __int64 v15; // rax
  signed __int64 v16; // r12
  unsigned int v17; // edx
  ULONG_PTR v18; // r12
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r15
  _KPROCESS *Process; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *v34; // rdi
  signed __int64 v35; // rdx
  signed __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned int v38; // edx
  BOOLEAN v39; // si
  KIRQL v40; // bl
  struct _EX_RUNDOWN_REF *v41; // rdi
  signed __int64 v42; // rax
  signed __int64 v43; // rtt
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  unsigned __int64 v46; // rax
  unsigned int v47; // edx
  struct _KTHREAD *v48; // rax
  unsigned __int64 v49; // rsi
  int v50; // r13d
  int v51; // edi
  unsigned __int64 v52; // r15
  unsigned __int64 *v53; // rcx
  _QWORD *v54; // rcx
  __int64 v55; // rdi
  signed __int32 v56; // eax
  char v57; // cc
  signed __int32 v58; // eax
  _QWORD *v59; // rsi
  KIRQL v60; // r13
  _QWORD *v61; // rcx
  signed __int32 v62; // eax
  signed __int64 v63; // rax
  signed __int64 v64; // rtt
  __int64 *v65; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  __int64 *v69; // r9
  unsigned __int64 v70; // r11
  int v71; // r10d
  __int64 v72; // r13
  unsigned __int64 v73; // rdi
  unsigned __int64 v74; // r9
  __int64 v75; // r10
  __int64 v76; // rdi
  char PagePrivilege; // al
  unsigned __int64 *v78; // rdx
  int v79; // eax
  int v80; // edi
  bool v81; // zf
  char v82; // al
  unsigned __int8 v83; // r8
  char v84; // al
  int v85; // esi
  __int64 v86; // r12
  unsigned __int64 v87; // rbx
  __int64 v88; // r15
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rbx
  unsigned __int64 v95; // rbx
  __int64 v96; // rbx
  unsigned __int8 v97; // al
  char v98; // r8
  unsigned __int8 v99; // si
  __int64 v100; // rsi
  __int64 v101; // r8
  unsigned int v102; // r15d
  __int64 v103; // rdx
  unsigned __int64 v104; // r9
  __int64 HasPrivateFixups; // rax
  unsigned int v106; // ecx
  __int64 v107; // r11
  int v108; // r9d
  _KPROCESS *v109; // rcx
  __int64 Address; // rax
  __int64 v111; // r10
  int v112; // eax
  __int64 v113; // rsi
  int v114; // r9d
  unsigned __int64 v115; // rax
  __int64 result; // rax
  __int64 v117; // [rsp+48h] [rbp-69h]
  __int64 v118; // [rsp+50h] [rbp-61h]
  __int64 v119; // [rsp+50h] [rbp-61h]
  __int64 *v120; // [rsp+58h] [rbp-59h]
  __int64 TransitionPteValid; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v122; // [rsp+68h] [rbp-49h] BYREF
  int v123; // [rsp+6Ch] [rbp-45h]
  BOOL v124; // [rsp+70h] [rbp-41h]
  int v125; // [rsp+74h] [rbp-3Dh] BYREF
  __int64 v126; // [rsp+78h] [rbp-39h] BYREF
  __int64 v127; // [rsp+80h] [rbp-31h] BYREF
  unsigned __int64 *v128; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int64 v129; // [rsp+90h] [rbp-21h]
  _QWORD *v130; // [rsp+98h] [rbp-19h]
  __int64 v131; // [rsp+A0h] [rbp-11h]
  __int64 v132; // [rsp+A8h] [rbp-9h]
  __int64 v136; // [rsp+118h] [rbp+67h] BYREF
  va_list va; // [rsp+118h] [rbp+67h]
  __int64 v138; // [rsp+120h] [rbp+6Fh]
  __int64 v139; // [rsp+128h] [rbp+77h]
  __int64 v140; // [rsp+130h] [rbp+7Fh]
  va_list va1; // [rsp+138h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v136 = va_arg(va1, _QWORD);
  v138 = va_arg(va1, _QWORD);
  v139 = va_arg(va1, _QWORD);
  v140 = va_arg(va1, _QWORD);
  v3 = a3;
  v4 = 0;
  v120 = (__int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v131 = MI_GET_PAGE_FRAME_FROM_PTE((__int64 *)va);
  v7 = 48 * v131 - 0x58000000000LL;
  v9 = v8 + 3;
  v117 = v7;
  v10 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
  v11 = *(_QWORD *)(v7 + 16);
  v126 = v11;
  v132 = v10;
  if ( PfSnNumActiveTraces == v8 || (v11 & 0x400) == 0 )
    goto LABEL_101;
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v11);
  v130 = PrototypePteDirect;
  v13 = *PrototypePteDirect;
  _m_prefetchw((const void *)(*PrototypePteDirect + 64LL));
  v14 = *(_QWORD *)(v13 + 64);
  if ( (v14 & 0xF) != 0 )
  {
    do
    {
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 64), v14 - 1, v14);
      if ( v14 == v15 )
        break;
      v14 = v15;
    }
    while ( (v15 & 0xF) != 0 );
  }
  v16 = v14;
  v17 = v14 & 0xF;
  v18 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
  v118 = v18;
  if ( v17 <= 1 )
  {
    if ( !v17 )
    {
LABEL_16:
      v22 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v13 + 72));
      v118 = ObFastReferenceObjectLocked(v13 + 64);
      v18 = v118;
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v13 + 72));
      __writecr8(v22);
      goto LABEL_17;
    }
    ObReferenceObjectExWithTag(v18, 15LL);
    _m_prefetchw((const void *)(v13 + 64));
    v19 = *(_QWORD *)(v13 + 64);
    while ( (v19 & 0xF) == 0 )
    {
      if ( v18 != (v19 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v20 = v19;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 64), v19 + 15, v19);
      if ( v20 == v19 )
        goto LABEL_15;
    }
    ObpTraceObjectDereferenceIfActive(v18 - 48, 15LL, 1953261124LL);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v18, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v18 - 48);
    }
  }
LABEL_15:
  if ( !v18 )
    goto LABEL_16;
LABEL_17:
  v3 = a3;
  v23 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
  if ( (a3 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a3) == 1)
    && (Process = KeGetCurrentThread()->ApcState.Process, (v25 = Process[1].ActiveProcessors.Bitmap[2]) != 0)
    && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
  {
    v26 = *(unsigned int *)(v25 + 8);
  }
  else
  {
    v26 = 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(*PrototypePteDirect + 56LL) & 0x20) != 0 )
  {
    v27 = PrototypePteDirect[1];
    if ( v23 < v27 || v23 >= v27 + 8LL * *((unsigned int *)PrototypePteDirect + 11) )
    {
      if ( (*((_BYTE *)PrototypePteDirect + 34) & 2) != 0 )
        v28 = (v23 << 9) - (*(_QWORD *)(MiGetSharedProtos(*PrototypePteDirect, v26, PrototypePteDirect) + 32) << 9);
      else
        v28 = (v23 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(PrototypePteDirect) + 32) << 9);
    }
    else
    {
      v28 = (v23 << 9) - (v27 << 9);
    }
    v29 = ((unsigned __int64)*((unsigned int *)PrototypePteDirect + 9) << 9) + (v28 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v30 = PrototypePteDirect[1];
    if ( v30 )
      v31 = (__int64)(v23 - v30) >> 3 << 12;
    else
      v31 = 0LL;
    v29 = v31
        + ((*((unsigned int *)PrototypePteDirect + 9) | ((unsigned __int64)((_WORD)PrototypePteDirect[4] & 0xFFC0) << 26)) << 12);
  }
  v32 = *PrototypePteDirect;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread->ApcState.Process;
  v123 = *(_DWORD *)(v32 + 56) & 0x20;
  _m_prefetchw(&v34[1].ThreadSeed[4]);
  v35 = *(_QWORD *)&v34[1].ThreadSeed[4];
  if ( (v35 & 0xF) != 0 )
  {
    do
    {
      v36 = _InterlockedCompareExchange64((volatile signed __int64 *)&v34[1].ThreadSeed[4], v35 - 1, v35);
      if ( v35 == v36 )
        break;
      v35 = v36;
    }
    while ( (v36 & 0xF) != 0 );
  }
  v37 = v35 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v35 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v38 = v35 & 0xF;
    if ( v38 <= 1 )
    {
      if ( v38 )
      {
        if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v37 + 360), 0xFu) )
        {
          _m_prefetchw(&v34[1].ThreadSeed[4]);
          v42 = *(_QWORD *)&v34[1].ThreadSeed[4];
          while ( (v42 & 0xF) == 0 )
          {
            if ( v37 != (v42 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            v43 = v42;
            v42 = _InterlockedCompareExchange64((volatile signed __int64 *)&v34[1].ThreadSeed[4], v42 + 15, v42);
            if ( v43 == v42 )
              goto LABEL_57;
          }
          _m_prefetchw((const void *)(v37 + 360));
          v44 = *(_QWORD *)(v37 + 360);
          if ( (v44 & 1) != 0 )
          {
LABEL_54:
            v46 = v44 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v46 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v46 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v45 = v44;
              v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 360), v44 - 30, v44);
              if ( v45 == v44 )
                break;
              if ( (v44 & 1) != 0 )
                goto LABEL_54;
            }
          }
        }
      }
      else
      {
        v39 = 1;
        v40 = KeAcquireSpinLockRaiseToDpc(&qword_140389D10);
        v41 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)&v34[1].ThreadSeed[4] & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v41 )
          v39 = ExAcquireRundownProtection_0(v41 + 45);
        KxReleaseSpinLock(&qword_140389D10);
        __writecr8(v40);
        v37 = 0LL;
        if ( v39 )
          v37 = (unsigned __int64)v41;
      }
    }
LABEL_57:
    if ( v37 )
    {
      if ( ((__int64)CurrentThread[1].Queue & 0x40) == 0 )
      {
        v47 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          v47 = 0;
        if ( v47 >= 2 || CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
        {
          v48 = *(struct _KTHREAD **)(v37 + 432);
          if ( !v48 || v48 == CurrentThread && *(_QWORD *)(v37 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
          {
            v49 = *(_QWORD *)(v18 + 24);
            v129 = v49;
            PfSnGetFileInformation(v37, (_QWORD *)v18);
            if ( (*(_BYTE *)(v37 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v37 + 352) + 1474LL) == 2 )
              _InterlockedOr16((volatile signed __int16 *)(v37 + 484), 1u);
            if ( v29 < 0x20000000000LL )
            {
              v50 = v123;
              v51 = dword_14039E910;
              v52 = v29 >> 9;
              v124 = v123 != 0;
              if ( dword_14039E910 != *(_DWORD *)(v37 + 404) && (int)PfSnTraceGetLogEntry(v37, 1u, &v128) >= 0 )
              {
                v53 = v128;
                *v128 = *v128 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                *((_DWORD *)v53 + 2) = v51;
                *(_DWORD *)(v37 + 404) = v51;
                *(_QWORD *)(v37 + 408) = v37 + 416;
              }
              if ( v50 || (v54 = *(_QWORD **)(v37 + 408), *v54 >> 3 != v52) || v54[1] != v49 )
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)(v37 + 344)) <= *(_DWORD *)(v37 + 340) )
                {
                  v55 = *(_QWORD *)(v37 + 96);
                  v56 = _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 16), 1u);
                  v57 = (v56 + 1 < 0) ^ __OFADD__(1, v56) | (v56 == -1);
                  v58 = v56 + 1;
                  if ( v57 )
                  {
LABEL_90:
                    _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 344), 0xFFFFFFFF);
                  }
                  else
                  {
                    while ( v58 > *(_DWORD *)(v55 + 20) )
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 16), 0xFFFFFFFF);
                      v59 = PfSnTraceBufferAllocate();
                      if ( !v59 )
                      {
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 344), 0xFFFFFFFF);
                        goto LABEL_93;
                      }
                      v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v37 + 128));
                      if ( *(_QWORD *)(v37 + 96) == v55 )
                      {
                        v61 = *(_QWORD **)(v37 + 112);
                        if ( *v61 != v37 + 104 )
                          __fastfail(3u);
                        v59[1] = v61;
                        *v59 = v37 + 104;
                        *v61 = v59;
                        *(_QWORD *)(v37 + 112) = v59;
                        ++*(_DWORD *)(v37 + 120);
                        *(_QWORD *)(v37 + 96) = v59;
                        KxReleaseSpinLock((PKSPIN_LOCK)(v37 + 128));
                        __writecr8(v60);
                      }
                      else
                      {
                        KxReleaseSpinLock((PKSPIN_LOCK)(v37 + 128));
                        __writecr8(v60);
                        ExFreePoolWithTag(v59, 0);
                      }
                      v55 = *(_QWORD *)(v37 + 96);
                      v62 = _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 16), 1u);
                      v57 = (v62 + 1 < 0) ^ __OFADD__(1, v62) | (v62 == -1);
                      v58 = v62 + 1;
                      if ( v57 )
                      {
                        v18 = v118;
                        goto LABEL_90;
                      }
                    }
                    v78 = (unsigned __int64 *)(v55 + 16LL * (v58 - 1) + 24);
                    v78[1] = v129;
                    *v78 = v124 | (8 * v52);
                    _InterlockedIncrement((volatile signed __int32 *)(v37 + 332));
                    if ( !v123 )
                      *(_QWORD *)(v37 + 408) = v78;
LABEL_93:
                    v18 = v118;
                  }
                }
                else
                {
                  _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 344), 0xFFFFFFFF);
                  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v37 + 400), 3, 0) )
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v37 + 368), DelayedWorkQueue);
                }
              }
            }
          }
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v37 + 336));
        }
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v37 + 360));
    }
    v3 = a3;
  }
  v5 = (signed __int64 *)(*v130 + 64LL);
  _m_prefetchw(v5);
  v63 = *v5;
  if ( (v18 ^ *v5) >= 0xF )
  {
LABEL_99:
    ObDereferenceObjectDeferDelete((PVOID)v18);
  }
  else
  {
    while ( 1 )
    {
      v64 = v63;
      v63 = _InterlockedCompareExchange64(v5, v63 + 1, v63);
      if ( v64 == v63 )
        break;
      if ( (v18 ^ v63) >= 0xF )
        goto LABEL_99;
    }
  }
  v6 = v120;
  v7 = v117;
  v9 = 3;
LABEL_101:
  v65 = (__int64 *)((((unsigned __int64)v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v65;
  v67 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v65 >= 0xFFFFF6FB7DBED000uLL )
  {
    v67 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v65 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v65, *v65);
  }
  TransitionPteValid = PteShadow;
  v68 = MI_GET_PFN_FROM_PTE(&TransitionPteValid, v67, v5, v6);
  v125 = v71;
  v72 = v68;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v125);
      while ( *(__int64 *)(v72 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 24), 0x3FuLL) );
    v69 = v120;
    v70 = 0xFFFFF6FB7DBED7F8uLL;
  }
  *(_QWORD *)(v72 + 24) ^= (*(_QWORD *)(v72 + 24) ^ (*(_QWORD *)(v72 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v73 = *v69;
  if ( (unsigned __int64)v69 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v69 <= v70 )
    v73 = MiReadPteShadow(v69, *v69);
  if ( (unsigned int)MiIsPrototypePteVadLookup(v73) )
  {
    v76 = (v73 >> 5) & 0x1F;
    v119 = v138;
  }
  else
  {
    v79 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v126);
    v80 = v73 & 8;
    if ( v80 )
      v79 = 1;
    v81 = v80 == 0LL;
    LODWORD(v76) = v79;
    v82 = v9;
    v119 = v138;
    if ( v81 )
      v82 = 1;
    v4 = v82;
    if ( v138 && (v76 & 4) == 0 )
      v119 = 0LL;
  }
  if ( (MiFlags & 0x10000) != 0 && v3 >= 0xFFFF800000000000uLL && (v76 & 2) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v7, 0LL, 0LL);
    if ( (PagePrivilege & 1) != 0 )
    {
      LODWORD(v76) = v9;
      v119 = 0LL;
    }
    else if ( (PagePrivilege & 8) != 0 )
    {
      LODWORD(v76) = 1;
      v119 = 0LL;
    }
    else
    {
      LODWORD(v76) = v76 & 0xFFFFFFFD;
      if ( !(_DWORD)v76 )
        LODWORD(v76) = 1;
    }
    v74 = (unsigned __int64)v120;
    v75 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v83 = *(_BYTE *)(v7 + 34);
  v84 = v83 >> 6;
  v85 = v76 & 0xFFFFFFE7;
  if ( v83 >> 6 != 1 )
  {
    if ( v84 )
    {
      if ( v84 == 2 )
        v85 |= 0x18u;
    }
    else
    {
      v85 |= 8u;
    }
  }
  v86 = v85 & 0x1F;
  v87 = ((v131 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v86] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v74 < 0xFFFFF68000000000uLL || v74 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_150;
  v88 = (__int64)(v74 << 25) >> 16;
  if ( v74 >= 0xFFFFF6FB40000000uLL && v74 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v74 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v87 = ((v131 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v86] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v85 & 0x4000000) == 0 )
    {
      v87 &= v75;
    }
    v89 = MiUserPdeOrAbove(v74);
    v74 = (unsigned __int64)v120;
    if ( v89 )
      v87 |= 4uLL;
  }
  v90 = v88;
  v91 = v87 | 4;
  if ( v74 > 0xFFFFF6BFFFFFFF78uLL )
    v91 = v87;
  v87 = v91;
  v7 = v117;
  if ( (unsigned int)MiIsAddressGlobal(v90) )
LABEL_150:
    v87 |= 0x100uLL;
  if ( v85 < 0 && (v85 & 5) == 4 )
    v87 |= 0x42uLL;
  v92 = v87 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v85 & 0x40000000) == 0 )
    v92 = v87;
  if ( (v85 & 0x20000000) != 0 )
    v92 ^= ((unsigned __int16)v92 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100;
  v93 = v92 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v85 & 0x8000000) == 0 )
    v93 = v92;
  v94 = v93 | 0x80;
  if ( (v85 & 0x4000000) == 0 )
    v94 = v93;
  v95 = v94 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v95;
  if ( !v119 || (v76 & 5) == 5 )
  {
    v100 = v126;
  }
  else
  {
    v95 |= 0x42uLL;
    TransitionPteValid = v95;
    if ( (v83 & 0x10) == 0 && (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v7 + 16) )
    {
      v96 = 0LL;
      v97 = MiLockPageInline(v7);
      v98 = *(_BYTE *)(v7 + 34);
      v99 = v97;
      if ( (v98 & 0x10) == 0 && (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 )
      {
        if ( (v98 & 8) == 0 )
          v96 = MiCapturePageFileInfoInline(v7 + 16, 1LL);
        *(_BYTE *)(v7 + 34) |= 0x10u;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v96 )
        MiReleasePageFileInfo(v132, v96, 1LL);
      __writecr8(v99);
      v95 = TransitionPteValid;
    }
    v100 = v126;
    if ( (v126 & 0x400) != 0 && (*(_BYTE *)(a1 + 192) & 7) != 2 )
      MiCheckAndUpdateIoAttribution(v7);
  }
  v101 = 0LL;
  v102 = 0;
  v122 = 0;
  v127 = 0LL;
  if ( (_DWORD)v139 )
    goto LABEL_208;
  v103 = *(_QWORD *)(v117 + 8);
  if ( v103 >= 0 )
    goto LABEL_208;
  v104 = a3;
  if ( a3 >= 0xFFFF800000000000uLL )
  {
    HasPrivateFixups = MiSystemImageHasPrivateFixups(a3, &v127, &v122);
    v106 = v122;
    LODWORD(v107) = v127;
    v108 = a3;
    goto LABEL_194;
  }
  if ( (v100 & 0x400) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)MiGetPrototypePteDirect(v100) + 56LL) & 0x20) == 0 )
    {
LABEL_208:
      v113 = v117;
      goto LABEL_209;
    }
  }
  else
  {
    v109 = KeGetCurrentThread()->ApcState.Process;
    if ( v109[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v109, v103 | 0x8000000000000000uLL, 0LL, a3) )
      goto LABEL_207;
  }
  if ( *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 248LL) == v101
    || (Address = MiLocateAddress(v104), (v111 = Address) == 0)
    || (v112 = *(_DWORD *)(Address + 48), (v112 & 7) != 2)
    || (v112 & 0x10000) == 0
    || (v108 = a3,
        v107 = **(_QWORD **)(v111 + 72),
        v106 = (a3 >> 12) + ((__int64)(*(_QWORD *)(v111 + 80) - *(_QWORD *)(v107 + 136)) >> 3) - *(_DWORD *)(v111 + 24),
        !_bittest(*(const signed __int32 **)(v111 + 152), v106)) )
  {
LABEL_207:
    v95 = TransitionPteValid;
    goto LABEL_208;
  }
  HasPrivateFixups = *(_QWORD *)(v111 + 136);
  v95 = TransitionPteValid;
  v122 = (a3 >> 12) + ((__int64)(*(_QWORD *)(v111 + 80) - *(_QWORD *)(v107 + 136)) >> 3) - *(_DWORD *)(v111 + 24);
  v127 = v107;
LABEL_194:
  if ( !HasPrivateFixups )
    goto LABEL_208;
  v102 = MiPrivateFixup(v107, v106, v117, v108, HasPrivateFixups, a1, a2);
  MiLockAndDecrementShareCount(v117, 0LL);
  if ( v102 == 297 || v102 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v72, 0LL);
    if ( v102 == 297 )
      return (unsigned int)-1073740748;
    return v102;
  }
  if ( (v102 & 0x80000000) != 0 )
    return v102;
  TransitionPteValid = MiMakeTransitionPteValid(v120);
  v95 = TransitionPteValid;
  v113 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&TransitionPteValid) - 0x58000000000LL;
  if ( a3 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v113 + 35) & 8) != 0 )
  {
    *v120 = v95;
    if ( (unsigned __int64)v120 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v120 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v120, v95);
    return v102;
  }
  v4 = -2;
  LODWORD(v76) = 0;
LABEL_209:
  v114 = 0;
  if ( (v4 & 1) == 0 )
    v114 = v76;
  if ( (v140 & 1) == 0 || (v115 = v140 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v140 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
    v115 = 0LL;
  if ( !(unsigned int)MiAllocateWsle(a1, (_DWORD)v120, v113, v114, v95, v115) )
  {
    MiLockAndDecrementShareCount(v113, 0LL);
    if ( (v4 & 4) == 0 )
      MiLockAndDecrementShareCount(v72, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v119 )
    return v102;
  if ( (v95 & 0x800) != 0 )
    return v102;
  if ( (v95 & 0x200) == 0 )
    return v102;
  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
    return v102;
  v81 = (unsigned int)MiCopyOnWriteEx(a3, (_DWORD)v120, -1, a2, 0) == 0;
  result = 3221225495LL;
  if ( !v81 )
    return v102;
  return result;
}
