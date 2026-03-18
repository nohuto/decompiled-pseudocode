/*
 * XREFs of PopInitializeHeteroProcessors @ 0x1405B6434
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     KeIsEqualAffinityEx @ 0x140138DD0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x14023B770 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PsEnumProcesses @ 0x1404FD1C8 (PsEnumProcesses.c)
 *     PpmHeteroDetectFavoredCores @ 0x1405B5C34 (PpmHeteroDetectFavoredCores.c)
 *     PpmEventHeteroPolicy @ 0x1405B6684 (PpmEventHeteroPolicy.c)
 *     PopConfigureHeteroPolicies @ 0x1405B6708 (PopConfigureHeteroPolicies.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1405B6C58 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1405B6D34 (PpmHeteroComputeRelativePerformance.c)
 *     KeConfigureHeteroProcessors @ 0x1405B7564 (KeConfigureHeteroProcessors.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1)
{
  char v2; // r12
  bool v3; // bl
  char v4; // si
  unsigned __int8 v5; // r14
  unsigned int v6; // ebx
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  ULONG v9; // edi
  char v10; // r13
  char v11; // r15
  __int64 Prcb; // rax
  __int16 v14; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v15; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int16 *v16[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+50h] [rbp-B8h]
  _DWORD v18[44]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  __int64 v20; // [rsp+118h] [rbp+10h]
  __int64 v21; // [rsp+120h] [rbp+18h]
  __int64 v22; // [rsp+128h] [rbp+20h]
  __int64 v23; // [rsp+130h] [rbp+28h]
  __int64 v24; // [rsp+138h] [rbp+30h]
  __int64 v25; // [rsp+140h] [rbp+38h]

  v2 = 0;
  v3 = 0;
  if ( (PpmBackgroundProfile || PpmEntryLevelPerfProfile) && PpmPerfSchedulerDirectedPerfStatesSupported )
    v3 = KeQueryActiveProcessorCountEx(0) >= 2;
  v4 = v3;
  if ( PpmPerfVmQosSupported )
    v4 = 1;
  if ( !v4 || (v5 = 1, PpmPerfQosGroupPolicyDisable) )
    v5 = 0;
  if ( a1 )
  {
    LOBYTE(v14) = 0;
    v2 = PpmHeteroComputeRelativePerformance();
    v6 = 0;
    v7 = PopDetectSimulatedHeteroProcessors(v18);
    v9 = v7;
    v15 = v7;
    if ( v7 )
    {
      v6 = 1;
    }
    else
    {
      v15 = PpmHeteroDetectFavoredCores((unsigned __int16 *)v18);
      v9 = v15;
      if ( v15 )
      {
        v6 = 3;
      }
      else if ( v5 )
      {
        v18[0] = 1310721;
        memset(&v18[1], 0, 0xA4uLL);
        v9 = 1;
        v15 = 1;
        LOBYTE(v14) = 1;
        v6 = 4;
      }
    }
  }
  else
  {
    v6 = PopHeteroSystem;
    v9 = PopHeteroSystem != 0;
    v15 = v9;
    KeCopyAffinityEx((__int64)v18, (unsigned __int16 *)&PpmHeteroSmallCores);
    LOBYTE(v14) = v6 == 4;
  }
  LOBYTE(v8) = a1;
  v10 = PopConfigureHeteroPolicies(v6, v8);
  if ( v6 != PopHeteroSystem
    || v6 == 3 && v2
    || !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)v18, (unsigned __int16 *)&PpmHeteroSmallCores) )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( !v6 || !v10 )
      goto LABEL_16;
  }
  if ( (unsigned int)KeConfigureHeteroProcessors(
                       (unsigned int)v18,
                       v6 - 1 <= 1,
                       (unsigned __int8)v14,
                       v5,
                       (__int64)&v15) )
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  v9 = v15;
LABEL_16:
  if ( v9 )
  {
    PopHeteroSystem = v6;
    KeCopyAffinityEx((__int64)&PpmHeteroSmallCores, (unsigned __int16 *)v18);
    if ( v5 )
      PpmIdleEnableIdleDurationExpirationTimeout();
  }
  else
  {
    v6 = 0;
    PpmHeteroSmallCores = 1310721;
    PopHeteroSystem = 0;
    memset(&unk_140400454, 0, 0xA4uLL);
    if ( !v4 )
    {
LABEL_18:
      PpmHeteroPolicy = 0;
      goto LABEL_19;
    }
  }
  PpmPerfQosSupportedAndConfigured = 1;
  if ( v6 - 1 > 1 )
    goto LABEL_18;
LABEL_19:
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = v6 != 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v16[1] = (unsigned __int16 *)qword_140358788[0];
    v16[0] = PpmCheckRegistered;
    LOWORD(v17) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v15, v16) )
    {
      Prcb = KeGetPrcb(v15);
      v14 = *(unsigned __int8 *)(Prcb + 208);
      UserData.Ptr = (ULONGLONG)&v14;
      v20 = Prcb + 209;
      v22 = Prcb + 23858;
      v24 = Prcb + 23859;
      *(_QWORD *)&UserData.Size = 2LL;
      v21 = 1LL;
      v23 = 1LL;
      v25 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 4u, &UserData);
    }
  }
  PpmEventHeteroPolicy(0LL);
  return v11;
}
