/*
 * XREFs of PopInitializeHeteroProcessors @ 0x1405C0604
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x140031C80 (KeQueryGroupAffinity.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PpmIdleEnableIdleDurationExpirationTimeout @ 0x140228810 (PpmIdleEnableIdleDurationExpirationTimeout.c)
 *     KeConfigureHeteroProcessors @ 0x140418848 (KeConfigureHeteroProcessors.c)
 *     PsEnumProcesses @ 0x1404B0354 (PsEnumProcesses.c)
 *     PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0 (PpmPerfRecomputeBackgroundPolicy.c)
 *     PpmEventHeteroPolicy @ 0x1405C0784 (PpmEventHeteroPolicy.c)
 *     PopConfigureHeteroPolicies @ 0x1405C0808 (PopConfigureHeteroPolicies.c)
 *     PpmHeteroDetectFavoredCores @ 0x1405C0998 (PpmHeteroDetectFavoredCores.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x1405C0A84 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1405C0B60 (PpmHeteroComputeRelativePerformance.c)
 */

__int64 PopInitializeHeteroProcessors()
{
  unsigned __int8 v0; // al
  ULONG v1; // ebx
  unsigned int v2; // edi
  char v3; // r14
  ULONG v4; // eax
  int v5; // esi
  bool v6; // cl
  int v7; // ecx
  KAFFINITY GroupAffinity; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  int v13; // edx
  __int64 Prcb; // rax
  _WORD v15[2]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v16; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int16 *v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+50h] [rbp-B8h]
  _QWORD v19[22]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  __int64 v21; // [rsp+118h] [rbp+10h]
  __int64 v22; // [rsp+120h] [rbp+18h]
  __int64 v23; // [rsp+128h] [rbp+20h]
  __int64 v24; // [rsp+130h] [rbp+28h]
  __int64 v25; // [rsp+138h] [rbp+30h]
  __int64 v26; // [rsp+140h] [rbp+38h]

  PpmHeteroComputeRelativePerformance();
  v0 = PopDetectSimulatedHeteroProcessors(v19);
  v1 = v0;
  v16 = v0;
  LOBYTE(v15[0]) = 0;
  v2 = v0 != 0;
  v3 = 0;
  if ( !v0 )
  {
    v4 = PpmHeteroDetectFavoredCores(v19, v15);
    v3 = v15[0];
    v1 = v4;
    v16 = v4;
    if ( v4 )
      v2 = 3;
  }
  v5 = 0;
  if ( !v1 )
  {
    v6 = KeThrottledEpp != 0;
    if ( PpmBackgroundProfile )
    {
      if ( (*(_QWORD *)(PpmBackgroundProfile + 40) & 0x5C0000004C0LL) != 0 )
        v6 = 1;
      if ( (*(_QWORD *)(PpmBackgroundProfile + 1440) & 0x5C0000004C0LL) != 0 )
        v6 = 1;
    }
    if ( v6 && PpmPerfVirtualHeterogeneitySupported && KeQueryActiveProcessorCountEx(0) > 2 )
    {
      GroupAffinity = KeQueryGroupAffinity(0);
      _BitScanForward64(&v10, GroupAffinity);
      LODWORD(v19[0]) = 1310721;
      v11 = GroupAffinity ^ (1LL << v10);
      _BitScanForward64(&v10, v11);
      v12 = v11 ^ (1LL << v10);
      memset((char *)v19 + 4, 0, 0xA4uLL);
      v19[1] |= v12;
      v2 = 4;
      v1 = 1;
      v5 = 1;
      v16 = 1;
    }
  }
  PopConfigureHeteroPolicies(v2);
  if ( v2 == PopHeteroSystem )
  {
    if ( v2 == 1 )
    {
LABEL_28:
      v13 = 1;
      goto LABEL_29;
    }
    if ( v2 != 3 )
      goto LABEL_10;
  }
  v13 = 0;
  if ( v2 - 1 <= 1 )
    goto LABEL_28;
LABEL_29:
  if ( (unsigned int)KeConfigureHeteroProcessors((__int64)v19, v13, v3, v5, &v16) )
    PsEnumProcesses((__int64 (__fastcall *)(unsigned __int64, __int64))PopUpdateSingleProcessHeteroPolicies, 0LL);
  v1 = v16;
LABEL_10:
  v7 = v1 != 0 ? v2 : 0;
  PopHeteroSystem = v7;
  if ( PpmPerfVirtualHeterogeneityEnabled || v7 == 4 )
  {
    if ( v7 == 4 )
    {
      PpmIdleEnableIdleDurationExpirationTimeout();
      PpmPerfVirtualHeterogeneitySupportedAndConfigured = 1;
    }
    PpmPerfRecomputeBackgroundPolicy(1);
    v7 = PopHeteroSystem;
  }
  if ( (unsigned int)(v7 - 1) > 1 )
    PpmHeteroPolicy = 0;
  if ( PpmPerfArtificialDomainSetting == -1 )
    PpmPerfArtificialDomainEnabled = v7 != 0;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE) )
  {
    v17[1] = (unsigned __int16 *)qword_140340128[0];
    v17[0] = PpmCheckRegistered;
    LOWORD(v18) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v16, v17) )
    {
      Prcb = KeGetPrcb(v16);
      v15[0] = *(unsigned __int8 *)(Prcb + 208);
      UserData.Ptr = (ULONGLONG)v15;
      v21 = Prcb + 209;
      v23 = Prcb + 23986;
      v25 = Prcb + 23987;
      *(_QWORD *)&UserData.Size = 2LL;
      v22 = 1LL;
      v24 = 1LL;
      v26 = 1LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_CLASS_UPDATE, 0LL, 4u, &UserData);
    }
  }
  return PpmEventHeteroPolicy(0LL);
}
