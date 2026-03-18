/*
 * XREFs of PpmIdlePrepare @ 0x1400F60C0
 * Callers:
 *     PoIdle @ 0x1400F4340 (PoIdle.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KiFindNextTimerDueTime @ 0x1400F70A0 (KiFindNextTimerDueTime.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400F96E0 (KiGetNextTimerExpirationDueTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PpmGetIdleConstrainedMask @ 0x140227C58 (PpmGetIdleConstrainedMask.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14025CB60 (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        bool *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  BOOL v6; // r13d
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  LARGE_INTEGER v12; // r14
  __int64 v13; // r12
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER ParentNode; // r9
  LARGE_INTEGER v16; // r10
  BOOL v17; // r13d
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // r12
  bool v21; // zf
  unsigned __int64 v22; // r10
  __int64 v23; // r15
  unsigned __int64 QuadPart; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r14
  __int16 v27; // r13
  BOOL v28; // edx
  __int64 v29; // rcx
  LARGE_INTEGER v30; // r8
  int v31; // r12d
  unsigned __int64 v32; // rbx
  __int64 NextWakeTimeForDeepSleep; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned int i; // eax
  unsigned __int64 v40; // rsi
  unsigned int v41; // ecx
  ULONG v42; // eax
  __int64 v43; // rax
  __int64 v44; // r12
  unsigned int v45; // ebx
  __int64 v46; // r13
  __int64 v47; // r15
  unsigned int v48; // edx
  char v49; // r14
  __int64 v50; // rsi
  bool v51; // cl
  struct _KPRCB *CurrentPrcb; // r8
  int v54; // r11d
  int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rcx
  signed __int64 v58; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v63; // rcx
  _WORD *v64; // rdi
  __int64 v65; // r12
  char v66; // al
  unsigned __int64 v67; // rcx
  __int64 v68; // r14
  BOOL v69; // [rsp+30h] [rbp-1B8h]
  int v70; // [rsp+34h] [rbp-1B4h] BYREF
  unsigned __int64 v71; // [rsp+38h] [rbp-1B0h]
  __int64 v72; // [rsp+40h] [rbp-1A8h]
  ULONG v73; // [rsp+48h] [rbp-1A0h] BYREF
  unsigned int v74; // [rsp+4Ch] [rbp-19Ch]
  unsigned int v75; // [rsp+50h] [rbp-198h]
  unsigned __int64 v76; // [rsp+58h] [rbp-190h]
  __int64 v77; // [rsp+60h] [rbp-188h]
  __int64 v78; // [rsp+68h] [rbp-180h]
  unsigned __int64 v79; // [rsp+70h] [rbp-178h]
  unsigned __int64 v80; // [rsp+78h] [rbp-170h] BYREF
  __int64 v81; // [rsp+80h] [rbp-168h]
  unsigned __int64 *v82; // [rsp+88h] [rbp-160h]
  LARGE_INTEGER *v83; // [rsp+90h] [rbp-158h]
  __int64 v84; // [rsp+98h] [rbp-150h]
  __int64 v85; // [rsp+A0h] [rbp-148h]
  bool *v86; // [rsp+A8h] [rbp-140h]
  unsigned __int64 *v87; // [rsp+B0h] [rbp-138h]
  unsigned __int16 *v88[2]; // [rsp+B8h] [rbp-130h] BYREF
  __int16 v89; // [rsp+C8h] [rbp-120h]
  __int64 v90; // [rsp+D0h] [rbp-118h]
  __int64 v91; // [rsp+D8h] [rbp-110h]
  char v92[8]; // [rsp+F0h] [rbp-F8h] BYREF
  unsigned __int16 *v93; // [rsp+F8h] [rbp-F0h]

  v7 = *(_QWORD *)(a1 + 23936);
  v8 = 0LL;
  v9 = a1;
  v87 = a5;
  LOBYTE(v6) = 0;
  v85 = a6;
  v75 = PpmDripsStateIndex;
  v77 = a1;
  v86 = a2;
  v78 = v7 + 488;
  v82 = a4;
  v83 = a3;
  v69 = v6;
  v72 = v7;
  v81 = PpmPlatformStates;
  v79 = 0LL;
  if ( !*(_BYTE *)(a1 + 33) || !PopDeepSleepIsEnabled || !PopDeepSleepIsEngaged || PopDeepSleepEvaluateWorkItemQueued )
    goto LABEL_2;
  if ( PpmPlatformStates )
    v17 = 1;
  else
    v17 = *(_DWORD *)(v7 + 28) > 1u;
LABEL_87:
  v69 = v17;
  while ( 1 )
  {
LABEL_2:
    v10 = *(_QWORD *)(v9 + 23936);
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
    v9 = v77;
    v16 = PerformanceCounter;
    v17 = v69;
    if ( PerformanceCounter.QuadPart > (unsigned __int64)v12.QuadPart )
    {
      v18 = -1 - v12.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
        v18 <<= MEMORY[0xFFFFF78000000369];
      v8 = ((unsigned __int64)v18 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v90 = v8;
    }
    v19 = v13 + v8;
    v20 = v82;
    v8 = 0LL;
    *v82 = v19;
    *(LARGE_INTEGER *)(v10 + 496) = v16;
    *(_QWORD *)(v10 + 504) = *(_QWORD *)(v9 + 23960) + *(_QWORD *)(v9 + 24136);
    *(_BYTE *)(v10 + 538) = *(_BYTE *)(v9 + 24354);
    *(_BYTE *)(v10 + 536) = *(_BYTE *)(v9 + 23992);
    *(_BYTE *)(v10 + 537) = *(_BYTE *)(v9 + 23993);
    *(_BYTE *)(v10 + 539) = 1;
    if ( *(_BYTE *)(v9 + 33)
      && (CurrentPrcb = KeGetCurrentPrcb(),
          v54 = 0,
          ParentNode = (LARGE_INTEGER)CurrentPrcb->ParentNode,
          v55 = *(unsigned __int16 *)(ParentNode.QuadPart + 146),
          v56 = *(_QWORD *)(ParentNode.QuadPart + 64) & ~(1LL << CurrentPrcb->GroupIndex),
          v91 = *(_QWORD *)(ParentNode.QuadPart + 136) & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F)),
          v56 == v91) )
    {
      while ( ++v54 != (unsigned __int16)KeNumberNodes )
      {
        v57 = KeNodeBlock[*((unsigned __int16 *)qword_14036C1C0
                          + v54
                          + (unsigned int)(unsigned __int16)KeNumberNodes * v55)];
        v91 = *(_QWORD *)(v57 + 136);
        if ( *(_QWORD *)(v57 + 64) != v91 )
          goto LABEL_10;
      }
      *(_BYTE *)(v10 + 540) = 1;
      *(_WORD *)(v10 + 48) |= 0x80u;
    }
    else
    {
LABEL_10:
      *(_BYTE *)(v10 + 540) = 0;
    }
    if ( *(_BYTE *)(v10 + 1) )
    {
      *(_WORD *)(v10 + 48) |= 0x100u;
      *(_DWORD *)(v10 + 528) = *(_DWORD *)(v10 + 24);
    }
    else
    {
      *(_DWORD *)(v10 + 528) = -1;
    }
    *v83 = v16;
    if ( v69 && !*(_BYTE *)(v72 + 540) )
    {
      *(_WORD *)(v72 + 48) = 0;
      LOBYTE(v17) = 0;
      goto LABEL_87;
    }
    v21 = *(_BYTE *)(v9 + 33) == 0;
    v22 = *v20;
    v23 = *(_QWORD *)(v9 + 23936);
    v71 = *v20;
    v84 = v23;
    if ( v21 && KiSerializeTimerExpiration )
    {
      QuadPart = 0LL;
      v76 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v25 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v58 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v25 ^ (unsigned __int16)(v25 ^ (v25 - 1)), v25);
          if ( v25 == v58 )
            break;
          v25 = v58;
          _mm_pause();
          if ( !(_WORD)v58 )
            goto LABEL_19;
        }
        v76 = v25 >> 16;
      }
    }
    else
    {
      QuadPart = 0LL;
      v76 = 0LL;
    }
LABEL_19:
    v26 = -1LL;
    v27 = 0;
    v28 = v69;
    v29 = *(unsigned __int8 *)(*(_QWORD *)(v9 + 23936) + 540LL);
    if ( *(_BYTE *)(v9 + 33) )
      v27 = 8;
    if ( v69 )
      v27 |= 4u;
    v30.QuadPart = 2LL;
    v21 = *(_BYTE *)(v9 + 33) == 0;
    v31 = 2;
    v32 = KiClockTimerNextTickTime;
    v70 = 2;
    if ( v21 )
    {
      if ( *(_QWORD *)(v9 + 16) )
      {
        v31 = 1;
      }
      else if ( KiSerializeTimerExpiration || PoSkipTickMode != 2 )
      {
        v31 = 4;
        if ( v69 )
          NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(v29);
        else
          NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v9, v22, 0LL);
        QuadPart = NextWakeTimeForDeepSleep;
        if ( KiGroupSchedulingEnabled )
        {
          v34 = 0x140000000uLL;
          v35 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v9 + 36)];
          if ( (((unsigned __int64)qword_14033FEC8[v35 >> 6] >> (v35 & 0x3F)) & 1) != 0
            && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < QuadPart )
          {
            QuadPart = KiGenerationEndTick * KeMaximumIncrement;
            v31 = 5;
          }
        }
        if ( !*(_BYTE *)(v9 + 33) )
          goto LABEL_31;
        ParentNode.QuadPart = -1LL;
        LOBYTE(v34) = 0;
        v59 = 2LL;
        if ( v69 )
          v59 = 3LL;
        do
        {
          v30.QuadPart = qword_140356750[3 * v59];
          if ( v30.QuadPart < (unsigned __int64)ParentNode.QuadPart )
          {
            v34 = (unsigned __int8)v34;
            ParentNode.QuadPart = qword_140356750[3 * v59];
            if ( v59 == 3 )
              v34 = 1LL;
          }
          ++v59;
        }
        while ( v59 <= 3 );
        v9 = v77;
        v23 = v84;
        if ( ParentNode.QuadPart < QuadPart )
        {
          v31 = 6;
          QuadPart = ParentNode.QuadPart;
          if ( (_BYTE)v34 )
            v31 = 7;
        }
        if ( *(_BYTE *)(v77 + 33)
          && (v60 = ((__int64 (__fastcall *)(__int64, unsigned __int64))off_14033B678[0])(v59, v34)) != 0 )
        {
          v22 = v71;
          if ( QuadPart > v60 )
          {
            QuadPart = v60;
            v31 = 9;
            if ( v71 > v60 )
              QuadPart = v71;
          }
        }
        else
        {
LABEL_31:
          v22 = v71;
        }
      }
      v80 = QuadPart;
      v70 = v31;
      if ( v32 <= QuadPart )
        v32 = QuadPart;
    }
    else if ( (_BYTE)v29 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      LOBYTE(v28) = 1;
      KiGetNextTimerExpirationDueTime(v9, v28, v22, v69, (__int64)&v80, (__int64)&v70);
      v22 = v71;
      if ( v71 + (unsigned int)KiLastRequestedTimeIncrement < v80 )
      {
        LOBYTE(v31) = v70;
        v32 = v80;
      }
      else
      {
        v70 = 2;
      }
    }
    if ( v32 == -1LL )
    {
      v36 = -1LL;
    }
    else if ( v32 <= v22 )
    {
      v36 = 0LL;
    }
    else
    {
      v36 = v32 - v22;
    }
    v37 = *(unsigned int *)(v9 + 11684);
    v38 = 0;
    for ( i = v37; i; i >>= 4 )
      v38 += KeMaximumIncrement;
    v40 = v38;
    if ( !v69 && (_DWORD)v37 )
    {
      v41 = v37 + 1;
      v37 = KeMaximumIncrement % ((int)v37 + 1);
      v42 = KeMaximumIncrement / v41;
      if ( !(KeMaximumIncrement / v41) )
        v42 = 1;
      v26 = v42;
    }
    if ( v36 <= v26 )
    {
      v26 = v36;
      v40 = v36;
    }
    else
    {
      if ( v36 < v40 )
        v40 = v36;
      v27 |= 1u;
    }
    if ( PpmIdleDurationExpirationTimeout
      && *(_BYTE *)(v9 + 33)
      && (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PpmGetIdleConstrainedMask)(
                            v92,
                            v37,
                            (LARGE_INTEGER)v30.QuadPart,
                            (LARGE_INTEGER)ParentNode.QuadPart) )
    {
      v61 = 0LL;
      v89 = 0;
      v88[1] = v93;
      v88[0] = (unsigned __int16 *)v92;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v73, v88) )
      {
        Prcb = KeGetPrcb(v73);
        v63 = *(_QWORD *)(Prcb + 23976);
        if ( v63 != -1LL && v63 > v61 )
          v61 = *(_QWORD *)(Prcb + 23976);
      }
      if ( v61 && v40 + v71 > v61 )
      {
        v27 |= 0x2000u;
        v40 = v61 > v71 ? (unsigned int)(v61 - v71) : 1LL;
        if ( v40 < v26 )
          v26 = v40;
      }
    }
    if ( v26 < v76 )
    {
      v26 = v76;
      v40 = v76;
      v27 |= 0x1000u;
    }
    *(_WORD *)(v23 + 48) |= v27;
    v43 = v72;
    *(_BYTE *)(v23 + 541) = v31;
    v44 = v78;
    *(_QWORD *)(v23 + 520) = v40;
    *(_QWORD *)(v23 + 512) = v26;
    (*(void (__fastcall **)(__int64))(v43 + 408))(v44);
    v45 = *(_DWORD *)(v44 + 76);
    v46 = *(unsigned int *)(v44 + 72);
    LODWORD(v71) = v45;
    if ( v45 == -2 || v45 == -1 )
      break;
    v47 = *(_QWORD *)(v9 + 23944);
    v21 = !_BitScanForward(&v48, *(_DWORD *)(v44 + 80));
    v74 = v48;
    if ( !v21 )
    {
      do
      {
        *(_DWORD *)(v44 + 80) &= *(_DWORD *)(v44 + 80) - 1;
        ++*(_DWORD *)(1000LL * v48 + v47 + 52);
        v21 = !_BitScanForward(&v48, *(_DWORD *)(v44 + 80));
      }
      while ( !v21 );
      v74 = v48;
    }
    v49 = 0;
    v50 = *(_QWORD *)(v44 + 64);
    if ( *(_DWORD *)(v44 + 60) )
    {
      v64 = (_WORD *)v85;
      v65 = *(unsigned int *)(v44 + 60);
      do
      {
        if ( *(_BYTE *)(v50 + 4) == 0xFF )
        {
          v66 = v49;
          if ( !v49 )
            v66 = 1;
          v49 = v66;
          KeAddProcessorAffinityEx(v64, *(_DWORD *)v50);
        }
        v50 += 8LL;
        --v65;
      }
      while ( v65 );
      v9 = v77;
      v45 = v71;
      v44 = v78;
      if ( v49 && *(_BYTE *)(v78 + 52) )
      {
        v67 = v79;
        if ( v79 < *(_QWORD *)(v78 + 24) )
          v67 = *(_QWORD *)(v78 + 24);
        v79 = v67;
      }
    }
    v51 = v69;
    if ( !v69 )
      goto LABEL_56;
    if ( v81 )
    {
      if ( (_DWORD)v46 != -1 && (unsigned int)v46 >= v75 )
        goto LABEL_56;
      v68 = v72;
    }
    else
    {
      v68 = v72;
      if ( v45 == *(_DWORD *)(v72 + 28) - 1 )
        goto LABEL_56;
    }
    LOBYTE(v69) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v68 + 464))(*(_QWORD *)v44, 0LL);
    ++*(_DWORD *)(1000LL * v45 + v47 + 48);
    if ( (_DWORD)v46 != -1 && v81 )
      ++*(_DWORD *)(1008 * v46 + *(_QWORD *)(v81 + 48) + 24);
    v8 = 0LL;
    *(_WORD *)(v68 + 48) = 2;
  }
  v51 = 0;
LABEL_56:
  *v86 = v51;
  *v87 = v79;
  return v45;
}
