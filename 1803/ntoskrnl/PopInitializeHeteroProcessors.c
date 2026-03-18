/*
 * XREFs of PopInitializeHeteroProcessors @ 0x14063F9AC
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeIsEqualAffinityEx @ 0x14017FE90 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x140272C68 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     PsEnumProcesses @ 0x1405385E4 (PsEnumProcesses.c)
 *     PpmEventHeteroPolicy @ 0x14063FBC8 (PpmEventHeteroPolicy.c)
 *     PopConfigureHeteroPolicies @ 0x14063FC4C (PopConfigureHeteroPolicies.c)
 *     PpmHeteroDetectFavoredCores @ 0x140640260 (PpmHeteroDetectFavoredCores.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1406402F4 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1406403D0 (PpmHeteroComputeRelativePerformance.c)
 *     KeConfigureHeteroProcessors @ 0x140741178 (KeConfigureHeteroProcessors.c)
 */

char __fastcall PopInitializeHeteroProcessors(char a1)
{
  char v2; // r12
  bool v3; // bl
  char v4; // si
  unsigned __int8 v5; // r14
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  int v8; // edi
  unsigned int v9; // ebx
  char v10; // r13
  char v11; // r15
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 Prcb; // rax
  __int16 v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  ULONG v18; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+50h] [rbp-B0h]
  _DWORD v21[44]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  __int64 v23; // [rsp+120h] [rbp+20h]
  __int64 v24; // [rsp+128h] [rbp+28h]
  __int64 v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+138h] [rbp+38h]
  __int64 v27; // [rsp+140h] [rbp+40h]
  __int64 v28; // [rsp+148h] [rbp+48h]

  v2 = 0;
  v3 = 0;
  if ( (PpmBackgroundProfile || PpmEntryLevelPerfProfile || PpmMultimediaQosProfile)
    && PpmPerfSchedulerDirectedPerfStatesSupported )
  {
    v3 = KeQueryActiveProcessorCountEx(0) >= 2;
  }
  v4 = v3;
  if ( PpmPerfVmQosSupported )
    v4 = 1;
  if ( !v4 || (v5 = 1, PpmPerfQosGroupPolicyDisable) )
    v5 = 0;
  if ( !a1 )
  {
    v9 = PopHeteroSystem;
    v8 = PopHeteroSystem != 0;
    v17 = v8;
    KeCopyAffinityEx((__int64)v21, (unsigned __int16 *)&PpmHeteroSmallCores);
    LOBYTE(v16) = v9 == 4;
    goto LABEL_13;
  }
  LOBYTE(v16) = 0;
  v2 = PpmHeteroComputeRelativePerformance();
  v6 = PopDetectSimulatedHeteroProcessors(v21);
  v8 = v6;
  v17 = v6;
  v9 = v6 != 0;
  if ( v6 )
  {
LABEL_31:
    if ( v8 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v17 = PpmHeteroDetectFavoredCores(v21);
  v8 = v17;
  if ( v17 )
  {
    v9 = 3;
    goto LABEL_31;
  }
LABEL_11:
  if ( v5 )
  {
    v21[0] = 1310721;
    memset(&v21[1], 0, 0xA4uLL);
    v8 = 1;
    v17 = 1;
    LOBYTE(v16) = 1;
    v9 = 4;
  }
LABEL_13:
  LOBYTE(v7) = a1;
  v10 = PopConfigureHeteroPolicies(v9, v7);
  if ( v9 != PopHeteroSystem
    || v9 == 3 && v2
    || !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)v21, (unsigned __int16 *)&PpmHeteroSmallCores) )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( !v9 || !v10 )
      goto LABEL_17;
  }
  if ( (unsigned int)KeConfigureHeteroProcessors(
                       (unsigned int)v21,
                       v9 - 1 <= 1,
                       (unsigned __int8)v16,
                       v5,
                       (__int64)&v17) )
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  v8 = v17;
LABEL_17:
  if ( v8 )
  {
    PopHeteroSystem = v9;
    KeCopyAffinityEx((__int64)&PpmHeteroSmallCores, (unsigned __int16 *)v21);
    if ( v5 )
      PpmIdleEnableIdleDurationExpirationTimeout();
    v12 = v9;
  }
  else
  {
    PopHeteroSystem = 0;
    PpmHeteroSmallCores = 1310721;
    memset(&unk_14044B454, 0, 0xA4uLL);
    v9 = 0;
    v12 = 0;
    v13 = 0;
    if ( !v4 )
    {
LABEL_19:
      PpmHeteroPolicy = 0;
      v12 = v13;
      goto LABEL_20;
    }
  }
  PpmPerfQosSupportedAndConfigured = 1;
  v13 = v12;
  if ( v9 != 1 && v9 != 2 )
    goto LABEL_19;
LABEL_20:
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = v12 != 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v19[1] = (unsigned __int16 *)qword_14039BD78[0];
    v19[0] = PpmCheckRegistered;
    v20 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v19) )
    {
      Prcb = KeGetPrcb(v18);
      v16 = *(unsigned __int8 *)(Prcb + 208);
      UserData.Ptr = (ULONGLONG)&v16;
      v23 = Prcb + 209;
      v25 = Prcb + 23858;
      v27 = Prcb + 23859;
      *(_QWORD *)&UserData.Size = 2LL;
      v24 = 1LL;
      v26 = 1LL;
      v28 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 4u, &UserData);
    }
  }
  PpmEventHeteroPolicy(0LL);
  return v11;
}
