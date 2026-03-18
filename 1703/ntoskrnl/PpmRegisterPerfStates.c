/*
 * XREFs of PpmRegisterPerfStates @ 0x1405BF450
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x1405BF440 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406D6500 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x140006310 (KeFindFirstSetRightGroupAffinity.c)
 *     KeFirstGroupAffinityEx @ 0x14002FE30 (KeFirstGroupAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     KeOrAffinityEx @ 0x140080BD0 (KeOrAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     PpmCheckCustomRun @ 0x140135D90 (PpmCheckCustomRun.c)
 *     PpmInstallFeedbackCounters @ 0x14015FAC4 (PpmInstallFeedbackCounters.c)
 *     PpmPerfCalculateMinMaxStates @ 0x1401603FC (PpmPerfCalculateMinMaxStates.c)
 *     PpmParkApplyPolicy @ 0x1401604C8 (PpmParkApplyPolicy.c)
 *     KeIsEqualAffinityEx @ 0x140160800 (KeIsEqualAffinityEx.c)
 *     KeQueryActiveProcessorAffinity @ 0x140160880 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140231F50 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PpmUpdateProcessorPolicy @ 0x14058358C (PpmUpdateProcessorPolicy.c)
 *     PpmAllocatePerfCheck @ 0x1405BFEF4 (PpmAllocatePerfCheck.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PpmCheckReInit @ 0x1405C02B8 (PpmCheckReInit.c)
 */

