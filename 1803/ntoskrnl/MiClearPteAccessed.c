/*
 * XREFs of MiClearPteAccessed @ 0x140128A30
 * Callers:
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x1400ADE10 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140259F10 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14003DFCC (MiUnlockNestedPageTableWritePte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCompressTbFlushList @ 0x1400B06D0 (MiCompressTbFlushList.c)
 *     MiVolunteerForTrimFirst @ 0x1400C4778 (MiVolunteerForTrimFirst.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v8; // r11
  int v11; // esi
  char v12; // cl
  unsigned __int64 v13; // r12
  char v14; // cl
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  char v29; // cl
  unsigned int v30; // r8d
  __int64 v31; // r10
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r9
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned int v39; // ecx
  __int64 v40; // rax
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // r10
  __int64 v45; // r9
  unsigned __int8 v46; // dl
  volatile signed __int64 v47; // rdx
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  char v50; // r8^7
  int v51; // ebx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // r10
  __int64 v55; // r9
  _BYTE *v56; // r13
  unsigned __int8 v57; // r14
  bool v58; // zf
  char v59; // r15
  BOOL v60; // edi
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // r8
  char v65; // r15
  volatile signed __int32 *v66; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v69; // eax
  signed __int32 v70; // edx
  signed __int32 v71; // eax
  __int64 v72; // rbx
  unsigned __int64 v73; // r11
  unsigned __int64 *v74; // rdx
  unsigned __int64 v75; // r10
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // r9
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 *v85; // r9
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // rcx
  __int64 v89; // rax
  volatile signed __int64 v90; // rdx
  unsigned __int64 v91; // r9
  unsigned __int64 v92; // r8
  __int64 v93; // rax
  char v94; // r8
  bool v95; // r10
  signed __int64 v96; // rax
  signed __int64 v97; // rtt
  int v98; // edi
  unsigned __int64 *v99; // rdx
  unsigned __int64 v100; // r8
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  unsigned __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rdx
  unsigned __int64 *v108; // r9
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // r8
  unsigned __int64 v111; // rax
  LONG *v112; // rcx
  struct _KPRCB *v113; // rcx
  _DWORD *v114; // rdx
  int v115; // eax
  __int64 v116; // r12
  unsigned __int64 v117; // rdx
  unsigned __int64 v118; // r9
  unsigned __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // r8
  __int64 Process; // rcx
  __int64 v123; // r8
  __int64 v124; // rax
  __int64 v125; // r8
  _DWORD *v126; // r10
  __int64 v127; // r11
  unsigned __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // rax
  char v132; // r8
  int WsleContents; // eax
  char v134; // cl
  int v135; // r8d
  char v136; // [rsp+20h] [rbp-59h]
  int v137; // [rsp+24h] [rbp-55h] BYREF
  int v138; // [rsp+28h] [rbp-51h]
  int v139; // [rsp+2Ch] [rbp-4Dh] BYREF
  __int64 v140; // [rsp+30h] [rbp-49h]
  unsigned __int64 v141; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v142; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v143; // [rsp+48h] [rbp-31h] BYREF
  __int64 v144; // [rsp+50h] [rbp-29h]
  _QWORD v145[4]; // [rsp+58h] [rbp-21h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+4Fh]

  v140 = a1;
  v8 = 0xFFFFF68000000000uLL;
  v11 = 0;
  v12 = *(_BYTE *)(a1 + 184);
  v144 = 0LL;
  v13 = (__int64)(a3 << 25) >> 16;
  v14 = v12 & 7;
  if ( v14 && v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  if ( v14 )
  {
    v139 = 0;
    v11 = 1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v139);
        while ( *(__int64 *)(a2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) );
      v8 = 0xFFFFF68000000000uLL;
    }
    if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0
      || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u )
    {
      goto LABEL_22;
    }
  }
  v16 = 0xFFFFF6FB7DBED7F8uLL;
  if ( a4 )
  {
    if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v18 = *(_QWORD *)a3;
      v19 = *(_QWORD *)a3;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL
        && a3 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v20 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v20 )
        {
          v19 |= 0x20uLL;
          v21 = *(_QWORD *)(v20 + 8 * ((a3 >> 3) & 0x1FF));
          if ( (v21 & 0x20) == 0 )
            v19 = v18;
          if ( (v21 & 0x42) != 0 )
            v19 |= 0x42uLL;
        }
      }
      if ( a3 >= 0xFFFFF6FB7DBED000uLL
        && a3 <= v16
        && (unsigned int)MiPteHasShadow()
        && (v18 & 1) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8 * ((a3 >> 3) & 0x1FF));
          v24 = v18 | 0x20;
          if ( (v23 & 0x20) == 0 )
            v24 = v18;
          v18 = v24;
          if ( (v23 & 0x42) != 0 )
            v18 = v24 | 0x42;
        }
      }
      v25 = v19 & 0xF0FFFFFFFFFFFFDFuLL;
      v26 = (v25 | ((HIBYTE(v18) & 0xF) << 56)) ^ ((v25 | ((HIBYTE(v18) & 0xF) << 56)) ^ (v18 >> 60 << 60)) & 0x7000000000000000LL;
      *(_QWORD *)a3 = v26;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= v16 )
        MiWritePteShadow(a3, v26, v25);
    }
    else
    {
      MiLockPageTableInternal(a1, a3, 0LL);
      if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0
        || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u )
      {
        MiUnlockPageTableInternal(a1, a3);
        if ( v11 != 1 )
          return 0LL;
LABEL_22:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
      v17 = MI_READ_PTE_LOCK_FREE(a3);
      MiUnlockNestedPageTableWritePte(a1, (volatile __int64 *)a3, v17 & 0xCFFFFFFFFFFFFFDFuLL);
      v8 = 0xFFFFF68000000000uLL;
    }
    if ( v11 == 1 )
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v27 = 1LL;
    v28 = v13;
    if ( *(_DWORD *)a4 != 1 )
    {
      v29 = *(_BYTE *)(a4 + 4);
      if ( (v29 & 8) == 0 && v13 >= v8 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(a4 + 4) = v29 | 8;
    }
    v30 = *(_DWORD *)(a4 + 12);
    if ( v30 )
    {
      if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
      {
        v31 = a4 + 8LL * (v30 - 1);
        v32 = *(_QWORD *)(v31 + 24);
        if ( (v32 & 0xC00) == 0 )
        {
          v33 = *(_QWORD *)(v31 + 24) & 0x3FFLL;
          if ( (v32 & 0xFFFFFFFFFFFFF000uLL) + ((v33 + 1) << 12) == v13 && v33 + 1 >= v33 && v33 + 1 <= 0x3FF )
          {
            ++*(_QWORD *)(a4 + 16);
            *(_QWORD *)(v31 + 24) = ((unsigned __int16)v32 ^ (unsigned __int16)(v32 + 1)) & 0x3FF ^ v32;
            goto LABEL_84;
          }
        }
      }
      if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
      {
        v34 = a4 + 8LL * (v30 - 1);
        v35 = *(_QWORD *)(v34 + 24);
        if ( (v35 & 0xC00) == 0 && (v35 & 0xFFFFFFFFFFFFF000uLL) == v13 + 4096 )
        {
          v36 = *(_QWORD *)(v34 + 24) & 0x3FFLL;
          if ( v36 + 1 >= v36 && v36 + 1 <= 0x3FF )
          {
            ++*(_QWORD *)(a4 + 16);
            *(_QWORD *)(v34 + 24) = ((unsigned __int16)(v35 - 4096) ^ (unsigned __int16)(v35 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v35 - 4096);
            goto LABEL_84;
          }
        }
      }
    }
    if ( v30 < *(_DWORD *)(a4 + 8) )
    {
      while ( 1 )
      {
        v37 = 1024LL;
        if ( (unsigned __int64)(v27 - 1) <= 0x3FF )
          v37 = v27;
        v27 -= v37;
        v38 = v28 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v37 - 1) & 0x3FF;
        v28 += v37 << 12;
        *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v38;
        v39 = *(_DWORD *)(a4 + 12);
        *(_QWORD *)(a4 + 16) += v37;
        if ( v39 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
        {
          qsort((void *)(a4 + 24), v39, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
          MiCompressTbFlushList(a4);
          v40 = *(unsigned int *)(a4 + 12);
          if ( (_DWORD)v40 == *(_DWORD *)(a4 + 8) )
            break;
        }
        if ( !v27 )
          goto LABEL_84;
      }
      if ( v27 )
      {
        *(_BYTE *)(a4 + 5) = 1;
        *(_QWORD *)(a4 + 16) = v40;
      }
    }
    else
    {
      *(_BYTE *)(a4 + 5) = 1;
    }
  }
  else
  {
    if ( v11 == 1 )
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !a6 )
      return 1LL;
  }
LABEL_84:
  v41 = 0xFFFFF68000000000uLL;
  if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v42 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v47 = *(_QWORD *)v42;
    if ( v42 >= 0xFFFFF6FB7DBED000uLL
      && v42 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v47 & 1) != 0
      && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
    {
      v48 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v48 )
      {
        v49 = *(_QWORD *)(v48 + 8 * ((v42 >> 3) & 0x1FF));
        v50 = HIBYTE(v47);
        if ( (v49 & 0x20) == 0 )
          v50 = HIBYTE(v47);
        HIBYTE(v47) = v50;
        if ( (v49 & 0x42) != 0 )
          HIBYTE(v47) = v50;
      }
    }
    v46 = HIBYTE(v47) & 0xF;
  }
  else
  {
    v42 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v43 = MI_READ_PTE_LOCK_FREE(v42);
    v46 = (*(_BYTE *)(v45 + 48 * (v44 & (v43 >> 12))) >> 1) & 7;
  }
  v51 = v46;
  if ( a5 && v46 != 7 )
  {
    MiLogPageAccess(a1, a3);
    v41 = 0xFFFFF68000000000uLL;
  }
  if ( v51 )
    return 1LL;
  if ( v13 < v41 || v13 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v61 = *(_QWORD *)v42;
    v56 = 0LL;
    v138 = 1;
    if ( v42 >= 0xFFFFF6FB7DBED000uLL
      && v42 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v61 & 1) != 0
      && ((v61 & 0x20) == 0 || (v61 & 0x42) == 0) )
    {
      v62 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v62 )
      {
        v63 = *(_QWORD *)(v62 + 8 * ((v42 >> 3) & 0x1FF));
        v64 = v61 | 0x20;
        if ( (v63 & 0x20) == 0 )
          v64 = v61;
        v61 = v64;
        if ( (v63 & 0x42) != 0 )
          v61 = v64 | 0x42;
      }
    }
    v65 = (v61 >> 60) & 7;
    v53 = HIBYTE(v61);
    v59 = v53 & 0xF | (16 * v65);
    v57 = v59 & 0xF;
    v60 = (v59 & 0xF) == 8;
  }
  else
  {
    v138 = 0;
    v52 = MI_READ_PTE_LOCK_FREE(v42);
    v56 = (_BYTE *)(v55 + 48 * (v54 & (v52 >> 12)));
    v57 = (*v56 >> 1) & 7;
    v58 = (*(_BYTE *)(a1 + 184) & 7) == 0;
    v59 = v136;
    v60 = !v58;
  }
  if ( (*(_BYTE *)(v140 + 184) & 7) == 2 )
    v66 = &dword_1403CCD68;
  else
    v66 = (volatile signed __int32 *)(v140 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v53) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v66, v53);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v137 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v69 = SchedulerAssist[5];
        SchedulerAssist[5] = v69 + 1;
        if ( v69 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v66, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      v137 = ExpWaitForSpinLockExclusiveAndAcquire(v66, 0xFFu);
    }
    v70 = *v66;
    while ( (v70 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v70 & 0x40000000) == 0 )
      {
        v71 = _InterlockedCompareExchange(v66, v70 | 0x40000000, v70);
        v58 = v70 == v71;
        v70 = v71;
        if ( !v58 )
          continue;
      }
      KeYieldProcessorEx(&v137);
      v70 = *v66;
    }
  }
  v72 = v140;
  if ( v57 == 8 )
    --*(_QWORD *)(*(_QWORD *)(v140 + 16) + 32LL);
  v73 = 0xFFFFF6FB40000000uLL;
  if ( v60 )
    goto LABEL_171;
  if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v74 = (unsigned __int64 *)(((v13 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v75 = 0xFFFFF6FB7DBED000uLL;
    v76 = *v74;
    v77 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v74 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v74 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v76 & 1) != 0
      && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
    {
      v79 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v79 )
      {
        v80 = *(_QWORD *)(v79 + 8 * ((v78 >> 3) & 0x1FF));
        v81 = v76 | 0x20;
        if ( (v80 & 0x20) == 0 )
          v81 = v76;
        v76 = v81;
        if ( (v80 & 0x42) != 0 )
          v76 = v81 | 0x42;
      }
    }
    v141 = v76;
    if ( (unsigned __int64)&v141 >= v75
      && (unsigned __int64)&v141 <= v77
      && (unsigned int)MiPteHasShadow()
      && (v76 & 1) != 0
      && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
    {
      v82 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v82 )
      {
        v83 = *(_QWORD *)(v82 + 8 * (((unsigned __int64)&v141 >> 3) & 0x1FF));
        v84 = v76 | 0x20;
        if ( (v83 & 0x20) == 0 )
          v84 = v76;
        v76 = v84;
        if ( (v83 & 0x42) != 0 )
          v76 = v84 | 0x42;
      }
    }
    v85 = (__int64 *)(48 * ((v76 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v86 = *v85;
    v87 = (unsigned __int64)*v85 >> 4;
    if ( (v87 & 0x3FF) != 0 )
    {
      v88 = (v86 >> 14) & 7;
      if ( v57 == v88 )
      {
        v89 = v86 ^ ((unsigned __int16)v86 ^ (unsigned __int16)(16 * (v87 - 1))) & 0x3FF0;
      }
      else
      {
        if ( v57 <= v88 )
          goto LABEL_169;
        v89 = v86 ^ ((unsigned int)v86 ^ (v57 << 14)) & 0x1C000 | 0x3FF0;
      }
      *v85 = v89;
    }
  }
LABEL_169:
  --*(_QWORD *)(v72 + 8LL * v57 + 40);
  if ( v57 == 7 )
  {
    MiVolunteerForTrimFirst(v72, -1LL);
    v73 = 0xFFFFF6FB40000000uLL;
  }
LABEL_171:
  v90 = *(_QWORD *)v42;
  v91 = 0xFFFFF6FB7DBED000uLL;
  if ( v42 >= 0xFFFFF6FB7DBED000uLL
    && v42 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v90 & 1) != 0
    && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
  {
    v92 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v92 )
    {
      v93 = *(_QWORD *)(v92 + 8 * ((v42 >> 3) & 0x1FF));
      v94 = v90 | 0x20;
      if ( (v93 & 0x20) == 0 )
        v94 = v90;
      LOBYTE(v90) = v94;
      if ( (v93 & 0x42) != 0 )
        LOBYTE(v90) = v94 | 0x42;
    }
  }
  v95 = (v90 & 0x20) == 0 || v13 <= 0x7FFFFFFEFFFFLL && (*(_BYTE *)(v72 + 184) & 7) == 0 && *(_QWORD *)(v72 + 584);
  if ( v56 )
  {
    *(_QWORD *)v56 = *(_QWORD *)v56 & 0xFFFFFFFFFFFFFFF1uLL | (2LL * v95);
  }
  else
  {
    v96 = *(_QWORD *)v42;
    do
    {
      v97 = v96;
      v96 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)v42,
              ((unsigned __int64)(v95 & 0x7F | v59 & 0x70u) << 56) | v96 & 0x80FFFFFFFFFFFFFFuLL,
              v96);
    }
    while ( v97 != v96 );
  }
  v98 = v138;
  if ( v138 || (*(_BYTE *)(v72 + 184) & 7) == 0 )
  {
    if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v99 = (unsigned __int64 *)(v73 + ((v13 >> 18) & 0x3FFFFFF8));
      v100 = *v99;
      if ( (unsigned __int64)v99 >= v91
        && (unsigned __int64)v99 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v100 & 1) != 0
        && ((v100 & 0x20) == 0 || (v100 & 0x42) == 0) )
      {
        v102 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v102 )
        {
          v103 = *(_QWORD *)(v102 + 8 * ((v101 >> 3) & 0x1FF));
          v104 = v100 | 0x20;
          if ( (v103 & 0x20) == 0 )
            v104 = v100;
          v100 = v104;
          if ( (v103 & 0x42) != 0 )
            v100 = v104 | 0x42;
        }
      }
      v142 = v100;
      if ( (unsigned __int64)&v142 >= v91
        && (unsigned __int64)&v142 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v100 & 1) != 0
        && ((v100 & 0x20) == 0 || (v100 & 0x42) == 0) )
      {
        v105 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v105 )
        {
          v106 = *(_QWORD *)(v105 + 8 * (((unsigned __int64)&v142 >> 3) & 0x1FF));
          v107 = v100 | 0x20;
          if ( (v106 & 0x20) == 0 )
            v107 = v100;
          v100 = v107;
          if ( (v106 & 0x42) != 0 )
            v100 = v107 | 0x42;
        }
      }
      v108 = (unsigned __int64 *)(48 * ((v100 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      v109 = *v108;
      v110 = *v108 >> 4;
      if ( (v110 & 0x3FF) != 0 )
      {
        v111 = (v109 >> 14) & 7;
        if ( v95 == v111 )
        {
          *v108 = v109 ^ ((unsigned __int16)v109 ^ (unsigned __int16)(16 * (v110 + 1))) & 0x3FF0;
        }
        else if ( v95 > v111 )
        {
          *v108 = ((unsigned __int64)v95 << 14) | v109 & 0xFFFFFFFFFFFE001FuLL | 0x10;
        }
      }
    }
    ++*(_QWORD *)(v72 + 8LL * v95 + 40);
  }
  v112 = &dword_1403CCD68;
  if ( (*(_BYTE *)(v72 + 184) & 7) != 2 )
    v112 = (LONG *)(v72 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v112, retaddr);
  else
    *v112 = 0;
  v113 = KeGetCurrentPrcb();
  v114 = v113->SchedulerAssist;
  if ( v114 )
  {
    if ( v113->NestingLevel <= 1u )
    {
      v115 = v114[5] - 1;
      v114[5] = v115;
      if ( !v115 && !*((_BYTE *)v114 + 25) && !*((_BYTE *)v114 + 27) )
        KiPerformUnboostKick(v113);
    }
  }
  if ( !v98 )
    return 1LL;
  v116 = (v13 >> 18) & 0x3FFFFFF8;
  v117 = *(_QWORD *)(v116 - 0x904C0000000LL);
  v118 = v116 - 0x904C0000000LL;
  if ( (unsigned __int64)(v116 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
    && v118 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v117 & 1) != 0
    && ((v117 & 0x20) == 0 || (v117 & 0x42) == 0) )
  {
    v119 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v119 )
    {
      v120 = *(_QWORD *)(v119 + 8 * ((v118 >> 3) & 0x1FF));
      v121 = v117 | 0x20;
      if ( (v120 & 0x20) == 0 )
        v121 = v117;
      v117 = v121;
      if ( (v120 & 0x42) != 0 )
        v117 = v121 | 0x42;
    }
  }
  v143 = v117;
  Process = (__int64)&v143;
  if ( (unsigned __int64)&v143 >= 0xFFFFF6FB7DBED000uLL )
  {
    Process = (__int64)&v143;
    if ( (unsigned __int64)&v143 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v117 & 1) != 0
      && ((v117 & 0x20) == 0 || (v117 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v123 = *(_QWORD *)(Process + 1544);
      if ( v123 )
      {
        v124 = *(_QWORD *)(v123 + 8 * (((unsigned __int64)&v143 >> 3) & 0x1FF));
        v125 = v117 | 0x20;
        Process = (unsigned __int8)v124;
        LOBYTE(Process) = v124 & 0x20;
        if ( (v124 & 0x20) == 0 )
          v125 = v117;
        v117 = v125;
        if ( (v124 & 0x42) != 0 )
          v117 = v125 | 0x42;
      }
    }
  }
  v126 = (_DWORD *)(48 * ((v117 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( ((*v126 >> 4) & 0x3FF) != 0 )
    return 1LL;
  v127 = v144;
  v128 = (__int64)((v118 << 25) - v144) >> 16;
  memset(v145, 0, sizeof(v145));
  do
  {
    v129 = *(_QWORD *)v128;
    if ( v128 >= 0xFFFFF6FB7DBED000uLL && v128 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
    {
      if ( (v129 & 1) == 0 )
        goto LABEL_274;
      if ( (v129 & 0x20) == 0 || (v129 & 0x42) == 0 )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v130 = *(_QWORD *)(Process + 1544);
        if ( v130 )
        {
          v131 = *(_QWORD *)(v130 + 8 * ((v128 >> 3) & 0x1FF));
          v132 = v129 | 0x20;
          Process = (unsigned __int8)v131;
          LOBYTE(Process) = v131 & 0x20;
          if ( (v131 & 0x20) == 0 )
            v132 = v129;
          LOBYTE(v129) = v132;
          if ( (v131 & 0x42) != 0 )
            LOBYTE(v129) = v132 | 0x42;
        }
      }
    }
    if ( (v129 & 1) != 0 )
    {
      WsleContents = MiGetWsleContents(Process, (__int64)((v128 << 25) - v127) >> 16);
      LOBYTE(WsleContents) = WsleContents & 0xF;
      Process = (unsigned int)(WsleContents - 8);
      if ( (unsigned __int8)(WsleContents - 8) > 2u )
        ++*((_DWORD *)v145 + (unsigned __int8)WsleContents);
    }
LABEL_274:
    v128 += 8LL;
  }
  while ( (v128 & 0xFFF) != 0 );
  v134 = 8;
  while ( 1 )
  {
    v135 = *((_DWORD *)v145 + (unsigned __int8)--v134);
    if ( v135 )
      break;
    if ( !v134 )
      return 1LL;
  }
  *(_QWORD *)v126 = *(_QWORD *)v126 & 0xFFFFFFFFFFFE000FuLL | (16 * (v135 & 0x3FF | ((unsigned __int64)(v134 & 7) << 10)));
  return 1LL;
}
