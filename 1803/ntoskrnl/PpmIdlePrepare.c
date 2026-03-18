/*
 * XREFs of PpmIdlePrepare @ 0x14010DF60
 * Callers:
 *     PoIdle @ 0x14010B740 (PoIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140035180 (KiGetNextTimerExpirationDueTime.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     MmGetNextNode @ 0x14003AFD8 (MmGetNextNode.c)
 *     KiFindNextTimerDueTime @ 0x14010F360 (KiFindNextTimerDueTime.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PpmGetIdleConstrainedMask @ 0x140272040 (PpmGetIdleConstrainedMask.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x1402BAB9C (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        unsigned __int8 *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rbx
  LARGE_INTEGER v12; // r14
  __int64 v13; // r12
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v15; // r10
  __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 *v18; // rbx
  int v19; // ecx
  char v20; // al
  unsigned __int8 v21; // r14
  char v22; // al
  unsigned __int64 v23; // r10
  __int64 v24; // r13
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // r15
  __int16 v30; // r12
  bool v31; // zf
  unsigned __int64 v32; // rbx
  int v33; // r14d
  __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int i; // eax
  ULONG v40; // eax
  __int64 v41; // r12
  __int64 v42; // rax
  unsigned int v43; // ebx
  __int64 v44; // r13
  __int64 v45; // r15
  unsigned int v46; // edx
  char v47; // r14
  __int64 v48; // rsi
  unsigned __int8 v49; // cl
  struct _KPRCB *CurrentPrcb; // r8
  _KNODE *ParentNode; // r9
  int v53; // r11d
  int NextNode; // eax
  signed __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v62; // rcx
  _WORD *v63; // rdi
  __int64 v64; // r12
  char v65; // al
  unsigned __int64 v66; // rcx
  __int64 v67; // r14
  unsigned __int8 v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+34h] [rbp-CCh] BYREF
  int v70; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v71; // [rsp+40h] [rbp-C0h]
  __int64 v72; // [rsp+48h] [rbp-B8h]
  int v73; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v74; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v75; // [rsp+58h] [rbp-A8h]
  unsigned int v76; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v77; // [rsp+60h] [rbp-A0h]
  __int64 v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  unsigned __int64 v80; // [rsp+78h] [rbp-88h]
  unsigned __int64 v81; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v82; // [rsp+88h] [rbp-78h]
  LARGE_INTEGER *v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v86; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v87; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v88[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v89; // [rsp+C8h] [rbp-38h]
  __int64 v90; // [rsp+D0h] [rbp-30h]
  char v91[8]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 *v92; // [rsp+E8h] [rbp-18h]

  v6 = a1;
  v87 = a5;
  v7 = *(_QWORD *)(a1 + 23808);
  v84 = a6;
  v86 = a2;
  v78 = a1;
  v76 = PpmDripsStateIndex;
  v79 = v7 + 488;
  v82 = a4;
  v83 = a3;
  v68 = 0;
  v72 = v7;
  v85 = PpmPlatformStates;
  v80 = 0LL;
  if ( *(_BYTE *)(a1 + 33) )
  {
    if ( PopDeepSleepIsEnabled && PopDeepSleepIsEngaged && !PopDeepSleepEvaluateWorkItemQueued )
    {
      if ( PpmPlatformStates )
        v68 = 1;
      else
        v68 = *(_DWORD *)(v7 + 32) > 1u;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 23808);
      v10 = 0LL;
      while ( 1 )
      {
        v11 = MEMORY[0xFFFFF78000000340];
        if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
        {
          v12.QuadPart = MEMORY[0xFFFFF78000000350];
          v13 = MEMORY[0xFFFFF78000000008];
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          if ( MEMORY[0xFFFFF78000000340] == v11 )
            break;
        }
        _mm_pause();
      }
      v6 = v78;
      v15 = PerformanceCounter;
      v16 = v72;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v12.QuadPart )
      {
        v17 = -1 - v12.QuadPart + PerformanceCounter.QuadPart;
        if ( MEMORY[0xFFFFF78000000369] )
          v17 <<= MEMORY[0xFFFFF78000000369];
        v10 = ((unsigned __int64)v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v90 = v10;
      }
      v18 = v82;
      *v82 = v13 + v10;
      *(LARGE_INTEGER *)(v9 + 496) = v15;
      *(_QWORD *)(v9 + 504) = *(_QWORD *)(v6 + 23832) + *(_QWORD *)(v6 + 24008);
      *(_BYTE *)(v9 + 538) = *(_BYTE *)(v6 + 24226);
      *(_BYTE *)(v9 + 536) = *(_BYTE *)(v6 + 23864);
      *(_BYTE *)(v9 + 537) = *(_BYTE *)(v6 + 23865);
      *(_BYTE *)(v9 + 539) = 1;
      if ( !*(_BYTE *)(v6 + 33) )
        goto LABEL_12;
      CurrentPrcb = KeGetCurrentPrcb();
      v73 = 0;
      ParentNode = CurrentPrcb->ParentNode;
      v53 = ParentNode->Affinity.Reserved[0];
      if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
      {
        while ( 1 )
        {
          NextNode = MmGetNextNode(v53, &v73);
          if ( NextNode == -1 )
            break;
          if ( *(_QWORD *)(KeNodeBlock[NextNode] + 64) != *(_QWORD *)(KeNodeBlock[NextNode] + 136) )
            goto LABEL_12;
        }
        *(_BYTE *)(v9 + 540) = 1;
        *(_WORD *)(v9 + 48) |= 0x80u;
      }
      else
      {
LABEL_12:
        *(_BYTE *)(v9 + 540) = 0;
      }
      if ( *(_BYTE *)(v9 + 1) )
      {
        *(_WORD *)(v9 + 48) |= 0x100u;
        v19 = *(_DWORD *)(v9 + 28);
      }
      else
      {
        v19 = -1;
      }
      *(_DWORD *)(v9 + 528) = v19;
      if ( PpmIdleRespectIdleStateMax )
      {
        v20 = BYTE6(PpmCurrentProfile[336 * dword_1403AAA2C + 18]);
        *(_BYTE *)(v9 + 542) = v20;
        if ( v20 )
          *(_WORD *)(v9 + 48) |= 0x4000u;
      }
      else
      {
        *(_BYTE *)(v9 + 542) = 0;
      }
      v21 = v68;
      *v83 = v15;
      if ( !v68 || *(_BYTE *)(v16 + 540) )
        break;
      *(_WORD *)(v16 + 48) = 0;
      v68 = 0;
    }
    v22 = *(_BYTE *)(v6 + 33);
    v23 = *v18;
    v24 = *(_QWORD *)(v6 + 23808);
    v71 = *v18;
    if ( v22 || !KiSerializeTimerExpiration )
    {
      v25 = 0LL;
      v27 = v24;
      v77 = 0LL;
    }
    else
    {
      v25 = 0LL;
      v77 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v26 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v56 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v26 ^ (unsigned __int16)(v26 ^ (v26 - 1)), v26);
          if ( v26 == v56 )
            break;
          v26 = v56;
          _mm_pause();
          if ( !(_WORD)v56 )
            goto LABEL_22;
        }
        v77 = v26 >> 16;
      }
LABEL_22:
      v27 = *(_QWORD *)(v6 + 23808);
      v22 = *(_BYTE *)(v6 + 33);
    }
    v28 = *(unsigned __int8 *)(v27 + 540);
    v29 = -1LL;
    v30 = 0;
    if ( v22 )
      v30 = 8;
    if ( v68 )
    {
      v30 = 12;
      if ( !v22 )
        v30 = 4;
    }
    v31 = *(_BYTE *)(v6 + 33) == 0;
    v32 = KiClockTimerNextTickTime;
    v69 = 2;
    if ( v31 )
    {
      if ( *(_QWORD *)(v6 + 16) )
      {
        v33 = 1;
      }
      else if ( KiSerializeTimerExpiration || PoSkipTickMode != 2 )
      {
        v33 = 4;
        v70 = 4;
        if ( v68 )
          NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(2LL, v28);
        else
          NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v6, v23, 0LL);
        v25 = NextWakeTimeForDeepSleep;
        if ( KiGroupSchedulingEnabled )
        {
          v36 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v6 + 36)];
          if ( (((unsigned __int64)qword_14039BB08[v36 >> 6] >> (v36 & 0x3F)) & 1) != 0
            && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v25 )
          {
            v33 = 5;
            v25 = KiGenerationEndTick * KeMaximumIncrement;
            v70 = 5;
          }
        }
        if ( !*(_BYTE *)(v6 + 33) )
          goto LABEL_34;
        v57 = -1LL;
        LOBYTE(v35) = 0;
        v58 = v68 + 2LL;
        do
        {
          if ( qword_1403B44B0[3 * v58] < v57 )
          {
            v35 = (unsigned __int8)v35;
            v57 = qword_1403B44B0[3 * v58];
            if ( v58 == 3 )
              v35 = 1LL;
          }
          ++v58;
        }
        while ( v58 <= 3 );
        v6 = v78;
        v33 = v70;
        if ( v57 < v25 )
        {
          v33 = 6;
          v25 = v57;
          if ( (_BYTE)v35 )
            v33 = 7;
        }
        if ( *(_BYTE *)(v78 + 33)
          && (v59 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64))off_140398A48[0])(v58, v57, v35)) != 0 )
        {
          v23 = v71;
          if ( v25 > v59 )
          {
            v25 = v59;
            v33 = 9;
            if ( v71 > v59 )
              v25 = v71;
          }
        }
        else
        {
LABEL_34:
          v23 = v71;
        }
      }
      else
      {
        v33 = 2;
      }
      v69 = v33;
      v21 = v68;
      v81 = v25;
      if ( v32 <= v25 )
        v32 = v25;
      v25 = 0LL;
    }
    else if ( (_BYTE)v28 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      KiGetNextTimerExpirationDueTime(v6, 1u, v23, v68, &v81, &v69);
      v23 = v71;
      if ( v71 + (unsigned int)KiLastRequestedTimeIncrement < v81 )
        v32 = v81;
      else
        v69 = 2;
    }
    if ( v32 == -1LL )
    {
      v25 = -1LL;
    }
    else if ( v32 > v23 )
    {
      v25 = v32 - v23;
    }
    v37 = *(_DWORD *)(v6 + 11684);
    v38 = 0;
    for ( i = v37; i; i >>= 4 )
      v38 += KeMaximumIncrement;
    if ( !v21 && v37 )
    {
      v40 = KeMaximumIncrement / (v37 + 1);
      if ( !v40 )
        v40 = 1;
      v29 = v40;
    }
    if ( v25 <= v29 )
    {
      v29 = v25;
    }
    else
    {
      v30 |= 1u;
      if ( v25 >= v38 )
        v25 = v38;
    }
    if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(v6 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v91) )
    {
      v60 = 0LL;
      v89 = 0;
      v88[1] = v92;
      v88[0] = (unsigned __int16 *)v91;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v74, v88) )
      {
        Prcb = KeGetPrcb(v74);
        v62 = *(_QWORD *)(Prcb + 23848);
        if ( v62 != -1LL && v62 > v60 )
          v60 = *(_QWORD *)(Prcb + 23848);
      }
      if ( v60 && v25 + v71 > v60 )
      {
        v30 |= 0x2000u;
        v25 = v60 > v71 ? (unsigned int)(v60 - v71) : 1LL;
        if ( v25 < v29 )
          v29 = v25;
      }
    }
    if ( v29 < v77 )
    {
      v29 = v77;
      v25 = v77;
      v30 |= 0x1000u;
    }
    *(_WORD *)(v24 + 48) |= v30;
    v41 = v79;
    *(_BYTE *)(v24 + 541) = v69;
    v42 = v72;
    *(_QWORD *)(v24 + 520) = v25;
    *(_QWORD *)(v24 + 512) = v29;
    (*(void (__fastcall **)(__int64))(v42 + 408))(v41);
    v43 = *(_DWORD *)(v41 + 76);
    v44 = *(unsigned int *)(v41 + 72);
    v70 = v43;
    if ( v43 == -2 || v43 == -1 )
      break;
    v45 = *(_QWORD *)(v6 + 23816);
    v31 = !_BitScanForward(&v46, *(_DWORD *)(v41 + 80));
    v75 = v46;
    if ( !v31 )
    {
      do
      {
        *(_DWORD *)(v41 + 80) &= *(_DWORD *)(v41 + 80) - 1;
        ++*(_DWORD *)(1000LL * v46 + v45 + 52);
        v31 = !_BitScanForward(&v46, *(_DWORD *)(v41 + 80));
      }
      while ( !v31 );
      v75 = v46;
    }
    v47 = 0;
    v48 = *(_QWORD *)(v41 + 64);
    if ( *(_DWORD *)(v41 + 60) )
    {
      v63 = (_WORD *)v84;
      v64 = *(unsigned int *)(v41 + 60);
      do
      {
        if ( *(_BYTE *)(v48 + 4) == 0xFF )
        {
          v65 = v47;
          if ( !v47 )
            v65 = 1;
          v47 = v65;
          KeAddProcessorAffinityEx(v63, *(_DWORD *)v48);
        }
        v48 += 8LL;
        --v64;
      }
      while ( v64 );
      v6 = v78;
      v43 = v70;
      v41 = v79;
      if ( v47 && *(_BYTE *)(v79 + 52) )
      {
        v66 = v80;
        if ( v80 < *(_QWORD *)(v79 + 24) )
          v66 = *(_QWORD *)(v79 + 24);
        v80 = v66;
      }
    }
    v49 = v68;
    if ( !v68 )
      goto LABEL_58;
    v67 = v85;
    if ( v85 )
    {
      if ( (_DWORD)v44 != -1 && (unsigned int)v44 >= v76 )
        goto LABEL_58;
    }
    else if ( v43 == *(_DWORD *)(v72 + 32) - 1 )
    {
      goto LABEL_58;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(v72 + 464))(*(_QWORD *)v41, 0LL);
    ++*(_DWORD *)(1000LL * v43 + v45 + 48);
    if ( (_DWORD)v44 != -1 && v67 )
      ++*(_DWORD *)(1008 * v44 + *(_QWORD *)(v67 + 48) + 24);
    v68 = 0;
    *(_WORD *)(v72 + 48) = 2;
  }
  v49 = 0;
LABEL_58:
  *v86 = v49;
  *v87 = v80;
  return v43;
}