__int64 __fastcall PpmRegisterPerfStates(_DWORD *a1, char a2)
{
  unsigned int v2; // r12d
  int v4; // eax
  _DWORD *v5; // rsi
  unsigned int v6; // r14d
  _BYTE *v7; // rdi
  int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r15d
  __int64 *v13; // rdx
  __int64 v14; // r8
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  SIZE_T v18; // r14
  _BYTE *PoolWithTag; // rax
  int v20; // ebx
  __int64 v21; // r13
  char *v22; // r14
  unsigned int v23; // ebx
  char *v24; // r13
  __int64 v25; // r15
  char *v26; // r14
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 *v31; // r10
  __int64 v32; // r12
  int v33; // r11d
  char *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  ULONG FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v40; // ecx
  bool v41; // al
  int v42; // eax
  unsigned int v43; // ebx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 *v46; // rcx
  char *v47; // rdx
  char **v48; // rax
  __int64 (__fastcall *v49)(_QWORD); // rcx
  _QWORD *v50; // rax
  char v51; // r8
  __int64 *v52; // rdx
  _BYTE *v53; // rax
  __int64 v54; // r8
  _BYTE *v55; // r9
  __int64 v56; // rdx
  signed __int32 v58[8]; // [rsp+8h] [rbp-100h] BYREF
  char v59; // [rsp+28h] [rbp-E0h]
  int v60; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v61; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-D0h]
  int v63; // [rsp+3Ch] [rbp-CCh]
  int v64; // [rsp+40h] [rbp-C8h]
  unsigned int v65; // [rsp+44h] [rbp-C4h]
  __int64 v66; // [rsp+48h] [rbp-C0h]
  char *v67; // [rsp+50h] [rbp-B8h]
  _DWORD *v68; // [rsp+58h] [rbp-B0h]
  _QWORD v69[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v70[3]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v71[44]; // [rsp+88h] [rbp-80h] BYREF
  char v72[176]; // [rsp+138h] [rbp+30h] BYREF

  v2 = a1[3];
  v4 = a1[4];
  v5 = a1;
  v6 = a1[8];
  v68 = a1;
  v59 = 0;
  v65 = v2;
  v7 = 0LL;
  v64 = v4;
  v71[0] = 1310721;
  memset(&v71[1], 0, 0xA4uLL);
  KeQueryActiveProcessorAffinity((__int64)v72);
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v8 = -1;
  v61 = -1LL;
  v9 = 0;
  if ( v6 )
  {
    v10 = *((_QWORD *)v5 + 51);
    do
    {
      v11 = *(unsigned int *)(v10 + 24LL * v9 + 12);
      if ( (unsigned int)v11 >= 2 )
        goto LABEL_18;
      if ( *((_DWORD *)&v61 + v11) == -1 )
        *((_DWORD *)&v61 + v11) = v9;
      ++v9;
    }
    while ( v9 < v6 );
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
  v17 = (152 * v2 + 495) & 0xFFFFFFF8;
  v18 = v17 + 48 * v2 * v16;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x704D5050u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v20 = -1073741670;
    goto LABEL_38;
  }
  memset(PoolWithTag, 0, v18);
  v21 = v17;
  v22 = v7 + 488;
  v23 = 0;
  v24 = &v7[v21];
  v62 = 0;
  v67 = v24;
  if ( !v2 )
  {
LABEL_35:
    if ( (unsigned int)KeIsEmptyAffinityEx(v71) )
    {
      v7[207] = 1;
    }
    else
    {
      KeFirstGroupAffinityEx(v70, v71);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v70);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v7 + 2) = Prcb;
      v7[204] = *(_BYTE *)(Prcb + 23986);
    }
    KeCopyAffinityEx((__int64)(v7 + 24), (unsigned __int16 *)v71);
    *((_QWORD *)v7 + 27) = *((_QWORD *)v5 + 31);
    *((_QWORD *)v7 + 29) = *((_QWORD *)v5 + 33);
    *((_QWORD *)v7 + 30) = *((_QWORD *)v5 + 34);
    *((_QWORD *)v7 + 31) = *((_QWORD *)v5 + 35);
    *((_QWORD *)v7 + 32) = *((_QWORD *)v5 + 36);
    *((_QWORD *)v7 + 33) = *((_QWORD *)v5 + 37);
    *((_QWORD *)v7 + 28) = *((_QWORD *)v5 + 32);
    *((_QWORD *)v7 + 24) = *((_QWORD *)v5 + 9);
    *((_QWORD *)v7 + 26) = v22;
    *((_DWORD *)v7 + 95) = 1;
    *((_DWORD *)v7 + 96) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v40 = v64;
    *((LARGE_INTEGER *)v7 + 59) = PerformanceCounter;
    *((_DWORD *)v7 + 79) = v40;
    *((_DWORD *)v7 + 50) = v2;
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
    *((_DWORD *)v7 + 101) = v40;
    *((_DWORD *)v7 + 100) = 100;
    v7[354] = *((_BYTE *)v5 + 6);
    v7[355] = *((_BYTE *)v5 + 7);
    v7[356] = *((_BYTE *)v5 + 8);
    v41 = *((_WORD *)v5 + 2) != 253 && !*((_QWORD *)v5 + 44);
    v7[358] = v41;
    v7[357] = *((_BYTE *)v5 + 11);
    *((_QWORD *)v7 + 42) = *((_QWORD *)v5 + 6);
    *((_QWORD *)v7 + 43) = *((_QWORD *)v5 + 7);
    v7[352] = 100;
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)(unsigned int)v5[9] )
      PpmCheckMinimumPeriod = (unsigned int)v5[9];
    v42 = PpmAllowedActions;
    if ( *((_QWORD *)v7 + 30) )
    {
      v42 = PpmAllowedActions | 0x100;
      PpmAllowedActions |= 0x100u;
    }
    if ( *((_QWORD *)v7 + 29) )
    {
      v42 |= 0x80u;
      PpmAllowedActions = v42;
    }
    if ( *((_QWORD *)v7 + 28) )
    {
      v42 |= 0x800u;
      PpmAllowedActions = v42;
    }
    if ( *((_QWORD *)v7 + 31) )
    {
      v42 |= 0x40u;
      PpmAllowedActions = v42;
    }
    if ( *((_QWORD *)v7 + 33) )
    {
      v42 |= 0x200u;
      PpmAllowedActions = v42;
    }
    if ( *((_QWORD *)v7 + 32) )
      PpmAllowedActions = v42 | 0x400;
    if ( *((_BYTE *)v5 + 9) )
      PpmPerfEppViaPerfControl = 1;
    if ( *((_BYTE *)v5 + 10) )
      PpmPerfAutonomousActivityWindowViaPerfControl = 1;
    _InterlockedOr(v58, 0);
    v43 = 0;
    if ( v2 )
    {
      do
      {
        if ( !v22[16] )
        {
          v44 = *(_QWORD *)v22;
          v45 = 2LL;
          *(_DWORD *)(v44 + 24368) = 0x10000;
          *(_QWORD *)(v44 + 24312) = &v7[152 * v43 + 488];
          v46 = &v61;
          *(_QWORD *)(v44 + 24304) = v7;
          v47 = &v24[48 * v12 * v43];
          v69[0] = 0LL;
          v69[1] = 0LL;
          v48 = (char **)v69;
          do
          {
            if ( *(_DWORD *)v46 != -1 )
            {
              *v48 = v47;
              v47 += 48;
            }
            v46 = (__int64 *)((char *)v46 + 4);
            ++v48;
            --v45;
          }
          while ( v45 );
          PpmInstallFeedbackCounters(v44, v69);
        }
        ++v43;
        v22 += 152;
      }
      while ( v43 < v2 );
      v5 = v68;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *((_QWORD *)v5 + 8);
    v49 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v49 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v5 + 45);
      PpmPerfControlReadFeedback = v49;
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
    if ( v49 )
      PpmCheckPollForFeedback = 1;
    v50 = (_QWORD *)qword_1403E4068;
    ++PpmPerfDomainCount;
    if ( *(__int64 **)qword_1403E4068 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v7 = &PpmPerfDomainHead;
    v51 = 1;
    *((_QWORD *)v7 + 1) = v50;
    *v50 = v7;
    v52 = (__int64 *)PpmPerfDomainHead;
    qword_1403E4068 = (__int64)v7;
    v59 = 1;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      do
      {
        v53 = (char *)v52 + 357;
        v52 = (__int64 *)*v52;
        v51 = *v53 != 0 ? v51 : 0;
      }
      while ( v52 != &PpmPerfDomainHead );
      v59 = v51;
    }
    PpmPerfCalculateMinMaxStates((__int64)v7);
    KeOrAffinityEx((unsigned __int16 *)v71, PpmPerfStatesRegistered, PpmPerfStatesRegistered);
    v7[486] = 1;
    v7[484] = 1;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, (__int64)v7);
    PopExecuteOnTargetProcessors((__int64)v71, (__int64)PpmCheckReset, 0LL, 0LL);
    v56 = *(_QWORD *)&v71[2 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6) + 2] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    if ( (v56 & 1) != 0 )
      PpmParkApplyPolicy(KiProcessorIndexToNumberMappingTable[0] & 0x3F, v56, v54, v55);
    PpmCheckReInit();
    v7 = 0LL;
    v20 = 0;
    PpmCheckCustomRun(2);
    goto LABEL_99;
  }
  v25 = 0LL;
  v26 = v7 + 508;
  while ( 1 )
  {
    v27 = *((_QWORD *)v5 + 52);
    *(v26 - 4) = *(_BYTE *)(v25 + v27 + 28);
    if ( !*(_BYTE *)(v25 + v27 + 28) )
      break;
    LODWORD(v28) = -1;
    *(_DWORD *)v26 = *(_DWORD *)(v25 + v27);
LABEL_27:
    *((_DWORD *)v26 + 13) = 100;
    *(_QWORD *)(v26 - 12) = *(_QWORD *)(v25 + v27 + 8);
    *((_DWORD *)v26 + 1) = *(_DWORD *)(v25 + v27 + 16);
    *((_DWORD *)v26 + 2) = *(_DWORD *)(v25 + v27 + 20);
    *((_DWORD *)v26 + 3) = *(_DWORD *)(v25 + v27 + 24);
    *((_DWORD *)v26 + 20) = v64;
    *((_DWORD *)v26 + 15) = 100;
    *((_DWORD *)v26 + 19) = 100;
    *((_DWORD *)v26 + 21) = 1;
    *((_DWORD *)v26 + 22) = 100;
    *((_DWORD *)v26 + 23) = 100;
    *((_DWORD *)v26 + 30) = 100;
    if ( *(_DWORD *)(v25 + v27 + 16) < 0x64u )
    {
      *(_QWORD *)(v26 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v25 + v27 + 16), v28);
    }
    v24 = v67;
    v31 = &v61;
    v32 = 2LL;
    v33 = v63 * v23;
    v34 = &v67[48 * v63 * v23];
    do
    {
      v35 = *(unsigned int *)v31;
      if ( (_DWORD)v35 != -1 )
      {
        v36 = *((_QWORD *)v5 + 51);
        *((_QWORD *)v34 + 5) = *(_QWORD *)(*((_QWORD *)v5 + 53) + 8LL * (unsigned int)(v33 + v35));
        v34[33] = *(_BYTE *)(v36 + 24 * v35 + 17);
        v34[32] = *(_BYTE *)(v36 + 24 * v35 + 16);
        v34[34] = *(_BYTE *)(v36 + 24 * v35 + 8);
        *(_QWORD *)v34 = *(_QWORD *)(v36 + 24 * v35);
        v34 += 48;
      }
      v31 = (__int64 *)((char *)v31 + 4);
      --v32;
    }
    while ( v32 );
    v2 = v65;
    ++v23;
    v25 += 32LL;
    v26 += 152;
    v62 = v23;
    if ( v23 >= v65 )
    {
      v12 = v63;
      v22 = v7 + 488;
      goto LABEL_35;
    }
  }
  v28 = *(unsigned int *)(v25 + v27);
  if ( (_DWORD)v28 != -1
    && ((*(_QWORD *)&PpmPerfStatesRegistered[4
                                           * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v28] >> 6)
                                           + 4] >> (KiProcessorIndexToNumberMappingTable[v28] & 0x3F)) & 1) == 0 )
  {
    v66 = KeGetPrcb(v28);
    v20 = PpmAllocatePerfCheck(v66);
    if ( v20 < 0 )
      goto LABEL_38;
    KeAddProcessorAffinityEx(v71, v28);
    v29 = v66;
    *(_QWORD *)(v26 - 20) = v66;
    v30 = PpmConvertTime(
            (unsigned int)PpmPerfVirtualLittleHysteresis,
            0xF4240uLL,
            1000000LL * *(unsigned int *)(v29 + 68));
    v23 = v62;
    *(_QWORD *)(v26 + 44) = v30;
    goto LABEL_27;
  }
  v20 = -1073741811;
LABEL_38:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_99:
  if ( ((unsigned int)PpmPerfDomainCount > 1 || v59)
    && (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, PpmCheckRegistered) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    LOWORD(v60) = 0;
    v60 |= 0x20u;
    PpmPerfVirtualHeterogeneitySupported = 1;
    PpmReapplyPerfPolicy(&v60);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x704D5050u);
  return (unsigned int)v20;
}
