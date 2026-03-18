/*
 * XREFs of KiChooseTargetProcessor @ 0x1400FC8B0
 * Callers:
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 * Callees:
 *     MmGetNextNode @ 0x14003AFD8 (MmGetNextNode.c)
 *     PpmPerfGetCurrentFrequency @ 0x140060A30 (PpmPerfGetCurrentFrequency.c)
 *     KiEndThreadAccountingPeriod @ 0x140060A70 (KiEndThreadAccountingPeriod.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x1400BAD90 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSelectIdleProcessor @ 0x14015A2C0 (KiSelectIdleProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     KiBeginCounterAccumulation @ 0x14024615C (KiBeginCounterAccumulation.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x1402481AC (KiFindRankBiasedIdleSmtSet.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 *     KiSelectCandidateProcessor @ 0x14024C410 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, char a5)
{
  int v5; // r11d
  __int64 v6; // rbx
  char v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 *v17; // rsi
  unsigned __int64 v18; // r12
  __int64 v19; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v21; // esi
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  __int64 *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rcx
  bool v32; // zf
  unsigned __int64 v33; // r11
  __int64 v34; // rcx
  unsigned int CurrentFrequency; // edx
  __int64 v36; // r9
  unsigned int v37; // edx
  char v38; // al
  unsigned int v39; // ecx
  unsigned int v40; // eax
  __int64 v41; // rax
  char v42; // cl
  unsigned __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // r15
  __int64 v46; // r12
  unsigned __int64 v47; // rdx
  __int64 v48; // r13
  __int64 v49; // r11
  unsigned int v50; // r15d
  __int64 v51; // r13
  unsigned __int8 *v52; // rdx
  __int64 v53; // rsi
  int v54; // ebx
  char *v55; // r15
  unsigned int v56; // r8d
  int v57; // r9d
  char v58; // dl
  __int64 v59; // rax
  struct _KPRCB *v60; // r15
  _QWORD *v61; // r12
  unsigned int v62; // esi
  _DWORD *v63; // rcx
  _DWORD *v64; // rsi
  unsigned __int64 *v65; // rdi
  unsigned __int64 v66; // rsi
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int8 v70; // dl
  int v71; // ecx
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  unsigned int NextNode; // eax
  __int64 v75; // r10
  __int64 v76; // rcx
  __int64 v77; // r12
  __int64 v78; // r8
  __int64 v79; // rax
  unsigned __int64 v80; // r10
  __int64 v81; // rax
  char v82; // cl
  int v83; // edx
  __int64 v84; // r8
  __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // rdx
  char v88; // al
  char v89; // cl
  int v90; // edx
  unsigned __int64 v91; // rax
  char RankBiasedIdleSmtSet; // al
  char v93; // al
  int v94; // eax
  int v95; // eax
  __int64 v96; // rax
  int v97; // [rsp+34h] [rbp-9Dh]
  __int64 v98; // [rsp+38h] [rbp-99h]
  __int64 v99; // [rsp+40h] [rbp-91h]
  __int64 v100; // [rsp+40h] [rbp-91h]
  __int64 v101; // [rsp+48h] [rbp-89h] BYREF
  __int64 v102; // [rsp+50h] [rbp-81h] BYREF
  __int64 v103; // [rsp+58h] [rbp-79h] BYREF
  int v104; // [rsp+60h] [rbp-71h] BYREF
  __int64 v105; // [rsp+68h] [rbp-69h]
  unsigned __int64 v106; // [rsp+70h] [rbp-61h]
  _DWORD *v107; // [rsp+78h] [rbp-59h]
  int v108; // [rsp+80h] [rbp-51h]
  int v109; // [rsp+84h] [rbp-4Dh]
  int v110; // [rsp+88h] [rbp-49h]
  int v111; // [rsp+8Ch] [rbp-45h]
  _BYTE v112[64]; // [rsp+90h] [rbp-41h] BYREF

  v5 = *((unsigned __int16 *)a3 + 4);
  v6 = a2;
  v107 = a4;
  v8 = a5;
  v105 = a2;
  v9 = *a3;
  v98 = *a3;
  v97 = v5;
  while ( 1 )
  {
LABEL_2:
    v10 = *(unsigned int *)(v6 + 536);
    LODWORD(v10) = v10 & 0x7FFFFFFF;
    v11 = KiProcessorBlock[v10];
    if ( (_WORD)v5 == *(unsigned __int8 *)(a1 + 208)
      && (*(_BYTE *)(a1 + 11884) & 1) != 0
      && (*(_BYTE *)(v6 + 643) == 15 || *(_DWORD *)(v6 + 84) < (unsigned int)KiShortExecutionCycles) )
    {
      v65 = *(unsigned __int64 **)(a1 + 192);
      v66 = *v65;
      v67 = v9 & *v65;
      v101 = v67;
      if ( v67 )
      {
        v68 = v67 & *(_QWORD *)(a1 + 24936);
        if ( v68 )
        {
          v67 &= *(_QWORD *)(a1 + 24936);
          v101 = v68;
        }
        if ( *(_QWORD *)(a1 + 200) == *(_QWORD *)(a1 + 24920) )
          goto LABEL_86;
        if ( v8 )
        {
          if ( (unsigned __int8)KiFindRankBiasedIdleSmtSet(a1, &v101, v67) )
            goto LABEL_140;
          v8 = a5;
          v5 = v97;
          v9 = v98;
        }
        v67 = v101 & v65[1];
        if ( v67 )
        {
          if ( !v8
            || (unsigned int)((0x101010101010101LL
                             * ((((v66 - ((v66 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v66 - ((v66 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v66 - ((v66 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v66 - ((v66 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled )
          {
            v101 &= v65[1];
            goto LABEL_86;
          }
        }
        else if ( !v8 )
        {
          if ( KiReduceByEffectiveIdleSmtSet(a1, &v101) )
          {
LABEL_140:
            v67 = v101;
LABEL_88:
            v70 = *(_BYTE *)(a1 + 208);
            v71 = *(_DWORD *)(a1 + 24916);
            if ( *(_BYTE *)(v11 + 208) == v70 && (*(_QWORD *)(a1 + 24928) & *(_QWORD *)(v11 + 200)) != 0LL )
              LOBYTE(v71) = *(_BYTE *)(v11 + 209);
            _BitScanForward64(&v72, __ROR8__(v67, v71));
            v108 = KiProcessorNumberToIndexMappingTable[64 * v70 + (((_BYTE)v72 + (_BYTE)v71) & 0x3F)];
            v15 = KiProcessorBlock[v108];
            goto LABEL_15;
          }
          v67 = v101;
LABEL_86:
          v69 = v67 & ~*(_QWORD *)(a1 + 24920);
          if ( v69 )
          {
            v67 &= ~*(_QWORD *)(a1 + 24920);
            v101 = v69;
          }
          goto LABEL_88;
        }
      }
    }
    v12 = *(unsigned int *)(v6 + 588);
    v13 = *(_QWORD *)(v11 + 192);
    v14 = v11;
    v99 = v13;
    v15 = 0LL;
    v16 = KiProcessorBlock[v12];
    v17 = *(__int64 **)(v16 + 192);
    if ( (__int64 *)v13 != v17 )
      v14 = 0LL;
    v18 = *v17;
    v19 = v9 & *v17;
    v102 = v19;
    if ( !v19 )
      goto LABEL_14;
    if ( *(_QWORD *)(v16 + 200) != *(_QWORD *)(v16 + 24920) )
    {
      if ( v8 )
      {
        RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(v16, &v102, v19);
        v13 = v99;
        v8 = a5;
        v5 = v97;
        if ( RankBiasedIdleSmtSet )
          goto LABEL_48;
      }
      v19 = v102;
      if ( (v102 & v17[1]) != 0 )
      {
        if ( v8
          && (unsigned int)((0x101010101010101LL
                           * ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
        {
          goto LABEL_53;
        }
        v19 = v102 & v17[1];
        v102 = v19;
        goto LABEL_12;
      }
      if ( v8 )
        goto LABEL_53;
      v24 = *(__int64 **)(a1 + 192);
      if ( v24 == v17 )
      {
        v19 = v102;
        v25 = v102 & v24[2];
        v27 = v102 & *(_QWORD *)(a1 + 24920) & ~*(_QWORD *)(a1 + 200);
        if ( v27 )
        {
          v26 = *(_QWORD *)(a1 + 24920) & ~*(_QWORD *)(a1 + 200);
          if ( (v25 & v26) == v26 && (*(_BYTE *)(a1 + 11884) & 1) == 0 && !*(_DWORD *)(a1 + 22808) )
          {
            v28 = *(_QWORD *)(a1 + 8);
            if ( !*(_BYTE *)(a1 + 32) )
            {
              _disable();
              *(_BYTE *)(a1 + 32) = 1;
              v29 = __rdtsc();
              v30 = v29 - *(_QWORD *)(a1 + 23488);
              v31 = v30 + *(unsigned int *)(v28 + 80);
              *(_QWORD *)(v28 + 72) += v30;
              if ( v31 > 0xFFFFFFFF )
                LODWORD(v31) = -1;
              *(_QWORD *)(a1 + 23488) = v29;
              v32 = (*(_BYTE *)(v28 + 2) & 0x3E) == 0;
              *(_DWORD *)(v28 + 80) = v31;
              if ( !v32 )
                KiEndThreadAccountingPeriod(a1, v28, v30);
              v33 = __rdtsc();
              *(_QWORD *)(a1 + 23608) += v33 - *(_QWORD *)(a1 + 23488);
              v34 = *(unsigned __int8 *)(v28 + 2);
              if ( (v34 & 0x20) != 0 )
              {
                CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0);
                if ( CurrentFrequency < 0x4B )
                  v37 = CurrentFrequency / 0x19;
                else
                  v37 = 3;
                *(_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 23858) + 2952LL + 2LL * v37)) += v36;
                v34 = *(unsigned __int8 *)(v28 + 2);
              }
              if ( (v34 & 0x40) != 0 )
                KiSetVpThreadSystemWork(a1, 0LL);
              *(_QWORD *)(a1 + 23488) = v33;
              v38 = *(_BYTE *)(v28 + 2);
              if ( (v38 & 0x10) != 0 )
              {
                *(_QWORD *)(a1 + 23496) = v33;
                v38 = *(_BYTE *)(v28 + 2);
              }
              if ( (v38 & 2) != 0 )
                KiBeginCounterAccumulation(v28, 0LL);
              v32 = *(_BYTE *)(a1 + 6) == 0;
              *(_BYTE *)(a1 + 32) = 0;
              if ( !v32 )
              {
                LOBYTE(v34) = 2;
                *(_BYTE *)(a1 + 6) = 0;
                HalRequestSoftwareInterrupt(v34);
              }
              _enable();
              v13 = v99;
              v8 = a5;
              v5 = v97;
            }
            v39 = *(_DWORD *)(v28 + 80);
            v40 = *(_DWORD *)(v28 + 84);
            if ( v39 < v40 && v40 - v39 >= KiShortExecutionCycles )
            {
LABEL_48:
              v19 = v102;
              goto LABEL_12;
            }
            v19 = v27;
            v102 = v27;
          }
        }
      }
    }
LABEL_12:
    if ( (v19 & *(_QWORD *)(v16 + 200)) != 0 )
    {
      v15 = v16;
    }
    else if ( v14 && (v19 & *(_QWORD *)(v14 + 200)) != 0 )
    {
      v15 = v14;
    }
    else
    {
      v41 = v19 & *(_QWORD *)(v16 + 24920);
      if ( v41 || v14 && (v41 = v19 & *(_QWORD *)(v14 + 24920)) != 0 )
      {
        v102 = v41;
        v19 = v41;
      }
      v42 = *(_BYTE *)(v16 + 209);
      _BitScanForward64(&v43, __ROR8__(v19, v42));
      v109 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v16 + 208) + (((_BYTE)v43 + v42) & 0x3F)];
      v15 = KiProcessorBlock[v109];
    }
LABEL_14:
    if ( v15 )
      goto LABEL_15;
LABEL_53:
    v44 = v98;
    v45 = v98 & ~v17[17];
    if ( (__int64 *)v13 != v17 && v45 && *(unsigned __int16 *)(v13 + 144) == v5 )
    {
      v15 = KiSelectIdleProcessor(v98, a1, v13, v11, v8);
      if ( v15 )
        goto LABEL_15;
      v13 = v99;
      v5 = v97;
      v44 = v98;
    }
    if ( (_WORD)v5 == *(_WORD *)(v13 + 144) )
      v46 = v45 & ~*(_QWORD *)(v13 + 136);
    else
      v46 = v45;
    v47 = *(_QWORD *)(a1 + 192);
    v106 = v47;
    if ( (__int64 *)v47 == v17 || v47 == v13 || !v46 || *(unsigned __int16 *)(v47 + 144) != v5 )
      goto LABEL_57;
    v15 = KiSelectIdleProcessor(v44, a1, v47, a1, a5);
    if ( !v15 )
      break;
LABEL_15:
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v94 = SchedulerAssist[5];
        SchedulerAssist[5] = v94 + 1;
        if ( v94 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v21);
      }
      while ( *(_QWORD *)(v15 + 48) );
      LOBYTE(v73) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v73);
    }
    if ( !*(_BYTE *)(v15 + 35) )
    {
      result = v15;
      *v107 = 1;
      return result;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    v8 = a5;
    v5 = v97;
    v9 = v98;
    v6 = v105;
  }
  v13 = v99;
  v47 = v106;
  LOWORD(v5) = v97;
LABEL_57:
  if ( (_WORD)v5 == *(_WORD *)(v47 + 144) )
    v48 = v46 & ~*(_QWORD *)(v47 + 136);
  else
    v48 = v46;
  v49 = v98;
  v50 = v17[16] & ~((1 << *((_BYTE *)v17 + 146)) | (1 << *(_WORD *)(v47 + 146)) | (1 << *(_WORD *)(v13 + 146)));
  v104 = 0;
  while ( v48 )
  {
    NextNode = MmGetNextNode(*((unsigned __int16 *)v17 + 73), &v104);
    if ( NextNode == -1 )
      break;
    v76 = v50;
    if ( _bittest64(&v76, NextNode) )
    {
      v77 = KeNodeBlock[NextNode];
      v78 = *(_QWORD *)(v77 + 136) & v49;
      if ( v78 )
      {
        v79 = *(unsigned int *)(v77 + 100);
        v15 = v75;
        v80 = *(_QWORD *)v77;
        v106 = v80;
        v81 = KiProcessorBlock[v79];
        v82 = *(_BYTE *)(v81 + 209);
        v83 = *(unsigned __int8 *)(v81 + 208);
        _BitScanForward64((unsigned __int64 *)&v81, __ROR8__(v78, v82));
        v84 = v49 & v80;
        v103 = v49 & v80;
        v85 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v83 + (((_BYTE)v81 + v82) & 0x3F)];
        v110 = v85;
        v86 = KiProcessorBlock[v85];
        v100 = v86;
        if ( (v49 & v80) == 0 )
        {
LABEL_103:
          if ( v15 )
            goto LABEL_15;
          goto LABEL_104;
        }
        if ( *(_QWORD *)(v86 + 200) == *(_QWORD *)(v86 + 24920) )
        {
LABEL_130:
          if ( (v84 & *(_QWORD *)(v86 + 200)) != 0 )
          {
            v15 = v86;
          }
          else
          {
            v89 = *(_BYTE *)(v86 + 209);
            v90 = *(unsigned __int8 *)(v86 + 208);
            if ( (*(_QWORD *)(v86 + 24920) & v84) != 0 )
              v84 &= *(_QWORD *)(v86 + 24920);
            v103 = v84;
            _BitScanForward64(&v91, __ROR8__(v84, v89));
            v111 = KiProcessorNumberToIndexMappingTable[64 * v90 + ((v89 + (_BYTE)v91) & 0x3F)];
            v15 = KiProcessorBlock[v111];
          }
          goto LABEL_103;
        }
        v88 = a5;
        if ( !a5 )
          goto LABEL_126;
        v93 = KiFindRankBiasedIdleSmtSet(v86, &v103, v84);
        v86 = v100;
        v49 = v98;
        if ( v93 )
        {
          v84 = v103;
          goto LABEL_130;
        }
        v88 = a5;
        v80 = v106;
LABEL_126:
        v84 = v103;
        if ( (v103 & *(_QWORD *)(v77 + 8)) != 0 )
        {
          if ( !v88
            || (unsigned int)((0x101010101010101LL
                             * ((((v80 - ((v80 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v80 - ((v80 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v80 - ((v80 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v80 - ((v80 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled )
          {
            v84 = v103 & *(_QWORD *)(v77 + 8);
            v103 = v84;
            goto LABEL_130;
          }
        }
        else if ( !v88 )
        {
          if ( *(_QWORD *)(a1 + 192) == v77 )
          {
            KiReduceByEffectiveIdleSmtSet(a1, &v103);
            v84 = v103;
            v86 = v100;
            v49 = v98;
          }
          goto LABEL_130;
        }
      }
LABEL_104:
      v48 &= ~*(_QWORD *)(v77 + 136);
      continue;
    }
  }
  v51 = v49 & *(_QWORD *)(v16 + 24896);
  if ( ((v51 - 1) & v51) != 0 )
  {
    v52 = *(unsigned __int8 **)(v16 + 24904);
    v53 = v52[593];
    v54 = v52[592];
    v55 = &v112[v53];
    memmove(&v112[v53], v52 + 528, v52[592]);
    v56 = v53 + v54;
    v57 = -1;
    v6 = v105;
    v58 = *(_BYTE *)(v105 + 195);
    if ( (unsigned int)v53 < v56 )
    {
      v59 = __ROL8__(1LL, v53);
      do
      {
        if ( (v51 & v59) != 0 && *v55 < v58 )
        {
          v58 = *v55;
          v57 = v53;
        }
        LODWORD(v53) = v53 + 1;
        v59 = __ROL8__(v59, 1);
        ++v55;
      }
      while ( (unsigned int)v53 < v56 );
      if ( v57 >= 0 )
        v16 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v16 + 208) + v57]];
    }
  }
  else
  {
    v6 = v105;
  }
  v60 = KeGetCurrentPrcb();
  v61 = *(_QWORD **)(v16 + 192);
  v62 = 0;
  v63 = v60->SchedulerAssist;
  if ( v63 )
  {
    if ( v60->NestingLevel <= 1u )
    {
      v95 = v63[5];
      v63[5] = v95 + 1;
      if ( v95 == -1 && !*((_BYTE *)v63 + 25) && !*((_BYTE *)v63 + 27) )
        KiPerformUnboostKick(v60);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
  {
    KiSetVpThreadSpinLockCount(v60, 0LL);
    do
    {
      if ( (++v62 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v62);
    }
    while ( *(_QWORD *)(v16 + 48) );
    LOBYTE(v87) = 1;
    KiSetVpThreadSpinLockCount(v60, v87);
  }
  if ( !a5 && (*v61 & v98) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    v8 = 0;
    v5 = v97;
    v9 = v98;
    goto LABEL_2;
  }
  v64 = v107;
  *v107 = 0;
  if ( (*(_BYTE *)(v16 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    v96 = KiSelectCandidateProcessor(v16, v6, -1LL);
    v16 = v96;
    if ( !a5 && (*(_BYTE *)(v96 + 35) & 1) == 0 )
      *v64 = 1;
  }
  return v16;
}
