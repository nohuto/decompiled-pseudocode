/*
 * XREFs of MiAgePteWorker @ 0x140013050
 * Callers:
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 *     MiAgeWorkingSetEPTCallback @ 0x140259260 (MiAgeWorkingSetEPTCallback.c)
 *     MiSimpleAgePte @ 0x14025A0C0 (MiSimpleAgePte.c)
 *     MiSimpleAgeWorkingSetEPTCallback @ 0x14025A210 (MiSimpleAgeWorkingSetEPTCallback.c)
 * Callees:
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400141A0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockSetPfnPriority @ 0x1400BB5D8 (MiLockSetPfnPriority.c)
 *     MiVolunteerForTrimFirst @ 0x1400C4778 (MiVolunteerForTrimFirst.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiRebuildPageTableLeafAges @ 0x140125A40 (MiRebuildPageTableLeafAges.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiAgePteWorker(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5,
        char a6)
{
  unsigned int *v6; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // bl
  volatile signed __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  _BYTE *v21; // r13
  unsigned __int8 v22; // r12
  bool v23; // zf
  char v24; // r15
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rbx
  unsigned __int64 Process; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v32; // eax
  __int64 v33; // rdx
  unsigned __int32 v34; // edx
  signed __int32 v35; // eax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 *v44; // r9
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  signed __int64 v47; // rax
  signed __int64 v48; // rtt
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // r11
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 *v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  LONG *v61; // rcx
  struct _KPRCB *v62; // rcx
  _DWORD *v63; // rdx
  int v64; // eax
  __int64 v65; // rsi
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r9
  __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  _DWORD *v71; // r11
  __int64 v72; // r10
  unsigned __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rax
  int WsleContents; // eax
  char v77; // cl
  int v78; // edx
  int v79; // ebx
  char v80; // al
  BOOL v81; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v83; // rdx
  char v84; // al
  unsigned int v85; // r13d
  __int64 v86; // r10
  unsigned __int8 v87; // bl
  char v88; // si
  _BYTE *v89; // r12
  unsigned __int8 v90; // r14
  int v91; // r9d
  int v92; // r15d
  unsigned __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned __int8 v97; // r10
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // rdx
  LONG *v102; // rcx
  __int64 SharedVm; // rax
  unsigned __int64 v104; // rcx
  unsigned __int8 v105; // al
  __int64 v106; // r8
  unsigned __int64 v107; // r14
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  unsigned __int64 v112; // r8
  __int64 v113; // rax
  char v114; // r8
  LONG *v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // r9
  unsigned __int8 v118; // dl
  volatile signed __int64 v119; // rdx
  char v120; // r8^7
  char v121; // [rsp+30h] [rbp-79h]
  int v122; // [rsp+34h] [rbp-75h]
  int v123; // [rsp+34h] [rbp-75h]
  int v126; // [rsp+48h] [rbp-61h] BYREF
  unsigned int *v127; // [rsp+50h] [rbp-59h]
  unsigned __int64 v128; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v129; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 v130; // [rsp+68h] [rbp-41h] BYREF
  __int64 v131; // [rsp+70h] [rbp-39h]
  __int64 v132; // [rsp+78h] [rbp-31h]
  _QWORD v133[4]; // [rsp+80h] [rbp-29h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+4Fh]

  v6 = a5;
  v7 = a3;
  v8 = a4;
  v127 = a5;
  v9 = a1;
  v131 = a4;
  v132 = a2;
  v10 = 0xFFFFF68000000000uLL;
  v11 = 0xFFFFF6FB7DBED000uLL;
  v12 = 0xFFFFF6FB7DBED7F8uLL;
  v13 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = *(_QWORD *)v14;
    if ( v14 >= 0xFFFFF6FB7DBED000uLL
      && v14 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8 * ((v14 >> 3) & 0x1FF));
        HIBYTE(v18) = HIBYTE(*(_QWORD *)v14);
        if ( (v19 & 0x20) == 0 )
          v18 = *(_QWORD *)v14;
        HIBYTE(v17) = HIBYTE(v18);
        if ( (v19 & 0x42) != 0 )
          HIBYTE(v17) = HIBYTE(v18);
      }
    }
    v16 = HIBYTE(v17) & 0xF;
  }
  else
  {
    v14 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v15 = MI_READ_PTE_LOCK_FREE(v14);
    v10 = 0xFFFFF68000000000uLL;
    v16 = (*(_BYTE *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
  }
  if ( (a6 & 1) == 0 )
  {
    v84 = *(_BYTE *)(v8 + 35);
    if ( (v84 & 8) != 0 )
      v85 = 5;
    else
      v85 = v84 & 7;
    v86 = 1LL;
    if ( v16 >= 6u )
      goto LABEL_233;
    if ( v85 >= 5 )
    {
      if ( (*a5 & 1) == 0 )
      {
LABEL_233:
        v104 = *(_QWORD *)(v8 + 40);
        if ( (v104 & 0x200000000000000LL) != 0 )
          v105 = *((_BYTE *)v6 + 5);
        else
          v105 = *((_BYTE *)v6 + 4);
        v117 = v105;
        if ( !v105 )
          v117 = 7LL;
        if ( (*(_BYTE *)(v9 + 184) & 7) == 3 )
        {
          v104 >>= 54;
          LOBYTE(v104) = v104 & 7;
          if ( (_BYTE)v104 == 4 )
          {
            v104 = 0x3FFFFFFFFFFFFFFFLL;
            if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v8 + 32) == 1 )
              goto LABEL_297;
          }
        }
        result = *v6;
        if ( (result & 3) != 0 )
        {
          if ( v7 < 0xFFFFF68000000000uLL || v7 > v13 )
          {
            v119 = *(_QWORD *)v14;
            result = 0xFFFFF6FB7DBED000uLL;
            if ( v14 >= 0xFFFFF6FB7DBED000uLL )
            {
              result = 0xFFFFF6FB7DBED7F8uLL;
              if ( v14 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                result = MiPteHasShadow(v104, v119, v10, v117);
                if ( (_DWORD)result )
                {
                  if ( (v119 & 1) != 0 && ((v119 & 0x20) == 0 || (v119 & 0x42) == 0) )
                  {
                    result = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                    if ( result )
                    {
                      v120 = HIBYTE(v119);
                      result = *(_QWORD *)(result + 8 * ((v14 >> 3) & 0x1FF));
                      if ( (result & 0x20) == 0 )
                        v120 = HIBYTE(v119);
                      HIBYTE(v119) = v120;
                      if ( (result & 0x42) != 0 )
                        HIBYTE(v119) = v120;
                    }
                  }
                }
              }
            }
            v118 = HIBYTE(v119) & 0xF;
          }
          else
          {
            result = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v14) >> 12) & 0xFFFFFFFFFLL);
            v118 = (*(_BYTE *)(8 * result - 0x58000000000LL) >> 1) & 7;
          }
          if ( v118 >= (unsigned __int8)v117 || v85 < v6[2] )
          {
LABEL_297:
            ++*((_QWORD *)v6 + 4);
            MiInsertTbFlushEntry(v6 + 16, v7, v86, 0LL);
            result = v6[18];
            if ( v6[19] == (_DWORD)result )
              return MiFreeWsleList(v9, v6 + 16, 0LL);
          }
        }
        return result;
      }
      v87 = v16 + 1;
    }
    else
    {
      v87 = 6;
    }
    if ( v7 < 0xFFFFF68000000000uLL || v7 > v13 )
    {
      v123 = 1;
      v89 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v14)
        && (unsigned int)MiPteHasShadow(v94, v93, v95, v96)
        && ((unsigned __int8)v93 & v97) != 0
        && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
      {
        v98 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v98 )
        {
          v99 = *(_QWORD *)(v98 + 8 * (((unsigned __int64)(unsigned int)v14 >> 3) & 0x1FF));
          v100 = v93 | 0x20;
          if ( (v99 & 0x20) == 0 )
            v100 = v93;
          v93 = v100;
          if ( (v99 & 0x42) != 0 )
            v93 = v100 | 0x42;
        }
      }
      v92 = v96;
      v88 = HIBYTE(v93) & 0xF | (16 * ((v93 >> 60) & 7));
      v90 = HIBYTE(v93) & 0xF;
      LOBYTE(v92) = (HIBYTE(v93) & 0xF) == 8;
    }
    else
    {
      v123 = 0;
      v88 = v121;
      v89 = (_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v14) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      v90 = (*v89 >> 1) & 7;
      v23 = (*(_BYTE *)(v9 + 184) & 7) == 0;
      v92 = v91;
      LOBYTE(v92) = !v23;
    }
    v101 = a1;
    v102 = &dword_1403CCD68;
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v102 = (LONG *)(a1 + 232);
    LOBYTE(v101) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v102, v101);
    else
      ExpAcquireSpinLockExclusive(v102, v101);
    if ( v87 == 8 && *(_QWORD *)(a1 + 112) <= (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 6LL) )
    {
      v9 = a1;
      SharedVm = MiGetSharedVm(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(SharedVm + 40));
    }
    else
    {
      if ( v90 == 8 )
        --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      v23 = v92 == 0;
      v9 = a1;
      if ( v23 )
      {
        v106 = v90;
        v107 = a3;
        MiUpdateWorkingSetAgeDistribution(a1, a3, v106, -1LL);
      }
      else
      {
        v107 = a3;
      }
      if ( v87 < 7u )
      {
        if ( (unsigned int)MiPteInShadowRange(v14)
          && (unsigned int)MiPteHasShadow(v109, v108, v110, v111)
          && (v108 & 1) != 0
          && ((v108 & 0x20) == 0 || (v108 & 0x42) == 0) )
        {
          v112 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v112 )
          {
            v113 = *(_QWORD *)(v112 + 8 * ((v14 >> 3) & 0x1FF));
            v114 = v108 | 0x20;
            if ( (v113 & 0x20) == 0 )
              v114 = v108;
            LOBYTE(v108) = v114;
            if ( (v113 & 0x42) != 0 )
              LOBYTE(v108) = v114 | 0x42;
          }
        }
        if ( (v108 & 0x20) != 0
          && (v107 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 584)) )
        {
          v87 = 0;
        }
      }
      if ( v89 )
        *(_QWORD *)v89 ^= (*(_DWORD *)v89 ^ (2 * v87)) & 0xE;
      else
        MiWriteValidPteVolatile(v14, 0x80000000LL, (unsigned __int8)(v88 ^ (v87 ^ v88) & 0xF));
      if ( v87 >= 8u )
      {
        if ( v87 == 8 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      }
      else if ( v123 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
      {
        MiUpdateWorkingSetAgeDistribution(a1, v107, v87, 1LL);
      }
      v115 = &dword_1403CCD68;
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        v115 = (LONG *)(a1 + 232);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v115, retaddr);
      else
        *v115 = 0;
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      if ( v123 )
      {
        v7 = a3;
        MiRebuildPageTableLeafAges(v116, a3);
        goto LABEL_232;
      }
    }
    v7 = a3;
LABEL_232:
    v6 = v127;
    v86 = 1LL;
    v8 = v131;
    v13 = 0xFFFFF6FFFFFFFFFFuLL;
    ++*((_QWORD *)v127 + 2);
    goto LABEL_233;
  }
  v20 = 0LL;
  if ( (unsigned __int8)(v16 - 1) <= 5u )
  {
    if ( v7 < 0xFFFFF68000000000uLL || v7 > v13 )
    {
      v25 = *(_QWORD *)v14;
      v21 = 0LL;
      v122 = 1;
      if ( v14 >= v11
        && v14 <= v12
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v10 )
        {
          v26 = *(_QWORD *)(v10 + 8 * ((v14 >> 3) & 0x1FF));
          v10 = v25 | 0x20;
          if ( (v26 & 0x20) == 0 )
            v10 = *(_QWORD *)v14;
          v25 = v10;
          if ( (v26 & 0x42) != 0 )
            v25 = v10 | 0x42;
        }
      }
      v24 = HIBYTE(v25) & 0xF | (16 * ((v25 >> 60) & 7));
      v22 = HIBYTE(v25) & 0xF;
      LOBYTE(v20) = (HIBYTE(v25) & 0xF) == 8;
    }
    else
    {
      v122 = 0;
      v21 = (_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v14) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      v22 = (*v21 >> 1) & 7;
      v23 = (*(_BYTE *)(v9 + 184) & 7) == 0;
      v24 = v121;
      LOBYTE(v20) = !v23;
    }
    v27 = a1;
    v28 = &dword_1403CCD68;
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v28 = (volatile signed __int32 *)(a1 + 232);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v27) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v28, v27);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v126 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = SchedulerAssist[5];
          SchedulerAssist[5] = v32 + 1;
          if ( v32 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(v28, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        LOBYTE(v33) = -1;
        v126 = ExpWaitForSpinLockExclusiveAndAcquire(v28, v33);
      }
      v34 = *v28;
      Process = *(unsigned int *)v28;
      LODWORD(Process) = Process & 0xBFFFFFFF;
      if ( (_DWORD)Process != 0x80000000 )
      {
        do
        {
          if ( (v34 & 0x40000000) == 0 )
          {
            Process = v34;
            LODWORD(Process) = v34 | 0x40000000;
            v35 = _InterlockedCompareExchange(v28, v34 | 0x40000000, v34);
            v23 = v34 == v35;
            v34 = v35;
            if ( !v23 )
              continue;
          }
          KeYieldProcessorEx(&v126);
          v34 = *v28;
        }
        while ( (v34 & 0xBFFFFFFF) != 0x80000000 );
      }
      v7 = a3;
    }
    if ( v22 == 8 )
      --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
    if ( (_DWORD)v20 )
      goto LABEL_90;
    if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v36 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v37 = *(_QWORD *)v36;
      if ( v36 >= 0xFFFFF6FB7DBED000uLL
        && v36 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v37 & 1) != 0
        && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
      {
        v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 8 * ((v36 >> 3) & 0x1FF));
          v40 = v37 | 0x20;
          if ( (v39 & 0x20) == 0 )
            v40 = v37;
          v37 = v40;
          if ( (v39 & 0x42) != 0 )
            v37 = v40 | 0x42;
        }
      }
      v128 = v37;
      Process = (unsigned __int64)&v128;
      if ( (unsigned __int64)&v128 >= 0xFFFFF6FB7DBED000uLL )
      {
        Process = (unsigned __int64)&v128;
        if ( (unsigned __int64)&v128 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 640) != 1 && (v37 & 1) != 0 && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v41 = *(_QWORD *)(Process + 1544);
            if ( v41 )
            {
              v42 = *(_QWORD *)(v41 + 8 * (((unsigned __int64)&v128 >> 3) & 0x1FF));
              v43 = v37 | 0x20;
              Process = (unsigned __int8)v42;
              LOBYTE(Process) = v42 & 0x20;
              if ( (v42 & 0x20) == 0 )
                v43 = v37;
              v37 = v43;
              if ( (v42 & 0x42) != 0 )
                v37 = v43 | 0x42;
            }
          }
        }
      }
      v44 = (__int64 *)(48 * ((v37 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      v45 = *v44;
      v10 = (unsigned __int64)*v44 >> 4;
      if ( (v10 & 0x3FF) != 0 )
      {
        Process = (v45 >> 14) & 7;
        if ( v22 == Process )
        {
          v46 = v45 ^ ((unsigned __int16)v45 ^ (unsigned __int16)(16 * (v10 - 1))) & 0x3FF0;
        }
        else
        {
          if ( v22 <= Process )
            goto LABEL_88;
          v46 = v45 ^ ((unsigned int)v45 ^ (v22 << 14)) & 0x1C000 | 0x3FF0;
        }
        *v44 = v46;
      }
    }
LABEL_88:
    --*(_QWORD *)(a1 + 8LL * v22 + 40);
    if ( v22 == 7 )
      MiVolunteerForTrimFirst(a1, -1LL);
LABEL_90:
    if ( v21 )
    {
      *(_QWORD *)v21 &= 0xFFFFFFFFFFFFFFF1uLL;
    }
    else
    {
      v47 = *(_QWORD *)v14;
      v10 = 0x80FFFFFFFFFFFFFFuLL;
      do
      {
        Process = ((unsigned __int64)(v24 & 0x70) << 56) | v47 & 0x80FFFFFFFFFFFFFFuLL;
        v48 = v47;
        v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, Process, v47);
      }
      while ( v48 != v47 );
    }
    LODWORD(v9) = a1;
    if ( v122 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v49 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v50 = 0xFFFFF6FB7DBED000uLL;
        v51 = *(_QWORD *)v49;
        v52 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v49 >= 0xFFFFF6FB7DBED000uLL
          && v49 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(Process, v49, v51, 0xFFFFF6FB7DBED7F8uLL)
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          v53 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v53 )
          {
            v54 = *(_QWORD *)(v53 + 8 * ((v49 >> 3) & 0x1FF));
            v49 = v51 | 0x20;
            if ( (v54 & 0x20) == 0 )
              v49 = v51;
            v51 = v49;
            if ( (v54 & 0x42) != 0 )
              v51 = v49 | 0x42;
          }
        }
        v129 = v51;
        if ( (unsigned __int64)&v129 >= v50
          && (unsigned __int64)&v129 <= v52
          && (unsigned int)MiPteHasShadow(&v129, v49, v51, v52)
          && (v51 & 1) != 0
          && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
        {
          v55 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 8 * (((unsigned __int64)&v129 >> 3) & 0x1FF));
            v57 = v51 | 0x20;
            if ( (v56 & 0x20) == 0 )
              v57 = v51;
            v51 = v57;
            if ( (v56 & 0x42) != 0 )
              v51 = v57 | 0x42;
          }
        }
        v10 = (v51 >> 12) & 0xFFFFFFFFFLL;
        v58 = (__int64 *)(48 * v10 - 0x58000000000LL);
        v59 = *v58;
        v60 = (unsigned __int64)*v58 >> 4;
        if ( (v60 & 0x3FF) != 0 && (v59 & 0x1C000) == 0 )
          *v58 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)(16 * (v60 + 1))) & 0x3FF0;
      }
      ++*(_QWORD *)(a1 + 40);
    }
    v61 = &dword_1403CCD68;
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v61 = (LONG *)(a1 + 232);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v61, retaddr);
      v20 = 0LL;
    }
    else
    {
      v20 = 0LL;
      *v61 = 0;
    }
    v62 = KeGetCurrentPrcb();
    v63 = v62->SchedulerAssist;
    if ( v63 )
    {
      if ( v62->NestingLevel <= 1u )
      {
        v64 = v63[5] - 1;
        v63[5] = v64;
        if ( !v64 )
        {
          v10 = *((unsigned __int8 *)v63 + 27);
          if ( !*((_BYTE *)v63 + 25) && !(_BYTE)v10 )
            KiPerformUnboostKick(v62);
        }
      }
    }
    if ( !v122 )
      goto LABEL_178;
    v65 = (v7 >> 18) & 0x3FFFFFF8;
    v66 = *(_QWORD *)(v65 - 0x904C0000000LL);
    v67 = v65 - 0x904C0000000LL;
    if ( (unsigned __int64)(v65 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v67 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v62, v66, v10, v67)
      && (v66 & 1) != 0
      && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
    {
      v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v10 )
      {
        v68 = *(_QWORD *)(v10 + 8 * ((v67 >> 3) & 0x1FF));
        v10 = v66 | 0x20;
        if ( (v68 & 0x20) == 0 )
          v10 = v66;
        v66 = v10;
        if ( (v68 & 0x42) != 0 )
          v66 = v10 | 0x42;
      }
    }
    v130 = v66;
    v69 = (unsigned __int64)&v130;
    if ( (unsigned __int64)&v130 >= 0xFFFFF6FB7DBED000uLL )
    {
      v69 = (unsigned __int64)&v130;
      if ( (unsigned __int64)&v130 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v130, v66, v10, v67)
        && (v66 & 1) != 0
        && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
      {
        v69 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v10 = *(_QWORD *)(v69 + 1544);
        if ( v10 )
        {
          v70 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)&v130 >> 3) & 0x1FF));
          v10 = v66 | 0x20;
          v69 = (unsigned __int8)v70;
          LOBYTE(v69) = v70 & 0x20;
          if ( (v70 & 0x20) == 0 )
            v10 = v66;
          v66 = v10;
          if ( (v70 & 0x42) != 0 )
            v66 = v10 | 0x42;
        }
      }
    }
    v71 = (_DWORD *)(48 * ((v66 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*v71 >> 4) & 0x3FF) != 0 )
      goto LABEL_178;
    v72 = 0LL;
    v73 = (__int64)(v67 << 25) >> 16;
    memset(v133, 0, sizeof(v133));
    while ( 1 )
    {
      v74 = *(_QWORD *)v73;
      if ( v73 < 0xFFFFF6FB7DBED000uLL
        || v73 > 0xFFFFF6FB7DBED7F8uLL
        || !(unsigned int)MiPteHasShadow(v69, v74, v10, v73) )
      {
        goto LABEL_171;
      }
      if ( (v74 & 1) != 0 )
        break;
LABEL_174:
      v73 += 8LL;
      if ( (v73 & 0xFFF) == 0 )
      {
        v77 = 8;
        while ( 1 )
        {
          v78 = *((_DWORD *)v133 + (unsigned __int8)--v77);
          if ( v78 )
            break;
          if ( !v77 )
            goto LABEL_178;
        }
        *(_QWORD *)v71 = *(_QWORD *)v71 & 0xFFFFFFFFFFFE000FuLL | (16
                                                                 * (v78 & 0x3FF | ((unsigned __int64)(v77 & 7) << 10)));
LABEL_178:
        v6 = v127;
LABEL_179:
        v79 = v131;
        v80 = *(_BYTE *)(v131 + 35);
        if ( (v80 & 8) == 0 && (v80 & 7u) < 5 )
          MiLockSetPfnPriority(v131, 5LL);
        goto LABEL_185;
      }
    }
    if ( (v74 & 0x20) == 0 || (v74 & 0x42) == 0 )
    {
      v69 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v10 = *(_QWORD *)(v69 + 1544);
      if ( v10 )
      {
        v75 = *(_QWORD *)(v10 + 8 * ((v73 >> 3) & 0x1FF));
        v10 = v74 | 0x20;
        v69 = (unsigned __int8)v75;
        LOBYTE(v69) = v75 & 0x20;
        if ( (v75 & 0x20) == 0 )
          v10 = v74;
        LOBYTE(v74) = v10;
        if ( (v75 & 0x42) != 0 )
          LOBYTE(v74) = v10 | 0x42;
      }
    }
LABEL_171:
    if ( (v74 & 1) != 0 )
    {
      WsleContents = MiGetWsleContents(v69, (__int64)((v73 << 25) - v72) >> 16);
      LOBYTE(WsleContents) = WsleContents & 0xF;
      v69 = (unsigned int)(WsleContents - 8);
      if ( (unsigned __int8)(WsleContents - 8) > 2u )
        ++*((_DWORD *)v133 + (unsigned __int8)WsleContents);
    }
    goto LABEL_174;
  }
  if ( v16 != 7 )
    goto LABEL_179;
  v79 = v131;
LABEL_185:
  v81 = 0;
  if ( (a6 & 2) != 0 )
    v20 = *((_QWORD *)v6 + 7);
  else
    v81 = (a6 & 4) != 0;
  result = MiClearPteAccessed(v9, v79, v132, v20, dword_1403CBF28, v81);
  if ( (_DWORD)result )
    ++*((_QWORD *)v6 + 3);
  if ( v20 )
  {
    v83 = qword_1403CB708;
    if ( (*(_BYTE *)(v20 + 4) & 2) == 0
      && *(_DWORD *)v20 == 1
      && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16] )
    {
      v83 = -1LL;
    }
    result = *(unsigned int *)(v20 + 8);
    if ( (*(_DWORD *)(v20 + 12) >= (unsigned int)result || *(_BYTE *)(v20 + 5) || *(_QWORD *)(v20 + 16) > v83)
      && v83 >= 0x400
      && !*(_BYTE *)(v20 + 5) )
    {
      return MiFlushTbList(v20);
    }
  }
  return result;
}
