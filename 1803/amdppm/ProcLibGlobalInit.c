/*
 * XREFs of ProcLibGlobalInit @ 0x1C003140C
 * Callers:
 *     DriverEntry @ 0x1C0031168 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0001470 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_s @ 0x1C0003994 (WPP_RECORDER_SF_s.c)
 *     DisplayPPMFlags @ 0x1C00082D4 (DisplayPPMFlags.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000C344 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C000C3A0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     GetHvPpmCapabilities @ 0x1C001A310 (GetHvPpmCapabilities.c)
 *     GetRegistryDwordValue @ 0x1C0021D24 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0021DC4 (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C00288EC (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0028918 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0028944 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0028970 (ProcLibTracePccErrata.c)
 *     InitDriver @ 0x1C0031008 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C00312CC (CollectAcpiBiosInfo.c)
 *     ProcLibRegisterEtw @ 0x1C0031DEC (ProcLibRegisterEtw.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0031EA4 (PopulateEnergyEstimationParameters.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  void *v18; // rax
  PVOID PoolWithTag; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  const CHAR *v22; // r8
  const CHAR *v23; // r9
  bool v24; // zf
  unsigned int v25; // ebx
  __int64 v26; // rsi
  __int64 v27; // rax
  int inited; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  const char *v31; // rax
  int v33; // [rsp+28h] [rbp-41h]
  int v34; // [rsp+30h] [rbp-39h]
  int v35; // [rsp+40h] [rbp-29h] BYREF
  bool v36; // [rsp+44h] [rbp-25h] BYREF
  bool v37; // [rsp+45h] [rbp-24h] BYREF
  int v38; // [rsp+48h] [rbp-21h] BYREF
  int v39; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v40; // [rsp+50h] [rbp-19h] BYREF
  int v41; // [rsp+58h] [rbp-11h] BYREF
  __int64 v42; // [rsp+60h] [rbp-9h]
  __int64 v43; // [rsp+68h] [rbp-1h]
  __int64 v44; // [rsp+70h] [rbp+7h]
  __int64 v45; // [rsp+78h] [rbp+Fh]
  unsigned __int64 InputBuffer; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v47; // [rsp+88h] [rbp+1Fh]

  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C0011610, 0xF8u);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 10;
LABEL_3:
    v33 = v2;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
      v33);
    return v3;
  }
  v6 = dword_1C0011610;
  if ( dword_1C0011610 != 56 )
  {
    v7 = 11;
    v34 = 56;
LABEL_8:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
      v6,
      v34);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0011418);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 12;
LABEL_11:
    v33 = v8;
    v5 = 4;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0011420);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 13;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0011930);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 14;
    goto LABEL_11;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C0011944 = 0;
  qword_1C0011938 = WorkItem;
  qword_1C0011430 = (__int64)&qword_1C0011428;
  qword_1C0011428 = (__int64)&qword_1C0011428;
  qword_1C0011440 = (__int64)&qword_1C0011438;
  qword_1C0011438 = (__int64)&qword_1C0011438;
  qword_1C0011450 = (__int64)&qword_1C0011448;
  qword_1C0011448 = (__int64)&qword_1C0011448;
  qword_1C0011460 = (__int64)&qword_1C0011458;
  qword_1C0011458 = (__int64)&qword_1C0011458;
  qword_1C0011470 = (__int64)&qword_1C0011468;
  qword_1C0011468 = (__int64)&qword_1C0011468;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v40);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C0011410);
  GetRegistryQwordValue(v11, v10, &qword_1C0011408);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v38);
  if ( v38 )
    byte_1C0011946 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v39);
  qword_1C00117B0 = (__int64)RegisterKernelIdleStates;
  v12 = 1280;
  dword_1C001182C = 0;
  qword_1C00117B8 = (__int64)RegisterKernelPerfStates;
  byte_1C0011828 = v39 == 0;
  qword_1C00117C8 = (__int64)RegisterKernelPerfFeedback;
  qword_1C00117D0 = (__int64)RegisterKernelLegacyPcc;
  qword_1C00117C0 = (__int64)RegisterKernelCap;
  qword_1C00117D8 = (__int64)RegisterKernelCpc;
  qword_1C00117E0 = (__int64)RegisterKernelPepPerf;
  qword_1C00117E8 = (__int64)GetNtProcessorNumber;
  qword_1C00117F0 = (__int64)RegisterKernelPackage;
  qword_1C00117F8 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C0011808 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C0011810 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C0011818 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C0011820 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      InputBuffer = __PAIR64__(_RBX, _RAX);
      v47 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v37, &v36, 0LL);
      if ( v36 )
      {
        dword_1C001182C = 2;
        qword_1C00117B8 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C00117C8 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C00117D0 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C00117D8 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v37 )
          goto LABEL_34;
        dword_1C001182C = 1;
        qword_1C00117B8 = (__int64)RegisterHvPerfStates;
        qword_1C00117D0 = (__int64)RegisterHvLegacyPcc;
        qword_1C00117C8 = (__int64)RegisterNoop;
        qword_1C00117E0 = (__int64)RegisterNoop;
        qword_1C00117F8 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C0011810 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C0011818 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C00117C0 = (__int64)RegisterHvCap;
        qword_1C0011820 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C00117D8 = (__int64)RegisterHvCpc;
      }
      v12 = 512;
      qword_1C00117B0 = (__int64)RegisterHvIdleStates;
      qword_1C0011808 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      qword_1C00117E8 = (__int64)GetLpIndex;
      v18 = RegisterHvPackage;
    }
    else
    {
      qword_1C00117B0 = (__int64)RegisterGuestIdleStates;
      v18 = RegisterNoop;
      qword_1C00117B8 = (__int64)RegisterNoop;
      qword_1C00117C8 = (__int64)RegisterNoop;
      qword_1C00117D0 = (__int64)RegisterNoop;
      qword_1C00117C0 = (__int64)RegisterNoop;
      qword_1C00117D8 = (__int64)RegisterNoop;
      qword_1C00117E0 = (__int64)RegisterNoop;
    }
    qword_1C00117F0 = (__int64)v18;
  }
  else if ( (int)HalPrivateDispatchTable[139]((__int64)&v41) >= 0 )
  {
    v6 = v41;
    if ( v41 != 1 )
    {
      v7 = 15;
      v34 = 1;
      goto LABEL_8;
    }
    qword_1C00116D8 = v42;
    qword_1C00116E0 = v43;
    qword_1C00116E8 = v44;
    qword_1C00116F0 = v45;
  }
LABEL_34:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v12, 0x72637250u);
  DevExts = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    v4 = 16;
    v33 = -1073741670;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, 8LL * v12);
  v2 = ProcLibRegisterEtw();
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 17;
    goto LABEL_3;
  }
  v47 = 0LL;
  InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
  v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 18;
    goto LABEL_3;
  }
  v2 = CollectAcpiBiosInfo(v21, v20, v22, v23);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 19;
    goto LABEL_3;
  }
  v35 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v35);
  v24 = v35 == 2;
  v25 = 0;
  v35 = 1;
  if ( v24 )
    v25 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v35);
  if ( v35 == 2 )
    v25 |= 2u;
  v35 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v35);
  if ( v35 == 2 )
    v25 |= 0x3300000u;
  v35 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v35);
  if ( v35 == 2 )
    v25 |= 0x80000000;
  v26 = v25;
  v27 = 0x180099900377LL;
  qword_1C0011408 = v25 | (unsigned __int64)qword_1C0011408;
  dword_1C0011890 = v25;
  dword_1C0011520 = 1;
  dword_1C0011524 = 240;
  if ( v40 )
    v27 = 0x181099D00377LL;
  Globals[0] = v27 | 0x10000000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    Globals[0] |= 0x2000000000uLL;
    PopulateEnergyEstimationParameters();
  }
  InputBuffer = 0LL;
  inited = InitDriver((__int64)&dword_1C0011520, &InputBuffer);
  v3 = inited;
  if ( inited < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x14u,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
      inited);
    memset(&dword_1C0011520, 0, 0xF0uLL);
    return v3;
  }
  v29 = InputBuffer | Globals[0];
  Globals[0] |= InputBuffer;
  if ( dword_1C001182C == 1 )
  {
    qword_1C0011548 = 0LL;
    v30 = 0xFFFFDFFCF7FFFEFFuLL;
    qword_1C0011560 = 0LL;
    qword_1C0011568 = 0LL;
    qword_1C0011570 = 0LL;
    qword_1C0011578 = 0LL;
    qword_1C0011580 = 0LL;
    qword_1C0011590 = 0LL;
    qword_1C0011598 = 0LL;
    qword_1C00115A0 = 0LL;
    qword_1C00115A8 = 0LL;
LABEL_60:
    qword_1C00115D8 = 0LL;
    Globals[0] = v30 & v29;
    qword_1C00115D0 = 0LL;
    goto LABEL_61;
  }
  if ( dword_1C001182C == 2 )
  {
    v30 = 0xFFFFFFFCFFFFFEFFuLL;
    goto LABEL_60;
  }
LABEL_61:
  v31 = "Enabled";
  if ( !dword_1C001182C )
    v31 = "Disabled";
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x15u,
    (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
    v31);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0x16u,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0x17u,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
  DisplayPPMFlags(Globals[0], 5u);
  if ( (Globals[0] & v26 & 0x7F077) != 0 )
    ProcLibTraceIdleStatesErrata(0);
  if ( (Globals[0] & v26 & 0x70000000) != 0 )
    ProcLibTracePerfStatesErrata(0);
  if ( (Globals[0] & v26 & 0x3300000) != 0 )
    ProcLibTraceThrottleStatesErrata(0);
  if ( (Globals[0] & (unsigned int)v26 & 0x80000000) != 0 )
    ProcLibTracePccErrata(0);
  if ( qword_1C0011408 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x18u,
        (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
    DisplayPPMFlags(~qword_1C0011408, 5u);
    Globals[0] &= ~qword_1C0011408;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x19u,
    (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
  DisplayPPMFlags(Globals[0], 4u);
  if ( qword_1C0011560 && (dword_1C0011410 & 0x70000000) != 0 )
    qword_1C0011560 = 0LL;
  return v3;
}
