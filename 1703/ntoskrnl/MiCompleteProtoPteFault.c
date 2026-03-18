/*
 * XREFs of MiCompleteProtoPteFault @ 0x1400B9890
 * Callers:
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140023948 (MiCheckAndUpdateIoAttribution.c)
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtectionEx @ 0x140061C00 (ExAcquireRundownProtectionEx.c)
 *     MiGetPagingFileOffset @ 0x14007720C (MiGetPagingFileOffset.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiSystemImageHasPrivateFixups @ 0x1400A77B0 (MiSystemImageHasPrivateFixups.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     PfSnTraceGetLogEntry @ 0x1400B31C4 (PfSnTraceGetLogEntry.c)
 *     MiIsAddressGlobal @ 0x1400B6550 (MiIsAddressGlobal.c)
 *     PfSnGetFileInformation @ 0x1400B7690 (PfSnGetFileInformation.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     PfSnTraceBufferAllocate @ 0x14012CFC8 (PfSnTraceBufferAllocate.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedProtos @ 0x140221220 (MiGetSharedProtos.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 MiCompleteProtoPteFault(__int64 a1, char a2, unsigned __int64 a3, ...)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // r14d
  __int64 v5; // r8
  unsigned __int64 *v6; // r9
  __int64 v7; // r15
  __int64 v8; // rdx
  struct _KEVENT *v9; // rax
  __int64 v10; // rcx
  _QWORD *PrototypePteDirect; // r13
  __int64 v12; // rdi
  signed __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // r15
  unsigned int v16; // edx
  void *v17; // r15
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r12
  _KPROCESS *Process; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *v32; // rdi
  int v33; // r13d
  signed __int64 v34; // rdx
  signed __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned int v37; // edx
  BOOLEAN v38; // si
  KIRQL v39; // bl
  struct _EX_RUNDOWN_REF *v40; // rdi
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  unsigned __int64 v45; // rax
  unsigned int v46; // edx
  struct _KTHREAD *v47; // rax
  unsigned __int64 v48; // r15
  int v49; // edi
  unsigned __int64 v50; // r12
  unsigned __int64 *v51; // rcx
  _QWORD *v52; // rcx
  __int64 v53; // rdi
  signed __int32 v54; // eax
  char v55; // cc
  signed __int32 v56; // eax
  _QWORD *v57; // rsi
  KIRQL v58; // r13
  _QWORD *v59; // rcx
  signed __int32 v60; // eax
  signed __int64 *v61; // r8
  signed __int64 v62; // rax
  signed __int64 v63; // rtt
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int64 *v68; // r9
  __int64 v69; // r13
  unsigned __int64 v70; // rdi
  __int64 v71; // r8
  unsigned __int64 v72; // r9
  __int64 v73; // r10
  int v74; // edi
  int v75; // r8d
  unsigned __int64 *v76; // rdx
  unsigned __int64 v77; // rcx
  int v78; // eax
  int v79; // edi
  bool v80; // zf
  int v81; // eax
  char PagePrivilege; // al
  unsigned __int8 v83; // cl
  signed int v84; // esi
  __int64 v85; // r12
  __int64 v86; // rdx
  unsigned __int64 v87; // rbx
  unsigned __int64 v88; // r15
  int v89; // eax
  int IsAddressGlobal; // eax
  __int64 v91; // r12
  unsigned __int64 v92; // rbx
  unsigned __int64 v93; // rbx
  unsigned __int8 v94; // al
  unsigned __int8 v95; // si
  __int64 v96; // rsi
  __int64 v97; // r8
  unsigned int v98; // r15d
  __int64 v99; // rdx
  unsigned __int64 v100; // r9
  __int64 HasPrivateFixups; // rax
  unsigned int v102; // edx
  __int64 v103; // r11
  int v104; // r9d
  _KPROCESS *v105; // rcx
  __int64 Address; // rax
  __int64 v107; // r10
  int v108; // eax
  __int64 v109; // rax
  int v110; // r9d
  __int64 v111; // rsi
  __int64 v112; // rcx
  int v113; // r9d
  unsigned __int64 v114; // rax
  __int64 result; // rax
  unsigned __int8 v116; // [rsp+40h] [rbp-81h]
  __int64 v117; // [rsp+48h] [rbp-79h]
  unsigned __int64 *v118; // [rsp+50h] [rbp-71h]
  __int64 v119; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v120; // [rsp+60h] [rbp-61h] BYREF
  __int64 v121; // [rsp+68h] [rbp-59h]
  int v122; // [rsp+70h] [rbp-51h] BYREF
  PVOID Object; // [rsp+78h] [rbp-49h]
  __int64 v124; // [rsp+80h] [rbp-41h] BYREF
  __int64 v125; // [rsp+88h] [rbp-39h] BYREF
  unsigned __int64 ValidPte; // [rsp+90h] [rbp-31h] BYREF
  struct _KEVENT *v127; // [rsp+98h] [rbp-29h]
  unsigned __int64 *v128; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD *v129; // [rsp+B0h] [rbp-11h]
  __int64 v130; // [rsp+B8h] [rbp-9h]
  __int64 v134; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v136; // [rsp+130h] [rbp+6Fh]
  __int64 v137; // [rsp+138h] [rbp+77h]
  __int64 v138; // [rsp+140h] [rbp+7Fh]
  va_list va1; // [rsp+148h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v134 = va_arg(va1, _QWORD);
  v136 = va_arg(va1, _QWORD);
  v137 = va_arg(va1, _QWORD);
  v138 = va_arg(va1, _QWORD);
  v3 = a3;
  v4 = 0;
  v118 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v130 = MI_GET_PAGE_FRAME_FROM_PTE((__int64 *)va);
  v7 = 48 * v130 - 0x58000000000LL;
  v117 = v7;
  v8 = (*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL;
  v9 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * v8);
  v10 = *(_QWORD *)(v7 + 16);
  v124 = v10;
  v127 = v9;
  if ( !PfSnNumActiveTraces || (v10 & 0x400) == 0 )
    goto LABEL_97;
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v10, v8, v5, v6);
  v129 = PrototypePteDirect;
  v12 = *PrototypePteDirect;
  _m_prefetchw((const void *)(*PrototypePteDirect + 64LL));
  v13 = *(_QWORD *)(v12 + 64);
  if ( (v13 & 0xF) != 0 )
  {
    do
    {
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 64), v13 - 1, v13);
      if ( v13 == v14 )
        break;
      v13 = v14;
    }
    while ( (v14 & 0xF) != 0 );
  }
  v15 = v13;
  v16 = v13 & 0xF;
  v17 = (void *)(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  Object = v17;
  if ( v16 <= 1 )
  {
    if ( !v16 )
    {
LABEL_16:
      v21 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v12 + 72));
      Object = (PVOID)ObFastReferenceObjectLocked((_QWORD *)(v12 + 64));
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      __writecr8(v21);
      goto LABEL_17;
    }
    ObReferenceObjectExWithTag((__int64)v17, 15);
    _m_prefetchw((const void *)(v12 + 64));
    v18 = *(_QWORD *)(v12 + 64);
    while ( (v18 & 0xF) == 0 )
    {
      if ( v17 != (void *)(v18 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v19 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 64), v18 + 15, v18);
      if ( v19 == v18 )
        goto LABEL_15;
    }
    ObpTraceObjectDereferenceIfActive((_DWORD)v17 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v17 - 6, 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v17, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion((signed __int64)v17 - 48);
    }
  }
LABEL_15:
  if ( !v17 )
    goto LABEL_16;
LABEL_17:
  v3 = a3;
  v22 = *(_QWORD *)(v117 + 8) | 0x8000000000000000uLL;
  if ( (a3 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a3) == 1)
    && (Process = KeGetCurrentThread()->ApcState.Process, (v24 = Process[1].ActiveProcessors.Bitmap[2]) != 0)
    && Process != PsInitialSystemProcess )
  {
    v25 = *(unsigned int *)(v24 + 8);
  }
  else
  {
    v25 = 0xFFFFFFFFLL;
  }
  if ( (*(_DWORD *)(*PrototypePteDirect + 56LL) & 0x20) != 0 )
  {
    v26 = PrototypePteDirect[1];
    if ( v22 < v26 || v22 >= v26 + 8LL * *((unsigned int *)PrototypePteDirect + 11) )
    {
      if ( (*((_BYTE *)PrototypePteDirect + 34) & 2) != 0 )
        v27 = (v22 << 9) - (*(_QWORD *)(MiGetSharedProtos(*PrototypePteDirect, v25, PrototypePteDirect) + 32) << 9);
      else
        v27 = (v22 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(PrototypePteDirect) + 32) << 9);
    }
    else
    {
      v27 = (v22 << 9) - (v26 << 9);
    }
    v28 = ((unsigned __int64)*((unsigned int *)PrototypePteDirect + 9) << 9) + (v27 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v29 = PrototypePteDirect[1];
    if ( v29 )
      v30 = (__int64)(v22 - v29) >> 3 << 12;
    else
      v30 = 0LL;
    v28 = v30
        + ((*((unsigned int *)PrototypePteDirect + 9) | ((unsigned __int64)((_WORD)PrototypePteDirect[4] & 0xFFC0) << 26)) << 12);
  }
  CurrentThread = KeGetCurrentThread();
  v32 = CurrentThread->ApcState.Process;
  v33 = *(_DWORD *)(*PrototypePteDirect + 56LL) & 0x20;
  _m_prefetchw(&v32[1].ThreadSeed[4]);
  v34 = *(_QWORD *)&v32[1].ThreadSeed[4];
  if ( (v34 & 0xF) != 0 )
  {
    do
    {
      v35 = _InterlockedCompareExchange64((volatile signed __int64 *)&v32[1].ThreadSeed[4], v34 - 1, v34);
      if ( v34 == v35 )
        break;
      v34 = v35;
    }
    while ( (v35 & 0xF) != 0 );
  }
  v36 = v34 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v34 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v37 = v34 & 0xF;
    if ( v37 <= 1 )
    {
      if ( v37 )
      {
        if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v36 + 360), 0xFu) )
        {
          _m_prefetchw(&v32[1].ThreadSeed[4]);
          v41 = *(_QWORD *)&v32[1].ThreadSeed[4];
          while ( (v41 & 0xF) == 0 )
          {
            if ( v36 != (v41 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            v42 = v41;
            v41 = _InterlockedCompareExchange64((volatile signed __int64 *)&v32[1].ThreadSeed[4], v41 + 15, v41);
            if ( v42 == v41 )
              goto LABEL_57;
          }
          _m_prefetchw((const void *)(v36 + 360));
          v43 = *(_QWORD *)(v36 + 360);
          if ( (v43 & 1) != 0 )
          {
LABEL_54:
            v45 = v43 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v45 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v45 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v44 = v43;
              v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 360), v43 - 30, v43);
              if ( v44 == v43 )
                break;
              if ( (v43 & 1) != 0 )
                goto LABEL_54;
            }
          }
        }
      }
      else
      {
        v38 = 1;
        v39 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
        v40 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)&v32[1].ThreadSeed[4] & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v40 )
          v38 = ExAcquireRundownProtection(v40 + 45);
        KxReleaseSpinLock(&qword_14036DFD0);
        __writecr8(v39);
        v36 = 0LL;
        if ( v38 )
          v36 = (unsigned __int64)v40;
      }
    }
LABEL_57:
    if ( v36 )
    {
      if ( ((__int64)CurrentThread[1].Queue & 0x40) == 0 )
      {
        v46 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          v46 = 0;
        if ( v46 >= 2 || CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
        {
          v47 = *(struct _KTHREAD **)(v36 + 432);
          if ( !v47 || v47 == CurrentThread && *(void **)(v36 + 440) == CurrentThread[1].KernelStack )
          {
            v48 = *((_QWORD *)Object + 3);
            PfSnGetFileInformation(v36, Object);
            if ( (*(_BYTE *)(v36 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v36 + 352) + 1474LL) == 2 )
              _InterlockedOr16((volatile signed __int16 *)(v36 + 484), 1u);
            if ( v28 < 0x20000000000LL )
            {
              v49 = dword_140382C10;
              v50 = v28 >> 9;
              LODWORD(v121) = v33 != 0;
              if ( dword_140382C10 != *(_DWORD *)(v36 + 404) && (int)PfSnTraceGetLogEntry(v36, 1u, &v128) >= 0 )
              {
                v51 = v128;
                *v128 = *v128 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                *((_DWORD *)v51 + 2) = v49;
                *(_DWORD *)(v36 + 404) = v49;
                *(_QWORD *)(v36 + 408) = v36 + 416;
              }
              if ( v33 || (v52 = *(_QWORD **)(v36 + 408), *v52 >> 3 != v50) || v52[1] != v48 )
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)(v36 + 344)) <= *(_DWORD *)(v36 + 340) )
                {
                  v53 = *(_QWORD *)(v36 + 96);
                  v54 = _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 16), 1u);
                  v55 = (v54 + 1 < 0) ^ __OFADD__(1, v54) | (v54 == -1);
                  v56 = v54 + 1;
                  if ( v55 )
                  {
LABEL_89:
                    _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 344), 0xFFFFFFFF);
                  }
                  else
                  {
                    while ( v56 > *(_DWORD *)(v53 + 20) )
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 16), 0xFFFFFFFF);
                      v57 = (_QWORD *)PfSnTraceBufferAllocate();
                      if ( v57 )
                      {
                        v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 128));
                        if ( *(_QWORD *)(v36 + 96) == v53 )
                        {
                          v59 = *(_QWORD **)(v36 + 112);
                          if ( *v59 != v36 + 104 )
                            __fastfail(3u);
                          v57[1] = v59;
                          *v57 = v36 + 104;
                          *v59 = v57;
                          *(_QWORD *)(v36 + 112) = v57;
                          ++*(_DWORD *)(v36 + 120);
                          *(_QWORD *)(v36 + 96) = v57;
                          KxReleaseSpinLock((PKSPIN_LOCK)(v36 + 128));
                          __writecr8(v58);
                        }
                        else
                        {
                          KxReleaseSpinLock((PKSPIN_LOCK)(v36 + 128));
                          __writecr8(v58);
                          ExFreePoolWithTag(v57, 0);
                        }
                        v53 = *(_QWORD *)(v36 + 96);
                        v60 = _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 16), 1u);
                        v55 = (v60 + 1 < 0) ^ __OFADD__(1, v60) | (v60 == -1);
                        v56 = v60 + 1;
                        if ( !v55 )
                          continue;
                      }
                      goto LABEL_89;
                    }
                    v75 = v121;
                    v76 = (unsigned __int64 *)(v53 + 16LL * (v56 - 1) + 24);
                    v77 = (unsigned int)v121 | (8 * v50);
                    v76[1] = v48;
                    *v76 = v77;
                    _InterlockedIncrement((volatile signed __int32 *)(v36 + 332));
                    if ( !v75 )
                      *(_QWORD *)(v36 + 408) = v76;
                  }
                }
                else
                {
                  _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 344), 0xFFFFFFFF);
                  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v36 + 400), 3, 0) )
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v36 + 368), DelayedWorkQueue);
                }
              }
            }
          }
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 336));
        }
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v36 + 360));
    }
    v3 = a3;
  }
  v61 = (signed __int64 *)(*v129 + 64LL);
  _m_prefetchw(v61);
  v62 = *v61;
  if ( ((unsigned __int64)Object ^ *v61) >= 0xF )
  {
LABEL_95:
    ObDereferenceObjectDeferDelete(Object);
  }
  else
  {
    while ( 1 )
    {
      v63 = v62;
      v62 = _InterlockedCompareExchange64(v61, v62 + 1, v62);
      if ( v63 == v62 )
        break;
      if ( ((unsigned __int64)Object ^ v62) >= 0xF )
        goto LABEL_95;
    }
  }
  v6 = v118;
  v7 = v117;
LABEL_97:
  v119 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v67 = MI_GET_PFN_FROM_PTE(&v119, v64, v65, v66);
  v122 = 0;
  v69 = v67;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v67 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v122);
      while ( *(__int64 *)(v69 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) );
    v68 = v118;
  }
  *(_QWORD *)(v69 + 24) ^= (*(_QWORD *)(v69 + 24) ^ (*(_QWORD *)(v69 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v70 = MI_READ_PTE_LOCK_FREE(v68);
  if ( (unsigned int)MiIsPrototypePteVadLookup(v70) )
  {
    v74 = (v70 >> 5) & 0x1F;
    v121 = v136;
  }
  else
  {
    v78 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v124);
    v79 = v70 & 8;
    if ( v79 )
      v78 = 1;
    v80 = v79 == 0LL;
    v74 = v78;
    v81 = 3;
    v121 = v136;
    if ( v80 )
      v81 = 1;
    v4 = v81;
    if ( v136 && (v74 & 4) == 0 )
      v121 = 0LL;
  }
  if ( (MiFlags & 0x10000) != 0 && v3 >= 0xFFFF800000000000uLL && (v74 & 2) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v7, 0, 0LL);
    if ( (PagePrivilege & 1) != 0 )
    {
      v74 = 3;
      v121 = 0LL;
    }
    else if ( (PagePrivilege & 8) != 0 )
    {
      v74 = 1;
      v121 = 0LL;
    }
    else
    {
      v74 &= ~2u;
      if ( !v74 )
        v74 = 1;
    }
    v72 = (unsigned __int64)v118;
    v73 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v83 = *(_BYTE *)(v7 + 34);
  v116 = v83;
  v84 = v74 & 0xFFFFFFE7;
  if ( v83 >> 6 != 1 )
  {
    if ( v83 >= 0x40u )
    {
      if ( v83 >> 6 == 2 )
        v84 |= 0x18u;
    }
    else
    {
      v84 |= 8u;
    }
  }
  v85 = v84 & 0x1F;
  v86 = 0xFFFFF68000000000uLL;
  v87 = ((v130 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v85] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v72 < 0xFFFFF68000000000uLL || v72 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_141;
  v88 = (__int64)(v72 << 25) >> 16;
  if ( v72 >= 0xFFFFF6FB40000000uLL && v72 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v72 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v87 = ((v130 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v85] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (v84 & 0x4000000) == 0 )
    {
      v87 &= v73;
    }
    v89 = MiUserPdeOrAbove(v72);
    v72 = (unsigned __int64)v118;
    if ( v89 )
      v87 |= 4uLL;
  }
  if ( v72 <= 0xFFFFF6BFFFFFFF78uLL )
    v87 |= 4uLL;
  IsAddressGlobal = MiIsAddressGlobal(v88);
  v83 = v116;
  v7 = v117;
  if ( IsAddressGlobal )
LABEL_141:
    v87 |= 0x100uLL;
  if ( v84 < 0 && (v84 & 5) == 4 )
    v87 |= 0x42uLL;
  if ( (v84 & 0x40000000) != 0 )
    v87 &= ~4uLL;
  if ( (v84 & 0x20000000) != 0 )
    v87 ^= ((unsigned __int16)v87 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100;
  if ( (v84 & 0x8000000) != 0 )
    v87 &= ~0x100uLL;
  if ( (v84 & 0x4000000) != 0 )
    v87 |= 0x80uLL;
  v91 = v121;
  v92 = v87 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v119 = v92;
  if ( !v121 || (v74 & 5) == 5 )
  {
    v96 = v124;
  }
  else
  {
    v92 |= 0x42uLL;
    v119 = v92;
    if ( (v83 & 0x10) == 0 && (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v7 + 16) )
    {
      v93 = 0LL;
      v94 = MiLockPageInline(v7);
      v71 = *(unsigned __int8 *)(v7 + 34);
      v95 = v94;
      if ( (v71 & 0x10) == 0 )
      {
        v86 = *(unsigned int *)(v7 + 16);
        if ( (v86 & 0x400) == 0 )
        {
          if ( (v71 & 8) == 0 )
            v93 = MiCapturePageFileInfoInline((_QWORD *)(v7 + 16), 1, 0);
          *(_BYTE *)(v7 + 34) |= 0x10u;
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v93 )
        MiReleasePageFileInfo(v127, v93, 1);
      __writecr8(v95);
      v92 = v119;
    }
    v96 = v124;
    if ( (v124 & 0x400) != 0 && (*(_BYTE *)(a1 + 192) & 7) != 2 )
      MiCheckAndUpdateIoAttribution(v7, v86, v71, v72);
  }
  v97 = 0LL;
  v98 = 0;
  v120 = 0;
  v125 = 0LL;
  if ( (_DWORD)v137 )
    goto LABEL_198;
  v99 = *(_QWORD *)(v117 + 8);
  if ( v99 >= 0 )
    goto LABEL_198;
  v100 = a3;
  if ( a3 >= 0xFFFF800000000000uLL )
  {
    HasPrivateFixups = MiSystemImageHasPrivateFixups(a3, &v125, &v120);
    v102 = v120;
    LODWORD(v103) = v125;
    v104 = a3;
    goto LABEL_185;
  }
  if ( (v96 & 0x400) != 0 )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)MiGetPrototypePteDirect(v96, v99, 0LL, a3) + 56LL) >> 5) & 1) == 0 )
    {
LABEL_198:
      v111 = v117;
      goto LABEL_199;
    }
  }
  else
  {
    v105 = KeGetCurrentThread()->ApcState.Process;
    if ( v105[1].Affinity.Bitmap[12] && MiLocateCloneAddress((__int64)v105, v99 | 0x8000000000000000uLL) )
      goto LABEL_197;
  }
  if ( *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 248LL) == v97
    || (Address = MiLocateAddress(v100), (v107 = Address) == 0)
    || (v108 = *(_DWORD *)(Address + 48), (v108 & 7) != 2)
    || (v108 & 0x10000) == 0
    || (v104 = a3,
        v103 = **(_QWORD **)(v107 + 72),
        v102 = (a3 >> 12) + ((__int64)(*(_QWORD *)(v107 + 80) - *(_QWORD *)(v103 + 136)) >> 3) - *(_DWORD *)(v107 + 24),
        !_bittest(*(const signed __int32 **)(v107 + 152), v102)) )
  {
LABEL_197:
    v92 = v119;
    goto LABEL_198;
  }
  HasPrivateFixups = *(_QWORD *)(v107 + 136);
  v92 = v119;
  v120 = (a3 >> 12) + ((__int64)(*(_QWORD *)(v107 + 80) - *(_QWORD *)(v103 + 136)) >> 3) - *(_DWORD *)(v107 + 24);
  v125 = v103;
LABEL_185:
  if ( !HasPrivateFixups )
    goto LABEL_198;
  v98 = MiPrivateFixup(v103, v102, v117, v104, HasPrivateFixups, a1, a2);
  MiLockAndDecrementShareCount(v117, 0LL);
  if ( v98 == 297 || v98 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v69, 0LL);
    if ( v98 == 297 )
      return (unsigned int)-1073740748;
    return v98;
  }
  if ( (v98 & 0x80000000) != 0 )
    return v98;
  ValidPte = MI_READ_PTE_LOCK_FREE(v118);
  v109 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&ValidPte);
  ValidPte = MiMakeValidPte((unsigned __int64)v118, v109, v110);
  v92 = ValidPte;
  v119 = ValidPte;
  v111 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v119) - 0x58000000000LL;
  if ( a3 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v111 + 35) & 8) != 0 )
  {
    *v118 = v92;
    if ( (unsigned int)MiPteInShadowRange(v118) )
      MiWritePteShadow(v112);
    return v98;
  }
  v74 = 0;
  v4 = v4 & 0xFFFFFFFA | 4;
LABEL_199:
  v113 = 0;
  if ( (v4 & 1) == 0 )
    v113 = v74;
  if ( (v138 & 1) == 0 || (v114 = v138 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v138 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
    v114 = 0LL;
  if ( !(unsigned int)MiAllocateWsle(a1, (_DWORD)v118, v111, v113, v92, v114) )
  {
    MiLockAndDecrementShareCount(v111, 0LL);
    if ( v4 < 4 )
      MiLockAndDecrementShareCount(v69, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v91 )
    return v98;
  if ( (v92 & 0x800) != 0 )
    return v98;
  if ( (v92 & 0x200) == 0 )
    return v98;
  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
    return v98;
  v80 = (unsigned int)MiCopyOnWriteEx(a3, 0) == 0;
  result = 3221225495LL;
  if ( !v80 )
    return v98;
  return result;
}
