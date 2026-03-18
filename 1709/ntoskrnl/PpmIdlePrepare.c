/*
 * XREFs of PpmIdlePrepare @ 0x140099130
 * Callers:
 *     PoIdle @ 0x1400967A0 (PoIdle.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KiFindNextTimerDueTime @ 0x14009A4F0 (KiFindNextTimerDueTime.c)
 *     MmGetNextNode @ 0x14010F668 (MmGetNextNode.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14010F698 (KiGetNextTimerExpirationDueTime.c)
 *     PpmGetIdleConstrainedMask @ 0x140142F00 (PpmGetIdleConstrainedMask.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14028649C (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        _BYTE *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rbx
  LARGE_INTEGER v13; // r14
  __int64 v14; // r12
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER ParentNode; // r9
  LARGE_INTEGER v17; // r10
  __int64 v18; // r13
  __int64 v19; // rdx
  unsigned __int64 *v20; // rbx
  unsigned __int64 v21; // r10
  __int64 v22; // r15
  unsigned __int64 QuadPart; // rsi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r14
  __int16 v26; // r13
  __int64 v27; // rcx
  char v28; // al
  int v29; // edx
  __int64 v30; // r8
  bool v31; // zf
  int v32; // r12d
  unsigned __int64 v33; // rbx
  __int64 NextWakeTimeForDeepSleep; // rax
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
  __int64 v46; // r15
  unsigned int v47; // edx
  char v48; // r14
  __int64 v49; // rsi
  char v50; // cl
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v54; // r11d
  int NextNode; // eax
  signed __int64 v56; // rax
  LARGE_INTEGER v57; // rdx
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
  int v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v70; // [rsp+38h] [rbp-C8h]
  __int64 v71; // [rsp+40h] [rbp-C0h]
  int v72; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v73; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v74; // [rsp+50h] [rbp-B0h]
  unsigned int v75; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v76; // [rsp+58h] [rbp-A8h]
  __int64 v77; // [rsp+60h] [rbp-A0h]
  __int64 v78; // [rsp+68h] [rbp-98h]
  unsigned __int64 v79; // [rsp+70h] [rbp-90h]
  unsigned __int64 v80; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v81; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER *v82; // [rsp+88h] [rbp-78h]
  __int64 v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h]
  _BYTE *v86; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v87; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v88[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v89; // [rsp+C8h] [rbp-38h]
  __int64 v90; // [rsp+D0h] [rbp-30h]
  char v91[8]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 *v92; // [rsp+E8h] [rbp-18h]

  v7 = a1;
  LOBYTE(v6) = 0;
  v87 = a5;
  v84 = a6;
  v77 = a1;
  v8 = *(_QWORD *)(a1 + 23808);
  v86 = a2;
  v75 = PpmDripsStateIndex;
  v81 = a4;
  v82 = a3;
  v78 = v8 + 488;
  v68 = v6;
  v71 = v8;
  v85 = PpmPlatformStates;
  v79 = 0LL;
  if ( *(_BYTE *)(v7 + 33) )
  {
    if ( PopDeepSleepIsEnabled && PopDeepSleepIsEngaged && !PopDeepSleepEvaluateWorkItemQueued )
    {
      if ( PpmPlatformStates )
        LODWORD(v18) = 1;
      else
        LODWORD(v18) = *(_DWORD *)(v8 + 28) > 1u;
      goto LABEL_94;
    }
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(v7 + 23808);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
      {
        v13.QuadPart = MEMORY[0xFFFFF78000000350];
        v14 = MEMORY[0xFFFFF78000000008];
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( MEMORY[0xFFFFF78000000340] == v12 )
          break;
      }
      _mm_pause();
    }
    v7 = v77;
    v17 = PerformanceCounter;
    LODWORD(v18) = v68;
    if ( PerformanceCounter.QuadPart > (unsigned __int64)v13.QuadPart )
    {
      v19 = -1 - v13.QuadPart + PerformanceCounter.QuadPart;
      if ( MEMORY[0xFFFFF78000000369] )
        v19 <<= MEMORY[0xFFFFF78000000369];
      v11 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v90 = v11;
    }
    v20 = v81;
    *v81 = v14 + v11;
    *(LARGE_INTEGER *)(v10 + 496) = v17;
    *(_QWORD *)(v10 + 504) = *(_QWORD *)(v7 + 23832) + *(_QWORD *)(v7 + 24008);
    *(_BYTE *)(v10 + 538) = *(_BYTE *)(v7 + 24226);
    *(_BYTE *)(v10 + 536) = *(_BYTE *)(v7 + 23864);
    *(_BYTE *)(v10 + 537) = *(_BYTE *)(v7 + 23865);
    *(_BYTE *)(v10 + 539) = 1;
    if ( *(_BYTE *)(v7 + 33)
      && (CurrentPrcb = KeGetCurrentPrcb(),
          v72 = 0,
          ParentNode = (LARGE_INTEGER)CurrentPrcb->ParentNode,
          v54 = *(unsigned __int16 *)(ParentNode.QuadPart + 146),
          (*(_QWORD *)(ParentNode.QuadPart + 64) & ~(1LL << CurrentPrcb->GroupIndex)) == (*(_QWORD *)(ParentNode.QuadPart + 136) & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F)))) )
    {
      while ( 1 )
      {
        NextNode = MmGetNextNode(v54, &v72);
        if ( NextNode == -1 )
          break;
        if ( *(_QWORD *)(KeNodeBlock[NextNode] + 64) != *(_QWORD *)(KeNodeBlock[NextNode] + 136) )
          goto LABEL_12;
      }
      *(_BYTE *)(v10 + 540) = 1;
      *(_WORD *)(v10 + 48) |= 0x80u;
    }
    else
    {
LABEL_12:
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
    *v82 = v17;
    if ( (_BYTE)v68 && !*(_BYTE *)(v71 + 540) )
    {
      *(_WORD *)(v71 + 48) = 0;
      LOBYTE(v18) = 0;
      goto LABEL_94;
    }
    v21 = *v20;
    v22 = *(_QWORD *)(v7 + 23808);
    v70 = *v20;
    v83 = v22;
    if ( !KiSerializeTimerExpiration || *(_BYTE *)(v7 + 33) )
    {
      QuadPart = 0LL;
      v76 = 0LL;
    }
    else
    {
      QuadPart = 0LL;
      v76 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v24 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v56 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v24 ^ (unsigned __int16)(v24 ^ (v24 - 1)), v24);
          if ( v24 == v56 )
            break;
          v24 = v56;
          _mm_pause();
          if ( !(_WORD)v56 )
            goto LABEL_21;
        }
        v76 = v24 >> 16;
      }
    }
LABEL_21:
    v25 = -1LL;
    v26 = 0;
    v27 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 23808) + 540LL);
    v28 = *(_BYTE *)(v7 + 33);
    if ( v28 )
      v26 = 8;
    v29 = v68;
    if ( (_BYTE)v68 )
    {
      v26 = 12;
      if ( !v28 )
        v26 = 4;
    }
    v30 = 2LL;
    v31 = *(_BYTE *)(v7 + 33) == 0;
    v32 = 2;
    v33 = KiClockTimerNextTickTime;
    v69 = 2;
    if ( v31 )
    {
      if ( *(_QWORD *)(v7 + 16) )
      {
        v32 = 1;
      }
      else if ( PoSkipTickMode != 2 || KiSerializeTimerExpiration )
      {
        v32 = 4;
        if ( (_BYTE)v68 )
          NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(v27);
        else
          NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v7, v21, 0LL);
        QuadPart = NextWakeTimeForDeepSleep;
        if ( KiGroupSchedulingEnabled )
        {
          v35 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v7 + 36)];
          if ( (((unsigned __int64)qword_140358548[v35 >> 6] >> (v35 & 0x3F)) & 1) != 0
            && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < QuadPart )
          {
            QuadPart = KiGenerationEndTick * KeMaximumIncrement;
            v32 = 5;
          }
        }
        if ( !*(_BYTE *)(v7 + 33) )
          goto LABEL_32;
        v57.QuadPart = -1LL;
        v58 = (unsigned __int8)v68 + 2LL;
        LOBYTE(v30) = 0;
        do
        {
          ParentNode.QuadPart = qword_140371250[3 * v58];
          if ( ParentNode.QuadPart < (unsigned __int64)v57.QuadPart )
          {
            v30 = (unsigned __int8)v30;
            v57.QuadPart = qword_140371250[3 * v58];
            if ( v58 == 3 )
              v30 = 1LL;
          }
          ++v58;
        }
        while ( v58 <= 3 );
        v7 = v77;
        v22 = v83;
        if ( v57.QuadPart < QuadPart )
        {
          v32 = 6;
          QuadPart = v57.QuadPart;
          if ( (_BYTE)v30 )
            v32 = 7;
        }
        if ( *(_BYTE *)(v77 + 33)
          && (v59 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))off_1403536A8[0])(
                      v58,
                      (LARGE_INTEGER)v57.QuadPart,
                      v30)) != 0 )
        {
          v21 = v70;
          if ( QuadPart > v59 )
          {
            QuadPart = v59;
            v32 = 9;
            if ( v70 > v59 )
              QuadPart = v70;
          }
        }
        else
        {
LABEL_32:
          v21 = v70;
        }
      }
      v80 = QuadPart;
      v69 = v32;
      if ( v33 <= QuadPart )
        v33 = QuadPart;
    }
    else if ( (_BYTE)v27 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      LOBYTE(v29) = 1;
      KiGetNextTimerExpirationDueTime(v7, v29, v21, (unsigned __int8)v68, (__int64)&v80, (__int64)&v69);
      v21 = v70;
      if ( v70 + (unsigned int)KiLastRequestedTimeIncrement < v80 )
      {
        LOBYTE(v32) = v69;
        v33 = v80;
      }
      else
      {
        v69 = 2;
      }
    }
    if ( v33 == -1LL )
    {
      v36 = -1LL;
    }
    else if ( v33 <= v21 )
    {
      v36 = 0LL;
    }
    else
    {
      v36 = v33 - v21;
    }
    v37 = *(unsigned int *)(v7 + 11684);
    v38 = 0;
    for ( i = v37; i; i >>= 4 )
      v38 += KeMaximumIncrement;
    v40 = v38;
    if ( !(_BYTE)v68 && (_DWORD)v37 )
    {
      v41 = v37 + 1;
      v37 = KeMaximumIncrement % ((int)v37 + 1);
      v42 = KeMaximumIncrement / v41;
      if ( !(KeMaximumIncrement / v41) )
        v42 = 1;
      v25 = v42;
    }
    if ( v36 <= v25 )
    {
      v25 = v36;
      v40 = v36;
    }
    else
    {
      if ( v36 < v40 )
        v40 = v36;
      v26 |= 1u;
    }
    if ( PpmIdleDurationExpirationTimeout
      && *(_BYTE *)(v7 + 33)
      && (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PpmGetIdleConstrainedMask)(
                            v91,
                            v37,
                            v30,
                            (LARGE_INTEGER)ParentNode.QuadPart) )
    {
      v60 = 0LL;
      v89 = 0;
      v88[1] = v92;
      v88[0] = (unsigned __int16 *)v91;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v73, v88) )
      {
        Prcb = KeGetPrcb(v73);
        v62 = *(_QWORD *)(Prcb + 23848);
        if ( v62 != -1LL && v62 > v60 )
          v60 = *(_QWORD *)(Prcb + 23848);
      }
      if ( v60 && v40 + v70 > v60 )
      {
        v26 |= 0x2000u;
        v40 = v60 > v70 ? (unsigned int)(v60 - v70) : 1LL;
        if ( v40 < v25 )
          v25 = v40;
      }
    }
    if ( v25 < v76 )
    {
      v25 = v76;
      v40 = v76;
      v26 |= 0x1000u;
    }
    *(_WORD *)(v22 + 48) |= v26;
    v43 = v71;
    *(_BYTE *)(v22 + 541) = v32;
    v44 = v78;
    *(_QWORD *)(v22 + 520) = v40;
    *(_QWORD *)(v22 + 512) = v25;
    (*(void (__fastcall **)(__int64))(v43 + 408))(v44);
    v45 = *(_DWORD *)(v44 + 76);
    v18 = *(unsigned int *)(v44 + 72);
    LODWORD(v70) = v45;
    if ( v45 == -2 || v45 == -1 )
      break;
    v46 = *(_QWORD *)(v7 + 23816);
    v31 = !_BitScanForward(&v47, *(_DWORD *)(v44 + 80));
    v74 = v47;
    if ( !v31 )
    {
      do
      {
        *(_DWORD *)(v44 + 80) &= *(_DWORD *)(v44 + 80) - 1;
        ++*(_DWORD *)(1000LL * v47 + v46 + 52);
        v31 = !_BitScanForward(&v47, *(_DWORD *)(v44 + 80));
      }
      while ( !v31 );
      v74 = v47;
    }
    v48 = 0;
    v49 = *(_QWORD *)(v44 + 64);
    if ( *(_DWORD *)(v44 + 60) )
    {
      v63 = (_WORD *)v84;
      v64 = *(unsigned int *)(v44 + 60);
      do
      {
        if ( *(_BYTE *)(v49 + 4) == 0xFF )
        {
          v65 = v48;
          if ( !v48 )
            v65 = 1;
          v48 = v65;
          KeAddProcessorAffinityEx(v63, *(_DWORD *)v49);
        }
        v49 += 8LL;
        --v64;
      }
      while ( v64 );
      v7 = v77;
      v45 = v70;
      v44 = v78;
      if ( v48 && *(_BYTE *)(v78 + 52) )
      {
        v66 = v79;
        if ( v79 < *(_QWORD *)(v78 + 24) )
          v66 = *(_QWORD *)(v78 + 24);
        v79 = v66;
      }
    }
    v50 = v68;
    if ( !(_BYTE)v68 )
      goto LABEL_57;
    v67 = v85;
    if ( v85 )
    {
      if ( (_DWORD)v18 != -1 && (unsigned int)v18 >= v75 )
        goto LABEL_57;
    }
    else if ( v45 == *(_DWORD *)(v71 + 28) - 1 )
    {
      goto LABEL_57;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(v71 + 464))(*(_QWORD *)v44, 0LL);
    ++*(_DWORD *)(1000LL * v45 + v46 + 48);
    if ( (_DWORD)v18 != -1 && v67 )
      ++*(_DWORD *)(1008 * v18 + *(_QWORD *)(v67 + 48) + 24);
    LOBYTE(v18) = 0;
    *(_WORD *)(v71 + 48) = 2;
LABEL_94:
    v68 = v18;
  }
  v50 = 0;
LABEL_57:
  *v86 = v50;
  *v87 = v79;
  return v45;
}
