/*
 * XREFs of InitDriver @ 0x1C0031C84
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0031254 (ProcLibGlobalInit.c)
 * Callees:
 *     IsTurboModeSupported @ 0x1C0001B64 (IsTurboModeSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C000377C (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C00037E0 (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C000384C (IsHwpSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C00038B0 (IsNonwrappingACountMCountSupported.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     IsIntelPccDriverPresent @ 0x1C0003EEC (IsIntelPccDriverPresent.c)
 *     GetCpuIdInfo @ 0x1C0004A70 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C001EF9C (IsMonitorMWaitSupported.c)
 *     GetHvPpmCapabilities @ 0x1C002737C (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  bool v5; // zf
  __int64 v6; // rbx
  bool v7; // al
  void *v8; // rcx
  char v10[8]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h] BYREF
  char v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  unsigned int v14[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 12223;
  v5 = !IsHwpNativeInterruptSupported();
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (void *)0x100000001LL;
  if ( !v5 )
    v4 = 16319;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v4;
  *(_QWORD *)(a1 + 16) = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  *(_WORD *)(a1 + 32) = 12;
  *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) = v4;
  v6 = 572522496LL;
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ACPI_OSC_INTEL_GUID;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 1;
  *(void **)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + 4) = (void *)2;
  *(_QWORD *)(a1 + 24) = &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_WORD *)(a1 + 34) = 32;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetGV3PerfState;
  *(_QWORD *)(a1 + 80) = SetFFHThrottleState;
  *(_QWORD *)(a1 + 88) = SetGV3PerfStateHidden;
  *(_QWORD *)(a1 + 96) = SetFFHThrottleStateHidden;
  GetCpuIdInfo(0, v14);
  if ( v14[0] >= 6 )
  {
    GetCpuIdInfo(6u, &v11);
    if ( (v12 & 1) != 0 )
    {
      v6 = 639631360LL;
      *(_QWORD *)(a1 + 112) = GV3HardwareFeedback;
      if ( IsNonwrappingACountMCountSupported() )
        v6 = 0x8026200000LL;
    }
  }
  GetCpuIdInfo(1u, &v11);
  if ( (v13 & 0x400000) != 0 )
    *(_QWORD *)(a1 + 120) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 128) = SetPerformanceEnergyBiasPolicy;
  if ( IsTurboModeSupported() )
  {
    v7 = IsPerformanceEnergyBiasSupported();
    v8 = SetTurboDisablePolicy;
    if ( v7 )
      v8 = SetEfficientTurboDisablePolicy;
    *(_QWORD *)(a1 + 136) = v8;
  }
  v10[0] = IsMonitorMWaitSupported();
  if ( v10[0] || (GetHvPpmCapabilities(0LL, 0LL, v10), v10[0]) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v6 |= 0x12000007F000uLL;
  }
  if ( IsHwpSupported() )
  {
    *(_QWORD *)(a1 + 144) = IsCppcThrottleEfficient;
    *(_QWORD *)(a1 + 160) = GetHwpPerfControlHandler;
  }
  if ( IsHwpNativeInterruptSupported() )
  {
    v6 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 152) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 168) = EnableHwpInterrupt;
  }
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 208) = 409;
  *(_QWORD *)(a1 + 216) = -65536LL;
  *(_DWORD *)(a1 + 224) = 410;
  if ( qword_1C0016068 && qword_1C0016070 && qword_1C0016078 && qword_1C0016080 )
    v6 |= 0x200000000000uLL;
  if ( IsIntelPccDriverPresent() )
    *(_QWORD *)(a1 + 104) = PerfControlIntelPccWorkaround;
  *(_QWORD *)(a1 + 176) = InitEnergyCounters;
  *(_QWORD *)(a1 + 184) = UnInitEnergyCounters;
  *a2 |= v6;
  return 0LL;
}
