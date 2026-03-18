/*
 * XREFs of PpmRegisterPerfStates @ 0x1405B500C
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x1405B4FC0 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14070C770 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1400193C0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     KeOrAffinityEx @ 0x1400FC680 (KeOrAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     KeFirstGroupAffinityEx @ 0x140126920 (KeFirstGroupAffinityEx.c)
 *     PpmInstallFeedbackCounters @ 0x140137C54 (PpmInstallFeedbackCounters.c)
 *     PpmParkApplyPolicy @ 0x140138AB4 (PpmParkApplyPolicy.c)
 *     KeIsEqualAffinityEx @ 0x140138DD0 (KeIsEqualAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x140138EE0 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14024687C (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PpmReinitializeHeteroEngine @ 0x1405B4FD8 (PpmReinitializeHeteroEngine.c)
 *     PpmAllocatePerfCheck @ 0x1405B5AE4 (PpmAllocatePerfCheck.c)
 *     PpmUpdateProcessorPolicy @ 0x1405B5DF8 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
 */

__int64 __fastcall PpmRegisterPerfStates(_DWORD *a1, char a2)
{
  unsigned int v2; // r12d
  int v4; // r13d
  _DWORD *v5; // rsi
  unsigned int v6; // r14d
  char *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r15d
  __int64 *v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  SIZE_T v18; // r14
  char *PoolWithTag; // rax
  int v20; // ebx
  __int64 v21; // rax
  char *v22; // r14
  unsigned int v23; // ebx
  __int64 v24; // r15
  char *v25; // r14
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 *v29; // r10
  __int64 v30; // r12
  int v31; // r11d
  char *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  ULONG FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v38; // rcx
  _DWORD *v39; // rax
  char v40; // al
  unsigned int v41; // ebx
  char *v42; // rsi
  __int64 v43; // rcx
  __int64 *v44; // r8
  __int64 v45; // r9
  char *v46; // rdx
  char **v47; // rax
  __int64 (__fastcall *v48)(_QWORD); // rcx
  _QWORD *v49; // rax
  char v50; // r8
  __int64 *v51; // rdx
  _BYTE *v52; // rax
  __int64 v53; // r8
  _BYTE *v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  char v57; // si
  signed __int32 v59[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v60; // [rsp+28h] [rbp-E0h]
  __int64 v61; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-D0h]
  int v63; // [rsp+3Ch] [rbp-CCh]
  int v64; // [rsp+40h] [rbp-C8h]
  unsigned int v65; // [rsp+44h] [rbp-C4h]
  char *v66; // [rsp+48h] [rbp-C0h]
  __int64 v67; // [rsp+50h] [rbp-B8h]
  _DWORD *v68; // [rsp+58h] [rbp-B0h]
  _QWORD v69[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v70[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v71[3]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v72[44]; // [rsp+98h] [rbp-70h] BYREF
  char v73[176]; // [rsp+148h] [rbp+40h] BYREF

  v2 = a1[3];
  v4 = a1[4];
  v5 = a1;
  v6 = a1[8];
  v7 = 0LL;
  v68 = a1;
  LOBYTE(v60) = 0;
  v65 = v2;
  v64 = v4;
  v72[0] = 1310721;
  memset(&v72[1], 0, 0xA4uLL);
  KeQueryActiveProcessorAffinity((__int64)v73);
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v8 = -1;
  v9 = 0LL;
  v61 = -1LL;
  if ( v6 )
  {
    v10 = *((_QWORD *)v5 + 51);
    do
    {
      v11 = *(unsigned int *)(v10 + 24 * v9 + 12);
      if ( (unsigned int)v11 >= 2 )
        goto LABEL_18;
      if ( *((_DWORD *)&v61 + v11) == -1 )
        *((_DWORD *)&v61 + v11) = v9;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < v6 );
    v8 = v61;
  }
  if ( v8 == -1 && HIDWORD(v61) == -1 )
  {
LABEL_18:
    v20 = -1073741811;
    goto LABEL_38;
  }
  v12 = 0;
  v13 = &v61;
  v14 = 2LL;
  do
  {
    v15 = *(_DWORD *)v13;
    v16 = v12 + 1;
    v13 = (__int64 *)((char *)v13 + 4);
    if ( v15 == -1 )
      v16 = v12;
    v12 = v16;
    --v14;
  }
  while ( v14 );
  v63 = v16;
  v17 = ((v2 << 7) + 623) & 0xFFFFFFF8;
  v18 = v17 + 48 * v2 * v16;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x704D5050u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v20 = -1073741670;
    goto LABEL_38;
  }
  memset(PoolWithTag, 0, v18);
  v21 = v17;
  v22 = v7 + 616;
  v23 = 0;
  v62 = 0;
  v66 = &v7[v21];
  if ( !v2 )
  {
LABEL_35:
    if ( (unsigned int)KeIsEmptyAffinityEx(v72) )
    {
      v7[207] = 1;
    }
    else
    {
      KeFirstGroupAffinityEx(v71, v72);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v71);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v7 + 2) = Prcb;
      v7[204] = *(_BYTE *)(Prcb + 23858);
    }
    KeCopyAffinityEx((__int64)(v7 + 24), (unsigned __int16 *)v72);
    *((_QWORD *)v7 + 27) = *((_QWORD *)v5 + 31);
    *((_QWORD *)v7 + 29) = *((_QWORD *)v5 + 33);
    *((_QWORD *)v7 + 30) = *((_QWORD *)v5 + 34);
    *((_QWORD *)v7 + 31) = *((_QWORD *)v5 + 35);
    *((_QWORD *)v7 + 32) = *((_QWORD *)v5 + 36);
    *((_QWORD *)v7 + 33) = *((_QWORD *)v5 + 37);
    *((_QWORD *)v7 + 28) = *((_QWORD *)v5 + 32);
    *((_QWORD *)v7 + 24) = *((_QWORD *)v5 + 9);
    *((_QWORD *)v7 + 26) = v22;
    *((_DWORD *)v7 + 118) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *((_DWORD *)v7 + 50) = v2;
    v38 = 3LL;
    *((LARGE_INTEGER *)v7 + 75) = PerformanceCounter;
    *((_DWORD *)v7 + 79) = v4;
    *((_DWORD *)v7 + 80) = v5[5];
    *((_DWORD *)v7 + 81) = v5[6];
    *((_DWORD *)v7 + 82) = v5[7];
    v7[353] = *((_BYTE *)v5 + 4);
    *((_QWORD *)v7 + 36) = *((_QWORD *)v5 + 42);
    *((_QWORD *)v7 + 37) = *((_QWORD *)v5 + 43);
    *((_QWORD *)v7 + 38) = *((_QWORD *)v5 + 44);
    *((_QWORD *)v7 + 34) = *((_QWORD *)v5 + 40);
    *((_QWORD *)v7 + 35) = *((_QWORD *)v5 + 41);
    v7[359] = *((_BYTE *)v5 + 40);
    v39 = v7 + 492;
    do
    {
      *(v39 - 1) = 100;
      *v39 = v4;
      v39 += 10;
      --v38;
    }
    while ( v38 );
    v7[354] = *((_BYTE *)v5 + 6);
    v7[355] = *((_BYTE *)v5 + 7);
    v7[356] = *((_BYTE *)v5 + 8);
    if ( *((_WORD *)v5 + 2) == 253 || (v40 = 1, *((_QWORD *)v5 + 44)) )
      v40 = 0;
    v7[358] = v40;
    v7[357] = *((_BYTE *)v5 + 11);
    *((_QWORD *)v7 + 42) = *((_QWORD *)v5 + 6);
    *((_QWORD *)v7 + 43) = *((_QWORD *)v5 + 7);
    v7[352] = 100;
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)(unsigned int)v5[9] )
      PpmCheckMinimumPeriod = (unsigned int)v5[9];
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
    _InterlockedOr(v59, 0);
    v41 = 0;
    if ( v2 )
    {
      v42 = v66;
      do
      {
        if ( !v22[16] )
        {
          v43 = *(_QWORD *)v22;
          v44 = &v61;
          v45 = 2LL;
          *(_QWORD *)(v43 + 24184) = &v7[128 * (unsigned __int64)v41 + 616];
          *(_DWORD *)(v43 + 24240) = 0x10000;
          *(_QWORD *)(v43 + 24176) = v7;
          v46 = &v42[48 * v12 * v41];
          v69[0] = 0LL;
          v69[1] = 0LL;
          v47 = (char **)v69;
          do
          {
            if ( *(_DWORD *)v44 != -1 )
            {
              *v47 = v46;
              v46 += 48;
            }
            v44 = (__int64 *)((char *)v44 + 4);
            ++v47;
            --v45;
          }
          while ( v45 );
          PpmInstallFeedbackCounters(v43, v69);
        }
        ++v41;
        v22 += 128;
      }
      while ( v41 < v2 );
      v5 = v68;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *((_QWORD *)v5 + 8);
    v48 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v48 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v5 + 45);
      PpmPerfControlReadFeedback = v48;
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
      PpmPerfControlStartPolicyUpdate = *((_QWORD *)v5 + 38);
    if ( !PpmPerfControlCompletePolicyUpdate )
      PpmPerfControlCompletePolicyUpdate = *((_QWORD *)v5 + 39);
    if ( v48 )
      PpmCheckPollForFeedback = 1;
    v49 = (_QWORD *)qword_1404011C8;
    ++PpmPerfDomainCount;
    if ( *(__int64 **)qword_1404011C8 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v7 = &PpmPerfDomainHead;
    v50 = 1;
    *((_QWORD *)v7 + 1) = v49;
    *v49 = v7;
    v51 = (__int64 *)PpmPerfDomainHead;
    qword_1404011C8 = (__int64)v7;
    LOBYTE(v60) = 1;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      do
      {
        v52 = (char *)v51 + 357;
        v51 = (__int64 *)*v51;
        v50 = *v52 != 0 ? v50 : 0;
      }
      while ( v51 != &PpmPerfDomainHead );
      LOBYTE(v60) = v50;
    }
    KeOrAffinityEx((unsigned __int16 *)v72, PpmPerfStatesRegistered, PpmPerfStatesRegistered);
    *((_WORD *)v7 + 306) = 257;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, v7);
    PopExecuteOnTargetProcessors((__int64)v72, (__int64)PpmCheckReset, 0LL, 0LL);
    v55 = *(_QWORD *)&v72[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    if ( (v55 & 1) != 0 )
      PpmParkApplyPolicy(KiProcessorIndexToNumberMappingTable[0] & 0x3F, v55, v53, v54);
    PpmCheckReInit();
    v7 = 0LL;
    v20 = 0;
    LOBYTE(v56) = 1;
    PpmPerfUpdateDomainPolicy(v56);
    goto LABEL_101;
  }
  v24 = 0LL;
  v25 = v7 + 636;
  while ( 1 )
  {
    v26 = *((_QWORD *)v5 + 52);
    *(v25 - 4) = *(_BYTE *)(v24 + v26 + 28);
    if ( !*(_BYTE *)(v24 + v26 + 28) )
      break;
    LODWORD(v27) = -1;
    *(_DWORD *)v25 = *(_DWORD *)(v24 + v26);
LABEL_27:
    *((_DWORD *)v25 + 7) = 100;
    *(_QWORD *)(v25 - 12) = *(_QWORD *)(v24 + v26 + 8);
    *((_DWORD *)v25 + 1) = *(_DWORD *)(v24 + v26 + 16);
    *((_DWORD *)v25 + 2) = *(_DWORD *)(v24 + v26 + 20);
    *((_DWORD *)v25 + 3) = *(_DWORD *)(v24 + v26 + 24);
    *((_DWORD *)v25 + 14) = v64;
    *((_DWORD *)v25 + 9) = 100;
    *((_DWORD *)v25 + 13) = 100;
    *((_DWORD *)v25 + 15) = 1;
    *((_DWORD *)v25 + 16) = 100;
    *((_DWORD *)v25 + 17) = 100;
    *((_DWORD *)v25 + 24) = 100;
    if ( *(_DWORD *)(v24 + v26 + 16) < 0x64u )
    {
      *(_QWORD *)(v25 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v24 + v26 + 16), v27);
    }
    v29 = &v61;
    v30 = 2LL;
    v31 = v63 * v23;
    v32 = &v66[48 * v63 * v23];
    do
    {
      v33 = *(unsigned int *)v29;
      if ( (_DWORD)v33 != -1 )
      {
        v34 = *((_QWORD *)v5 + 51);
        *((_QWORD *)v32 + 5) = *(_QWORD *)(*((_QWORD *)v5 + 53) + 8LL * (unsigned int)(v31 + v33));
        v32[33] = *(_BYTE *)(v34 + 24 * v33 + 17);
        v32[32] = *(_BYTE *)(v34 + 24 * v33 + 16);
        v32[34] = *(_BYTE *)(v34 + 24 * v33 + 18);
        v32[35] = *(_BYTE *)(v34 + 24 * v33 + 8);
        *(_QWORD *)v32 = *(_QWORD *)(v34 + 24 * v33);
        v32 += 48;
      }
      v29 = (__int64 *)((char *)v29 + 4);
      --v30;
    }
    while ( v30 );
    v2 = v65;
    ++v23;
    v24 += 32LL;
    v25 += 128;
    v62 = v23;
    if ( v23 >= v65 )
    {
      v12 = v63;
      v22 = v7 + 616;
      v4 = v64;
      goto LABEL_35;
    }
  }
  v27 = *(unsigned int *)(v24 + v26);
  if ( (_DWORD)v27 != -1
    && ((*(_QWORD *)&PpmPerfStatesRegistered[4
                                           * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v27] >> 6)
                                           + 4] >> (KiProcessorIndexToNumberMappingTable[v27] & 0x3F)) & 1) == 0 )
  {
    v67 = KeGetPrcb(v27);
    v20 = PpmAllocatePerfCheck(v67);
    if ( v20 < 0 )
      goto LABEL_38;
    KeAddProcessorAffinityEx(v72, v27);
    v28 = v67;
    *(_QWORD *)(v25 - 20) = v67;
    *(_QWORD *)(v28 + 24296) = PpmConvertTime(
                                 (unsigned int)PpmPerfQosTransitionHysteresis,
                                 0xF4240uLL,
                                 1000000LL * *(unsigned int *)(v28 + 68));
    v23 = v62;
    goto LABEL_27;
  }
  v20 = -1073741811;
LABEL_38:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_101:
  v57 = v60;
  if ( ((unsigned int)PpmPerfDomainCount > 1 || (_BYTE)v60)
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, PpmCheckRegistered) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfSchedulerDirectedPerfStatesSupported = v57;
    PpmReinitializeHeteroEngine(1);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x704D5050u);
  v70[1] = -1LL;
  v70[0] = 0LL;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, -36000000000LL, 36000000000LL, (__int64)v70);
  return (unsigned int)v20;
}
