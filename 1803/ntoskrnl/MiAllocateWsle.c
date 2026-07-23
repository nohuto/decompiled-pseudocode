/*
 * XREFs of MiAllocateWsle @ 0x1400161C0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiResolveProtoCombine @ 0x140058068 (MiResolveProtoCombine.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiInitializeWorkingSetList @ 0x14006A7A0 (MiInitializeWorkingSetList.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiCreateForkWsle @ 0x1401428A4 (MiCreateForkWsle.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetStandbyRepurposed @ 0x1400819A0 (MiGetStandbyRepurposed.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400B330C (MiReleaseWsSwapReservationPfn.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MmLockLoadedModuleListShared @ 0x14012B7B0 (MmLockLoadedModuleListShared.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiLogAllocateWsleEvent @ 0x140253678 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x1402618AC (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x140261A04 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x140261C24 (MiGetVirtualFaultPageInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAllocateWsle(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        char a4,
        unsigned __int64 a5,
        char a6,
        __int64 a7)
{
  char v8; // al
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int8 v11; // bl
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // r14d
  char v14; // r12
  unsigned int v15; // r15d
  unsigned __int64 v16; // rdi
  char v17; // al
  bool v18; // cf
  ULONG_PTR v19; // r15
  unsigned __int64 v20; // r9
  char v21; // cl
  _BYTE *v22; // r14
  unsigned __int64 v23; // rcx
  LONG *v24; // r12
  volatile signed __int32 *v25; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v28; // edx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  _QWORD *v32; // rdi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // r11
  int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 *v40; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rax
  struct _KPRCB *v44; // rcx
  _DWORD *v45; // rdx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rcx
  _DWORD *v48; // rdi
  __int64 v50; // r8
  __int64 v51; // rbx
  __int64 *v52; // rdi
  __int64 *v53; // r14
  __int64 v54; // r8
  __int64 v55; // rax
  unsigned __int64 v56; // r10
  _QWORD *v57; // rdi
  unsigned __int64 v58; // rbx
  _QWORD *v59; // r8
  unsigned __int64 v60; // rdx
  bool v61; // zf
  KSPIN_LOCK *v62; // r10
  struct _KPRCB *v63; // rcx
  _DWORD *v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rax
  struct _KPRCB *v67; // rcx
  _BYTE *v68; // rdx
  int v69; // eax
  __int64 v70; // r14
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // r10
  __int64 v73; // rcx
  char v74; // cl
  int v75; // r8d
  unsigned __int8 v76; // al
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 **v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r11
  int v84; // ecx
  unsigned __int64 v85; // rax
  __int64 v86; // r10
  __int64 v87; // r11
  int v88; // eax
  signed __int32 v89; // eax
  __int64 v90; // r15
  __int64 v91; // r11
  __int64 v92; // rax
  unsigned __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  int v99; // eax
  int v100; // eax
  int v101; // eax
  unsigned __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // r8
  unsigned __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // r8
  unsigned __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // r8
  unsigned __int8 v111; // [rsp+20h] [rbp-91h]
  unsigned __int8 v112[7]; // [rsp+21h] [rbp-90h] BYREF
  __int64 v113; // [rsp+28h] [rbp-89h]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-81h]
  int v115; // [rsp+38h] [rbp-79h]
  int v116; // [rsp+3Ch] [rbp-75h] BYREF
  int v117; // [rsp+40h] [rbp-71h]
  __int64 v118; // [rsp+48h] [rbp-69h] BYREF
  volatile signed __int64 *v119; // [rsp+50h] [rbp-61h]
  int v120; // [rsp+60h] [rbp-51h] BYREF
  int v121; // [rsp+64h] [rbp-4Dh] BYREF
  unsigned __int64 v122; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 v123; // [rsp+70h] [rbp-41h] BYREF
  __int64 v124; // [rsp+78h] [rbp-39h]
  __int64 v125; // [rsp+80h] [rbp-31h]
  unsigned __int64 *v126; // [rsp+88h] [rbp-29h]
  _DWORD v127[8]; // [rsp+90h] [rbp-21h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+47h]

  v126 = a2;
  v125 = a7;
  BugCheckParameter2 = (ULONG_PTR)a3;
  ++*(_DWORD *)(a1 + 4);
  v8 = *(_BYTE *)(a1 + 184) & 7;
  v124 = 0LL;
  v9 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v8 == 2 )
    ++dword_1403CCDC0;
  __incgsdword(0x2E90u);
  v115 = 0;
  v117 = 0;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v10 = 1LL;
    v11 = 0;
    v113 = 1LL;
    v117 = 1;
  }
  else
  {
    v61 = (*(_BYTE *)(a1 + 184) & 7) == 0;
    v10 = 0LL;
    v113 = 0LL;
    if ( v61 && (((unsigned __int8)*a3 >> 1) & 7) != 0 )
      *a3 &= 0xFFFFFFFFFFFFFFF1uLL;
    v11 = v112[0];
  }
  CurrentThread = KeGetCurrentThread();
  v111 = 0;
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v13 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v13 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v69 = 2;
      if ( v13 < 2 )
        v69 = v13;
      v13 = v69;
    }
  }
  v14 = a6;
  v15 = 5;
  v16 = a5;
  if ( v10 )
  {
    if ( (a6 & 2) != 0 )
    {
      v111 = 9;
    }
    else if ( v13 < 5 )
    {
      v111 = 7;
    }
    else if ( (a5 & 1) != 0 && (a5 & 0x20) == 0 )
    {
      v111 = 1;
    }
    v11 = v111 | (16 * (a4 & 7));
  }
  else if ( v13 <= 5 )
  {
    v13 = 5;
  }
  if ( (a6 & 1) != 0 )
  {
    MiLockPageAtDpcInline(BugCheckParameter2);
    v81 = MiReleaseWsSwapReservationPfn(BugCheckParameter2);
    v82 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL));
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v81 )
      MiReleasePageFileInfo(v82, v81, 1LL);
    v16 = a5;
  }
  v17 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v17 & 8) == 0 )
    v15 = v17 & 7;
  v18 = v15 < v13;
  v19 = BugCheckParameter2;
  if ( v18 )
  {
    v120 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v120);
      while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
    }
    *(_BYTE *)(BugCheckParameter2 + 35) ^= (v13 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v16 = a5;
  }
  if ( (*(_BYTE *)v19 & 1) == 0 )
  {
    v121 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v121);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    if ( (*(_QWORD *)v19 & 1) == 0 )
      *(_QWORD *)v19 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v16 = a5;
  }
  v20 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (v16 & 1) != 0 )
  {
    v21 = *(_BYTE *)(a1 + 184) & 7;
    if ( v21 == 2 )
    {
      v16 |= 0x8000000000000000uLL;
      a5 = v16;
    }
    else if ( (MiFlags & 0x10000) != 0
           && (v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL)
           && (v16 & 0x8000000000000000uLL) == 0
           && ((MiFlags & 0x40000) != 0 || v21) )
    {
      MiLockPageAtDpcInline(v19);
      if ( !(unsigned int)MiGetPagePrivilege(v19) )
        MiMarkPfnVerified(v19);
      v10 = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v16 = a5;
      v20 = 0xFFFFF6FB7DBED7F8uLL;
    }
    if ( v125 )
    {
      if ( MiGetVirtualFaultPageInfo(v125, v9, 0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBED7F8uLL) )
      {
        v84 = *(_DWORD *)(v83 + 48);
        if ( (v84 & 0x20) == 0 || *(__int64 *)(v19 + 8) < 0 )
        {
          if ( (v84 & 0x10) != 0 && v111 < 6u )
          {
            v111 = 6;
            v11 = v11 & 0xF0 | 6;
          }
          if ( ((v84 & 1) == 0 || (v16 & 0x42) != 0) && ((v84 & 2) == 0 || (v16 & 0x8000000000000000uLL) == 0) )
          {
            v85 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&a5);
            MiFillVirtualFaultInfo(v86, (v85 >> 12) & 0xFFFFFFFFFLL, v16);
            if ( (*(_DWORD *)(v87 + 48) & 0x20) != 0 )
              MiCompleteSecureProcessFault(v19);
          }
        }
      }
      v20 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v22 = (_BYTE *)v113;
    if ( v113 )
    {
      v10 = 0x80FFFFFFFFFFFFFFuLL;
      v115 = 1;
      v16 = v16 & 0x80FFFFFFFFFFFFFFuLL | ((v11 & 0x70 | (unsigned __int64)(v11 & 0xF)) << 56);
      a5 = v16;
    }
    v23 = (unsigned __int64)v126;
    *v126 = v16;
    if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v23, v16);
  }
  else
  {
    v22 = (_BYTE *)v113;
  }
  if ( v22 && !v115 )
    *v22 = v11;
  if ( (v14 & 2) != 0 )
    goto LABEL_73;
  v24 = &dword_1403CCD68;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v25 = &dword_1403CCD68;
  else
    v25 = (volatile signed __int32 *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v10) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25, v10);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v116 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v88 = SchedulerAssist[5];
        SchedulerAssist[5] = v88 + 1;
        if ( v88 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v25, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      LOBYTE(v77) = -1;
      v116 = ExpWaitForSpinLockExclusiveAndAcquire(v25, v77);
    }
    v28 = *v25;
    while ( (v28 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v28 & 0x40000000) == 0 )
      {
        v89 = _InterlockedCompareExchange(v25, v28 | 0x40000000, v28);
        v61 = v28 == v89;
        v28 = v89;
        if ( !v61 )
          continue;
      }
      KeYieldProcessorEx(&v116);
      v28 = *v25;
    }
  }
  if ( !v117 )
    goto LABEL_50;
  v29 = *(_QWORD *)(a1 + 120);
  if ( v29 < *(_QWORD *)(a1 + 112) || (*(_BYTE *)(a1 + 187) & 8) != 0 )
    goto LABEL_50;
  v30 = *(_QWORD *)(a1 + 136);
  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v30 <= v31 )
  {
LABEL_49:
    if ( (*(_BYTE *)(a1 + 184) & 0x40) == 0 || v29 < *(_QWORD *)(a1 + 152) )
      goto LABEL_50;
    goto LABEL_141;
  }
  v32 = *(_QWORD **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v33 = v32[858];
  if ( (v30 & 0x3F) != 0 )
  {
    v34 = -1LL;
  }
  else
  {
    v34 = v32[880];
    if ( v34 < v33 / 0x14 && v30 >= v33 / 0x14 )
      goto LABEL_224;
  }
  if ( v30 - v31 < 3 * (v33 >> 2) )
  {
LABEL_48:
    v22 = (_BYTE *)v113;
    goto LABEL_49;
  }
  v90 = v32[846];
  if ( (unsigned int)MiGetStandbyRepurposed(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174)), 1LL) == *(_DWORD *)(v90 + 44) )
  {
    v19 = BugCheckParameter2;
    goto LABEL_48;
  }
  if ( v91 )
    v34 = v32[880];
  v92 = *(_QWORD *)(v90 + 2392);
  v19 = BugCheckParameter2;
  if ( v34 >= 10 * v92 )
    goto LABEL_48;
LABEL_224:
  v22 = (_BYTE *)v113;
LABEL_141:
  *(_BYTE *)(a1 + 187) = HIBYTE(*(_DWORD *)(a1 + 184)) | 8;
LABEL_50:
  ++*(_QWORD *)(a1 + 136);
  v35 = 0xFFFFF68000000000uLL;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    ++*(_QWORD *)(a1 + 120);
    v36 = 1;
  }
  else
  {
    v36 = 0;
  }
  v37 = *(_QWORD *)(a1 + 120);
  if ( v37 > *(_QWORD *)(a1 + 160) )
    *(_QWORD *)(a1 + 160) = v37;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    ++qword_1403CCDC8;
    if ( v36 == 1 )
      ++qword_1403CCDD0;
    if ( qword_1403CCDD0 > (unsigned __int64)qword_1403CCDD8 )
      qword_1403CCDD8 = qword_1403CCDD0;
  }
  if ( (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) == 0 )
  {
    ++*(_QWORD *)(a1 + 144);
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(a1 + 128);
  }
  v20 = *(unsigned __int8 *)(a1 + 184);
  if ( (v20 & 7) < 2 )
    goto LABEL_59;
  v54 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v55 = (unsigned int)(v20 & 7) - 2;
  v56 = *(_QWORD *)(v54 + 4288) + *(_QWORD *)(a1 + 136);
  if ( v56 > *(_QWORD *)(v54 + 8 * v55 + 4296) )
  {
    *(_QWORD *)(v54 + 8 * v55 + 4296) = v56;
    v20 = *(unsigned __int8 *)(a1 + 184);
  }
  LOBYTE(v20) = v20 & 7;
  if ( (_BYTE)v20 != 4 )
    goto LABEL_59;
  if ( PsNtosImageBase
    && (v9 < PsNtosImageEnd && v9 >= (unsigned __int64)PsNtosImageBase
     || v9 < PsHalImageEnd && v9 >= (unsigned __int64)PsHalImageBase) )
  {
    LODWORD(xmmword_1403CB5A0) = xmmword_1403CB5A0 + 1;
    goto LABEL_59;
  }
  if ( (unsigned int)MiGetSystemRegionType(v9) != 12 )
    goto LABEL_59;
  v112[0] = 17;
  v57 = 0LL;
  v58 = (__int64)(((v35 + ((v9 >> 9) & 0x7FFFFFFFF8LL)) << 25) - v124) >> 16;
  MmLockLoadedModuleListShared(v112);
  v59 = (_QWORD *)qword_1403CB5B8;
  if ( !qword_1403CB5B8 )
    goto LABEL_100;
  while ( 1 )
  {
    v60 = *(v59 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v58 > *((unsigned int *)v59 - 42) + v60 - 1 )
    {
      v59 = (_QWORD *)v59[1];
      goto LABEL_99;
    }
    if ( v58 >= v60 )
      break;
    v59 = (_QWORD *)*v59;
LABEL_99:
    if ( !v59 )
      goto LABEL_100;
  }
  if ( v59 )
    v57 = v59 - 29;
LABEL_100:
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( v112[0] < 0xFu )
    __writecr8(v112[0]);
  v35 = 0xFFFFF68000000000uLL;
  if ( v57 )
    ++DWORD1(xmmword_1403CB5A0);
LABEL_59:
  if ( v22 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    if ( v9 < v35 || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v38 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v20 = 0xFFFFF6FB7DBED000uLL;
      v39 = *(_QWORD *)v38;
      if ( v38 >= 0xFFFFF6FB7DBED000uLL
        && v38 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v39 & 1) != 0
        && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        v93 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v93 )
        {
          v94 = *(_QWORD *)(v93 + 8 * ((v38 >> 3) & 0x1FF));
          v95 = v39 | 0x20;
          if ( (v94 & 0x20) == 0 )
            v95 = v39;
          v39 = v95;
          if ( (v94 & 0x42) != 0 )
            v39 = v95 | 0x42;
        }
      }
      v122 = v39;
      if ( (unsigned __int64)&v122 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v122 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v39 & 1) != 0
        && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        v96 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v96 )
        {
          v97 = *(_QWORD *)(v96 + 8 * (((unsigned __int64)&v122 >> 3) & 0x1FF));
          v98 = v39 | 0x20;
          if ( (v97 & 0x20) == 0 )
            v98 = v39;
          v39 = v98;
          if ( (v97 & 0x42) != 0 )
            v39 = v98 | 0x42;
        }
      }
      v40 = (unsigned __int64 *)(48 * ((v39 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      v41 = *v40;
      v42 = *v40 >> 4;
      if ( (v42 & 0x3FF) != 0 )
      {
        v20 = v111;
        v43 = (v41 >> 14) & 7;
        if ( v111 == v43 )
        {
          *v40 = v41 ^ ((unsigned __int16)v41 ^ (unsigned __int16)(16 * (v42 + 1))) & 0x3FF0;
        }
        else if ( v111 > v43 )
        {
          v20 = v41 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v111 & 7) << 14) | 0x10;
          *v40 = v20;
        }
      }
    }
    ++*(_QWORD *)(a1 + 8LL * v111 + 40);
    if ( v111 == 7 )
    {
      v50 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174));
      v51 = *(_QWORD *)(v50 + 6768);
      if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v51 + 64) )
      {
        v52 = (__int64 *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 24) )
        {
          v53 = (__int64 *)(v50 + 6776);
          if ( *(__int64 **)(v50 + 6776) == v52 )
            goto LABEL_85;
          v118 = 0LL;
          v62 = &qword_1403CC4C0;
          v119 = (volatile signed __int64 *)&qword_1403CC4C0;
          v63 = KeGetCurrentPrcb();
          v64 = v63->SchedulerAssist;
          if ( v64 )
          {
            if ( v63->NestingLevel <= 1u )
            {
              v99 = v64[5];
              v64[5] = v99 + 1;
              if ( v99 == -1 && !*((_BYTE *)v64 + 25) && !*((_BYTE *)v64 + 27) )
                KiPerformUnboostKick(v63);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v118, v62);
          }
          else
          {
            v65 = _InterlockedExchange64((volatile __int64 *)&qword_1403CC4C0, (__int64)&v118);
            if ( v65 )
              KxWaitForLockOwnerShip(&v118);
          }
          if ( *(_BYTE *)(v51 + 53) || (v78 = *v52) == 0 )
          {
            *(_BYTE *)(v51 + 54) = 1;
          }
          else
          {
            v79 = *(__int64 ***)(a1 + 32);
            if ( *(__int64 **)(v78 + 8) != v52 || *v79 != v52 )
              __fastfail(3u);
            *v79 = (__int64 *)v78;
            *(_QWORD *)(v78 + 8) = v79;
            v80 = *v53;
            if ( *(__int64 **)(*v53 + 8) != v53 )
              __fastfail(3u);
            *v52 = v80;
            *(_QWORD *)(a1 + 32) = v53;
            *(_QWORD *)(v80 + 8) = v52;
            *v53 = (__int64)v52;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v118, retaddr, 0LL, v20);
          }
          else
          {
            _m_prefetchw(&v118);
            v66 = v118;
            if ( !v118 )
            {
              if ( (__int64 *)_InterlockedCompareExchange64(v119, 0LL, (signed __int64)&v118) == &v118 )
                goto LABEL_138;
              v66 = KxWaitForLockChainValid(&v118, v65, 0LL, v20);
            }
            v118 = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v66 + 8), 1uLL);
          }
LABEL_138:
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          if ( !v68 || v67->NestingLevel > 1u || (v100 = *((_DWORD *)v68 + 5) - 1, (*((_DWORD *)v68 + 5) = v100) != 0) )
          {
LABEL_85:
            v22 = (_BYTE *)v113;
          }
          else
          {
            if ( !v68[25] && !v68[27] )
              KiPerformUnboostKick(v67);
            v22 = (_BYTE *)v113;
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v24 = (LONG *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
  else
    *v24 = 0;
  v44 = KeGetCurrentPrcb();
  v45 = v44->SchedulerAssist;
  if ( v45 )
  {
    if ( v44->NestingLevel <= 1u )
    {
      v101 = v45[5] - 1;
      v45[5] = v101;
      if ( !v101 && !*((_BYTE *)v45 + 25) && !*((_BYTE *)v45 + 27) )
        KiPerformUnboostKick(v44);
    }
  }
LABEL_73:
  if ( !v22 )
    goto LABEL_78;
  v46 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v47 = *(_QWORD *)v46;
  v20 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v46 >= 0xFFFFF6FB7DBED000uLL
    && v46 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v47 & 1) != 0
    && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
  {
    v102 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v102 )
    {
      v103 = *(_QWORD *)(v102 + 8 * ((v46 >> 3) & 0x1FF));
      v104 = v47 | 0x20;
      if ( (v103 & 0x20) == 0 )
        v104 = *(_QWORD *)v46;
      v47 = v104;
      if ( (v103 & 0x42) != 0 )
        v47 = v104 | 0x42;
    }
  }
  v123 = v47;
  if ( (unsigned __int64)&v123 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v123 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v47 & 1) != 0
    && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
  {
    v105 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v105 )
    {
      v106 = *(_QWORD *)(v105 + 8 * (((unsigned __int64)&v123 >> 3) & 0x1FF));
      v107 = v47 | 0x20;
      if ( (v106 & 0x20) == 0 )
        v107 = v47;
      v47 = v107;
      if ( (v106 & 0x42) != 0 )
        v47 = v107 | 0x42;
    }
  }
  v48 = (_DWORD *)(48 * ((v47 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( ((*v48 >> 4) & 0x3FF) != 0 )
    goto LABEL_78;
  v70 = v124;
  v71 = (__int64)((v46 << 25) - v124) >> 16;
  memset(v127, 0, sizeof(v127));
  v72 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 2 )
  {
    v73 = *(_QWORD *)v71;
    if ( v71 < 0xFFFFF6FB7DBED000uLL
      || v71 > v72
      || (MiFlags & 0x1800000) == 0
      || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
    {
LABEL_153:
      if ( (v73 & 1) != 0 )
      {
        v76 = MiGetWsleContents(v73, (__int64)((v71 << 25) - v70) >> 16) & 0xF;
        if ( (unsigned __int8)(v76 - 8) > 2u )
          ++v127[v76];
      }
    }
    else if ( (v73 & 1) != 0 )
    {
      if ( (v73 & 0x20) == 0 || (v73 & 0x42) == 0 )
      {
        v108 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v108 )
        {
          v109 = *(_QWORD *)(v108 + 8 * ((v71 >> 3) & 0x1FF));
          v110 = v73 | 0x20;
          if ( (v109 & 0x20) == 0 )
            v110 = *(_QWORD *)v71;
          v73 = v110;
          if ( (v109 & 0x42) != 0 )
            v73 = v110 | 0x42;
        }
      }
      goto LABEL_153;
    }
    v71 += 8LL;
    if ( (v71 & 0xFFF) != 0 )
      continue;
    break;
  }
  v74 = 8;
  while ( 1 )
  {
    v75 = v127[(unsigned __int8)--v74];
    if ( v75 )
      break;
    if ( !v74 )
      goto LABEL_78;
  }
  *(_QWORD *)v48 = *(_QWORD *)v48 & 0xFFFFFFFFFFFE000FuLL | (16 * (v75 & 0x3FF | ((unsigned __int64)(v74 & 7) << 10)));
LABEL_78:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(v19, *(_BYTE *)(a1 + 184) & 7, v9, v20);
  return 1LL;
}
