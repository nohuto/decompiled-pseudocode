/*
 * XREFs of PpmRegisterPerfStates @ 0x14063EACC
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x14063E9F0 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14076FC30 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x14007ED10 (KeFindFirstSetRightGroupAffinity.c)
 *     KeFirstGroupAffinityEx @ 0x1400C5EE0 (KeFirstGroupAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400D3780 (KeOrAffinityEx.c)
 *     PpmInstallFeedbackCounters @ 0x14017F278 (PpmInstallFeedbackCounters.c)
 *     PpmParkApplyPolicy @ 0x14017FB78 (PpmParkApplyPolicy.c)
 *     KeIsEqualAffinityEx @ 0x14017FE90 (KeIsEqualAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x14017FF30 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14027D514 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x140612240 (PpmUpdateProcessorPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x14063EA98 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x14063F5C0 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x14063F71C (PpmCheckReInit.c)
 */

__int64 __fastcall PpmRegisterPerfStates(_DWORD *a1, char a2)
{
  unsigned int v2; // r13d
  int v4; // eax
  _DWORD *v5; // rsi
  unsigned int v6; // r14d
  char *v7; // rdi
  char v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r15d
  __int64 *v14; // rdx
  __int64 v15; // r8
  bool v16; // zf
  int v17; // ecx
  unsigned int v18; // ebx
  SIZE_T v19; // r14
  char *PoolWithTag; // rax
  int v21; // ebx
  char *v22; // r14
  __int64 v23; // r15
  char *v24; // r14
  __int64 v25; // r13
  __int64 v26; // rdx
  ULONG v27; // ebx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // eax
  bool v31; // al
  int v32; // ebx
  __int64 *v33; // r10
  __int64 v34; // r13
  int v35; // r11d
  char *v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rdx
  ULONG FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v42; // edx
  __int64 v43; // rcx
  _DWORD *v44; // rax
  char v45; // al
  unsigned int v46; // ebx
  char *v47; // rsi
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rcx
  char *v51; // rdx
  char **v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  char v56; // al
  __int64 v57; // r8
  _BYTE *v58; // r9
  __int64 v59; // rdx
  signed __int32 v61[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v62; // [rsp+28h] [rbp-E0h] BYREF
  int v63; // [rsp+30h] [rbp-D8h]
  int v64; // [rsp+34h] [rbp-D4h]
  int v65; // [rsp+38h] [rbp-D0h]
  ULONG v66; // [rsp+3Ch] [rbp-CCh]
  __int64 v67; // [rsp+40h] [rbp-C8h]
  __int64 v68; // [rsp+48h] [rbp-C0h]
  char *v69; // [rsp+50h] [rbp-B8h]
  _DWORD *v70; // [rsp+58h] [rbp-B0h]
  _QWORD v71[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v72[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v73[3]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v74[44]; // [rsp+98h] [rbp-70h] BYREF
  char v75[176]; // [rsp+148h] [rbp+40h] BYREF

  v2 = a1[4];
  v4 = a1[5];
  v5 = a1;
  v6 = a1[9];
  v70 = a1;
  LODWORD(v67) = v2;
  v7 = 0LL;
  v65 = v4;
  v8 = 0;
  v74[0] = 1310721;
  memset(&v74[1], 0, 0xA4uLL);
  KeQueryActiveProcessorAffinity((__int64)v75);
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v9 = -1;
  v10 = 0LL;
  v62 = -1LL;
  if ( v6 )
  {
    v11 = *((_QWORD *)v5 + 51);
    do
    {
      v12 = *(unsigned int *)(v11 + 24 * v10 + 12);
      if ( (unsigned int)v12 >= 2 )
        goto LABEL_18;
      if ( *((_DWORD *)&v62 + v12) == -1 )
        *((_DWORD *)&v62 + v12) = v10;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < v6 );
    v9 = v62;
  }
  if ( v9 == -1 && HIDWORD(v62) == -1 )
  {
LABEL_18:
    v21 = -1073741811;
    goto LABEL_42;
  }
  v13 = 0;
  v14 = &v62;
  v15 = 2LL;
  do
  {
    v16 = *(_DWORD *)v14 == -1;
    v17 = v13 + 1;
    v14 = (__int64 *)((char *)v14 + 4);
    if ( v16 )
      v17 = v13;
    v13 = v17;
    --v15;
  }
  while ( v15 );
  v64 = v17;
  v18 = (136 * v2 + 711) & 0xFFFFFFF8;
  v19 = v18 + 48 * v2 * v17;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x704D5050u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v21 = -1073741670;
    goto LABEL_42;
  }
  memset(PoolWithTag, 0, v19);
  v63 = 0;
  v22 = v7 + 704;
  v69 = &v7[v18];
  if ( !v2 )
  {
LABEL_39:
    if ( (unsigned int)KeIsEmptyAffinityEx(v74) )
    {
      v7[207] = 1;
    }
    else
    {
      KeFirstGroupAffinityEx(v73, v74);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v73);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v7 + 2) = Prcb;
      v7[204] = *(_BYTE *)(Prcb + 23858);
    }
    KeCopyAffinityEx((__int64)(v7 + 24), (unsigned __int16 *)v74);
    *((_QWORD *)v7 + 27) = *((_QWORD *)v5 + 31);
    *((_QWORD *)v7 + 29) = *((_QWORD *)v5 + 33);
    *((_QWORD *)v7 + 30) = *((_QWORD *)v5 + 34);
    *((_QWORD *)v7 + 31) = *((_QWORD *)v5 + 35);
    *((_QWORD *)v7 + 32) = *((_QWORD *)v5 + 36);
    *((_QWORD *)v7 + 33) = *((_QWORD *)v5 + 37);
    *((_QWORD *)v7 + 28) = *((_QWORD *)v5 + 32);
    *((_QWORD *)v7 + 24) = *((_QWORD *)v5 + 9);
    *((_QWORD *)v7 + 26) = v22;
    *((_DWORD *)v7 + 130) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v42 = v65;
    v43 = 4LL;
    *((LARGE_INTEGER *)v7 + 86) = PerformanceCounter;
    *((_DWORD *)v7 + 79) = v42;
    *((_DWORD *)v7 + 50) = v2;
    *((_DWORD *)v7 + 80) = v5[6];
    *((_DWORD *)v7 + 81) = v5[7];
    *((_DWORD *)v7 + 82) = v5[8];
    v7[353] = *((_BYTE *)v5 + 4);
    *((_QWORD *)v7 + 36) = *((_QWORD *)v5 + 42);
    *((_QWORD *)v7 + 37) = *((_QWORD *)v5 + 43);
    *((_QWORD *)v7 + 38) = *((_QWORD *)v5 + 44);
    *((_QWORD *)v7 + 34) = *((_QWORD *)v5 + 40);
    *((_QWORD *)v7 + 35) = *((_QWORD *)v5 + 41);
    v7[359] = *((_BYTE *)v5 + 44);
    v44 = v7 + 540;
    do
    {
      *(v44 - 1) = 100;
      *v44 = v42;
      v44 += 10;
      --v43;
    }
    while ( v43 );
    v7[354] = *((_BYTE *)v5 + 6);
    v7[355] = *((_BYTE *)v5 + 7);
    v7[356] = *((_BYTE *)v5 + 8);
    if ( *((_WORD *)v5 + 2) == 253 || (v45 = 1, *((_QWORD *)v5 + 44)) )
      v45 = 0;
    v7[358] = v45;
    v7[357] = *((_BYTE *)v5 + 11);
    if ( PpmPerfQosManageIdleProcessors == -1 )
      PpmPerfQosManageIdleProcessors = *((_BYTE *)v5 + 12) != 0;
    *((_QWORD *)v7 + 42) = *((_QWORD *)v5 + 6);
    *((_QWORD *)v7 + 43) = *((_QWORD *)v5 + 7);
    v7[352] = 100;
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)(unsigned int)v5[10] )
      PpmCheckMinimumPeriod = (unsigned int)v5[10];
    if ( *((_QWORD *)v7 + 30) )
      PpmAllowedActions |= 0x80u;
    if ( *((_QWORD *)v7 + 29) )
      PpmAllowedActions |= 0x40u;
    if ( *((_QWORD *)v7 + 28) )
      PpmAllowedActions |= 0x400u;
    if ( *((_QWORD *)v7 + 31) )
      PpmAllowedActions |= 0x20u;
    if ( *((_QWORD *)v7 + 33) )
      PpmAllowedActions |= 0x100u;
    if ( *((_QWORD *)v7 + 32) )
      PpmAllowedActions |= 0x200u;
    if ( *((_BYTE *)v5 + 9) )
      PpmPerfEppViaPerfControl = 1;
    if ( *((_BYTE *)v5 + 10) )
      PpmPerfAutonomousActivityWindowViaPerfControl = 1;
    _InterlockedOr(v61, 0);
    v46 = 0;
    if ( v2 )
    {
      v47 = v69;
      do
      {
        if ( !v22[16] )
        {
          v48 = *(_QWORD *)v22;
          v49 = 2LL;
          *(_DWORD *)(v48 + 24240) = 0x10000;
          *(_QWORD *)(v48 + 24184) = &v7[136 * v46 + 704];
          v50 = &v62;
          *(_QWORD *)(v48 + 24176) = v7;
          v51 = &v47[48 * v13 * v46];
          v71[0] = 0LL;
          v71[1] = 0LL;
          v52 = (char **)v71;
          do
          {
            if ( *(_DWORD *)v50 != -1 )
            {
              *v52 = v51;
              v51 += 48;
            }
            v50 = (__int64 *)((char *)v50 + 4);
            ++v52;
            --v49;
          }
          while ( v49 );
          PpmInstallFeedbackCounters(v48, v71);
        }
        ++v46;
        v22 += 136;
      }
      while ( v46 < v2 );
      v5 = v70;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *((_QWORD *)v5 + 8);
    v53 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v53 = *((_QWORD *)v5 + 45);
      PpmPerfControlReadFeedback = v53;
    }
    if ( !PpmPerfControlAcquirePerformance )
      PpmPerfControlAcquirePerformance = *((_QWORD *)v5 + 46);
    if ( !PpmPerfControlCommitPerformance )
      PpmPerfControlCommitPerformance = *((_QWORD *)v5 + 47);
    if ( !PpmParkPreferenceHandler )
      PpmParkPreferenceHandler = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v5 + 48);
    if ( !PpmParkMaskHandler )
      PpmParkMaskHandler = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v5 + 49);
    if ( !PpmCheckCompleteHandler )
      PpmCheckCompleteHandler = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v5 + 50);
    if ( !PpmPerfControlStartPolicyUpdate )
      PpmPerfControlStartPolicyUpdate = (__int64 (*)(void))*((_QWORD *)v5 + 38);
    if ( !PpmPerfControlCompletePolicyUpdate )
      PpmPerfControlCompletePolicyUpdate = (__int64 (*)(void))*((_QWORD *)v5 + 39);
    if ( v53 )
      PpmCheckPollForFeedback = 1;
    v54 = (_QWORD *)qword_14044C350;
    ++PpmPerfDomainCount;
    if ( *(__int64 **)qword_14044C350 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v7 = &PpmPerfDomainHead;
    v8 = 1;
    *((_QWORD *)v7 + 1) = v54;
    *v54 = v7;
    v55 = PpmPerfDomainHead;
    qword_14044C350 = (__int64)v7;
    while ( (__int64 *)v55 != &PpmPerfDomainHead )
    {
      v56 = *(_BYTE *)(v55 + 357);
      v55 = *(_QWORD *)v55;
      v8 = v56 != 0 ? v8 : 0;
    }
    KeOrAffinityEx((unsigned __int16 *)v74, PpmPerfStatesRegistered, PpmPerfStatesRegistered);
    *((_WORD *)v7 + 350) = 257;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, (__int64)v7);
    PopExecuteOnTargetProcessors((__int64)v74, (__int64)PpmCheckReset, 0LL, 0LL);
    v59 = *(_QWORD *)&v74[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    if ( (v59 & 1) != 0 )
      PpmParkApplyPolicy(KiProcessorIndexToNumberMappingTable[0] & 0x3F, v59, v57, v58);
    PpmCheckReInit();
    v7 = 0LL;
    v21 = 0;
    PpmPerfUpdateDomainPolicy(1);
    goto LABEL_107;
  }
  v23 = 0LL;
  v24 = v7 + 724;
  while ( 1 )
  {
    v25 = *((_QWORD *)v5 + 52);
    *(v24 - 4) = *(_BYTE *)(v23 + v25 + 28);
    v26 = *(unsigned int *)(v23 + v25);
    if ( !*(_BYTE *)(v23 + v25 + 28) )
      break;
    v27 = -1;
    *(_DWORD *)v24 = v26;
LABEL_27:
    *((_DWORD *)v24 + 7) = 100;
    *(_QWORD *)(v24 - 12) = *(_QWORD *)(v23 + v25 + 8);
    *((_DWORD *)v24 + 1) = *(_DWORD *)(v23 + v25 + 16);
    *((_DWORD *)v24 + 2) = *(_DWORD *)(v23 + v25 + 20);
    v30 = *(_DWORD *)(v23 + v25 + 24);
    *(_QWORD *)(v24 + 108) = 0LL;
    *((_DWORD *)v24 + 3) = v30;
    *((_DWORD *)v24 + 14) = v65;
    *((_DWORD *)v24 + 9) = 100;
    *((_DWORD *)v24 + 13) = 100;
    *((_DWORD *)v24 + 15) = 1;
    *((_DWORD *)v24 + 16) = 100;
    *((_DWORD *)v24 + 17) = 100;
    *((_DWORD *)v24 + 24) = 100;
    v31 = !*((_BYTE *)v5 + 7) && *((_BYTE *)v5 + 11);
    v24[101] = v31;
    if ( *(_DWORD *)(v23 + v25 + 16) < 0x64u )
    {
      *(_QWORD *)(v24 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v23 + v25 + 16), v27);
    }
    v32 = v63;
    v33 = &v62;
    v34 = 2LL;
    v35 = v64 * v63;
    v36 = &v69[48 * v64 * v63];
    do
    {
      v37 = *(unsigned int *)v33;
      if ( (_DWORD)v37 != -1 )
      {
        v38 = *((_QWORD *)v5 + 51);
        *((_QWORD *)v36 + 5) = *(_QWORD *)(*((_QWORD *)v5 + 53) + 8LL * (unsigned int)(v35 + v37));
        v36[33] = *(_BYTE *)(v38 + 24 * v37 + 17);
        v36[32] = *(_BYTE *)(v38 + 24 * v37 + 16);
        v36[34] = *(_BYTE *)(v38 + 24 * v37 + 18);
        v36[35] = *(_BYTE *)(v38 + 24 * v37 + 8);
        *(_QWORD *)v36 = *(_QWORD *)(v38 + 24 * v37);
        v36 += 48;
      }
      v33 = (__int64 *)((char *)v33 + 4);
      --v34;
    }
    while ( v34 );
    v2 = v67;
    v23 += 32LL;
    v24 += 136;
    v63 = v32 + 1;
    if ( v32 + 1 >= (unsigned int)v67 )
    {
      v13 = v64;
      v22 = v7 + 704;
      goto LABEL_39;
    }
  }
  v66 = *(_DWORD *)(v23 + v25);
  if ( (_DWORD)v26 != -1
    && ((*(_QWORD *)&PpmPerfStatesRegistered[4
                                           * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v26] >> 6)
                                           + 4] >> (KiProcessorIndexToNumberMappingTable[v26] & 0x3F)) & 1) == 0 )
  {
    v68 = KeGetPrcb(v26);
    v21 = PpmAllocatePerfCheck(v68);
    if ( v21 < 0 )
      goto LABEL_42;
    v27 = v66;
    KeAddProcessorAffinityEx(v74, v66);
    v28 = v68;
    *(_QWORD *)(v24 - 20) = v68;
    v29 = PpmConvertTime(
            (unsigned int)PpmPerfQosTransitionHysteresis,
            0xF4240uLL,
            1000000LL * *(unsigned int *)(v28 + 68));
    *(_QWORD *)(v68 + 24296) = v29;
    goto LABEL_27;
  }
  v21 = -1073741811;
LABEL_42:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_107:
  if ( ((unsigned int)PpmPerfDomainCount > 1 || v8)
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, PpmCheckRegistered) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfSchedulerDirectedPerfStatesSupported = v8;
    PpmReinitializeHeteroEngine(1);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x704D5050u);
  v72[1] = -1LL;
  v72[0] = 0LL;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, -36000000000LL, 36000000000LL, (__int64)v72);
  return (unsigned int)v21;
}
