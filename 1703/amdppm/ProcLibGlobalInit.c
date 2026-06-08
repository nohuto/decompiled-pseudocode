/*
 * XREFs of ProcLibGlobalInit @ 0x1C002D3E4
 * Callers:
 *     DriverEntry @ 0x1C002D140 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0001E8C (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002614 (WPP_RECORDER_SF_s.c)
 *     DisplayPPMFlags @ 0x1C0004EA8 (DisplayPPMFlags.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000BA20 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C000BA7C (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001D600 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001D620 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001D640 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C001D660 (ProcLibTracePccErrata.c)
 *     GetRegistryDwordValue @ 0x1C00265DC (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C002667C (GetRegistryQwordValue.c)
 *     GetHvPpmCapabilities @ 0x1C002A49C (GetHvPpmCapabilities.c)
 *     InitDriver @ 0x1C002D008 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C002D2A4 (CollectAcpiBiosInfo.c)
 *     ProcLibRegisterEtw @ 0x1C002DDF4 (ProcLibRegisterEtw.c)
 *     PopulateEnergyEstimationModel @ 0x1C002DEAC (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r9
  char v14; // r10
  __int64 v20; // rbx
  SIZE_T v21; // rbx
  PVOID PoolWithTag; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  const CHAR *v25; // r8
  const CHAR *v26; // r9
  bool v27; // zf
  unsigned int v28; // ebx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  char *v32; // rdi
  unsigned __int8 i; // bl
  int inited; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  const char *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v41; // [rsp+28h] [rbp-41h]
  int v42; // [rsp+40h] [rbp-29h] BYREF
  bool v43; // [rsp+44h] [rbp-25h] BYREF
  bool v44; // [rsp+45h] [rbp-24h] BYREF
  int v45; // [rsp+48h] [rbp-21h] BYREF
  int v46; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v47; // [rsp+50h] [rbp-19h] BYREF
  int v48; // [rsp+58h] [rbp-11h] BYREF
  __int64 v49; // [rsp+60h] [rbp-9h]
  __int64 v50; // [rsp+68h] [rbp-1h]
  __int64 v51; // [rsp+70h] [rbp+7h]
  __int64 v52; // [rsp+78h] [rbp+Fh]
  unsigned __int64 InputBuffer; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v54; // [rsp+88h] [rbp+1Fh]

  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C00115E0, 0xF8u);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 10;
LABEL_3:
    v41 = v2;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      v41);
    return v3;
  }
  if ( dword_1C00115E0 != 49 )
  {
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0xBu,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      dword_1C00115E0,
      49);
    return (unsigned int)-1073741735;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00113E8);
  v3 = v6;
  if ( v6 < 0 )
  {
    v4 = 12;
LABEL_11:
    v41 = v6;
    v5 = 4;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00113F0);
  v3 = v6;
  if ( v6 < 0 )
  {
    v4 = 13;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0011900);
  v3 = v6;
  if ( v6 < 0 )
  {
    v4 = 14;
    goto LABEL_11;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C0011914 = 0;
  qword_1C0011908 = WorkItem;
  qword_1C0011400 = (__int64)&qword_1C00113F8;
  qword_1C00113F8 = (__int64)&qword_1C00113F8;
  qword_1C0011410 = (__int64)&qword_1C0011408;
  qword_1C0011408 = (__int64)&qword_1C0011408;
  qword_1C0011420 = (__int64)&qword_1C0011418;
  qword_1C0011418 = (__int64)&qword_1C0011418;
  qword_1C0011430 = (__int64)&qword_1C0011428;
  qword_1C0011428 = (__int64)&qword_1C0011428;
  qword_1C0011440 = (__int64)&qword_1C0011438;
  qword_1C0011438 = (__int64)&qword_1C0011438;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v47,
    v8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C00113E0,
    v9);
  GetRegistryQwordValue(v11, v10, &qword_1C00113D8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v45,
    v12);
  if ( v45 )
    byte_1C0011916 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v46,
    v13);
  qword_1C0011780 = (__int64)RegisterKernelIdleStates;
  dword_1C00117FC = 0;
  qword_1C0011788 = (__int64)RegisterKernelPerfStates;
  byte_1C00117F8 = v46 == 0;
  qword_1C0011798 = (__int64)RegisterKernelPerfFeedback;
  qword_1C00117A0 = (__int64)RegisterKernelLegacyPcc;
  qword_1C0011790 = (__int64)RegisterKernelCap;
  qword_1C00117A8 = (__int64)RegisterKernelCpc;
  qword_1C00117B0 = (__int64)RegisterKernelPepPerf;
  qword_1C00117B8 = (__int64)GetNtProcessorNumber;
  qword_1C00117C0 = (__int64)RegisterKernelPackage;
  qword_1C00117C8 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C00117D8 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C00117E0 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C00117E8 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C00117F0 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( !HviIsAnyHypervisorPresent() )
    goto LABEL_29;
  if ( HviIsHypervisorMicrosoftCompatible() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    InputBuffer = __PAIR64__(_RBX, _RAX);
    v54 = __PAIR64__(_RDX, _RCX);
  }
  else
  {
    InputBuffer = 0LL;
  }
  if ( (InputBuffer & 0x100000000000LL) == 0 )
  {
    qword_1C0011780 = (__int64)RegisterGuestIdleStates;
    qword_1C0011788 = (__int64)RegisterNoop;
    qword_1C0011798 = (__int64)RegisterNoop;
    qword_1C00117A0 = (__int64)RegisterNoop;
    qword_1C0011790 = (__int64)RegisterNoop;
    qword_1C00117A8 = (__int64)RegisterNoop;
    qword_1C00117B0 = (__int64)RegisterNoop;
    qword_1C00117C0 = (__int64)RegisterNoop;
LABEL_29:
    v20 = 640LL;
    if ( !v14 && (int)HalPrivateDispatchTable[126]((__int64)&v48) >= 0 )
    {
      if ( v48 != 1 )
        return (unsigned int)-1073741735;
      qword_1C00116B8 = v49;
      qword_1C00116C0 = v50;
      qword_1C00116C8 = v51;
      qword_1C00116D0 = v52;
    }
    goto LABEL_33;
  }
  GetHvPpmCapabilities(&v44, &v43);
  if ( v43 )
  {
    dword_1C00117FC = 2;
    qword_1C0011788 = (__int64)RegisterHvPerfStatesCounters;
    qword_1C0011798 = (__int64)RegisterHvPerfFeedbackCounters;
    qword_1C00117A0 = (__int64)RegisterHvLegacyPccCounters;
    qword_1C00117A8 = (__int64)RegisterHvCpcCounters;
  }
  else
  {
    v20 = 640LL;
    if ( !v44 )
      goto LABEL_33;
    dword_1C00117FC = 1;
    qword_1C0011788 = (__int64)RegisterHvPerfStates;
    qword_1C00117A0 = (__int64)RegisterHvLegacyPcc;
    qword_1C0011798 = (__int64)RegisterNoop;
    qword_1C00117B0 = (__int64)RegisterNoop;
    qword_1C00117C8 = (__int64)&PPM_ETW_SUMMARY_HV;
    EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
    qword_1C00117E0 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
    qword_1C00117E8 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
    qword_1C0011790 = (__int64)RegisterHvCap;
    qword_1C00117F0 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
    qword_1C00117A8 = (__int64)RegisterHvCpc;
  }
  v20 = 512LL;
  qword_1C0011780 = (__int64)RegisterHvIdleStates;
  qword_1C00117D8 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
  qword_1C00117B8 = (__int64)GetLpIndex;
  qword_1C00117C0 = (__int64)RegisterHvPackage;
LABEL_33:
  v21 = 8 * v20;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x72637250u);
  DevExts = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    v4 = 15;
    v41 = -1073741670;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, v21);
  v2 = ProcLibRegisterEtw();
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 16;
    goto LABEL_3;
  }
  v54 = 0LL;
  InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
  v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 17;
    goto LABEL_3;
  }
  v2 = CollectAcpiBiosInfo(v24, v23, v25, v26);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 18;
    goto LABEL_3;
  }
  v42 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v42);
  v27 = v42 == 2;
  v28 = 0;
  v42 = 1;
  if ( v27 )
    v28 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v42);
  if ( v42 == 2 )
    v28 |= 2u;
  v42 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v42);
  if ( v42 == 2 )
    v28 |= 0x3300000u;
  v42 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v42);
  if ( v42 == 2 )
    v28 |= 0x80000000;
  v29 = v28;
  v30 = 0x180099100377LL;
  qword_1C00113D8 = v28 | (unsigned __int64)qword_1C00113D8;
  dword_1C0011860 = v28;
  dword_1C00114F0 = 1;
  dword_1C00114F4 = 240;
  if ( v47 )
    v30 = 0x181099100377LL;
  Globals[0] = v30 | 0x10000000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v32 = (char *)&unk_1C0011970;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      LOBYTE(v31) = i;
      PopulateEnergyEstimationModel(v31, v32);
      v32 += 216;
    }
  }
  InputBuffer = 0LL;
  inited = InitDriver((__int64)&dword_1C00114F0, &InputBuffer);
  v3 = inited;
  if ( inited < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x13u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      inited);
    memset(&dword_1C00114F0, 0, 0xF0uLL);
    return v3;
  }
  v35 = InputBuffer | Globals[0];
  Globals[0] |= InputBuffer;
  if ( dword_1C00117FC == 1 )
  {
    qword_1C0011518 = 0LL;
    v36 = 0xFFFFDFFCF7FFFEFFuLL;
    qword_1C0011530 = 0LL;
    qword_1C0011538 = 0LL;
    qword_1C0011540 = 0LL;
    qword_1C0011548 = 0LL;
    qword_1C0011550 = 0LL;
    qword_1C0011560 = 0LL;
    qword_1C0011568 = 0LL;
    qword_1C0011570 = 0LL;
    qword_1C0011578 = 0LL;
LABEL_60:
    qword_1C00115A8 = 0LL;
    Globals[0] = v36 & v35;
    qword_1C00115A0 = 0LL;
    goto LABEL_61;
  }
  if ( dword_1C00117FC == 2 )
  {
    v36 = 0xFFFFFFFCFFFFFEFFuLL;
    goto LABEL_60;
  }
LABEL_61:
  v37 = "Enabled";
  if ( !dword_1C00117FC )
    v37 = "Disabled";
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x14u,
    (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
    v37);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0x15u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x16u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
  }
  DisplayPPMFlags(Globals[0], 5u);
  v38 = Globals[0];
  if ( (Globals[0] & v29 & 0x7F077) != 0 )
  {
    ProcLibTraceIdleStatesErrata(0);
    v38 = Globals[0];
  }
  if ( (v38 & v29 & 0x70000000) != 0 )
  {
    ProcLibTracePerfStatesErrata(0);
    v38 = Globals[0];
  }
  if ( (v38 & v29 & 0x3300000) != 0 )
  {
    ProcLibTraceThrottleStatesErrata(0);
    LODWORD(v38) = Globals[0];
  }
  if ( ((unsigned int)v38 & (unsigned int)v29 & 0x80000000) != 0 )
    ProcLibTracePccErrata(0);
  v39 = qword_1C00113D8;
  if ( qword_1C00113D8 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x17u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
      v39 = qword_1C00113D8;
    }
    DisplayPPMFlags(~v39, 5u);
    Globals[0] &= ~qword_1C00113D8;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x18u,
    (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
  DisplayPPMFlags(Globals[0], 4u);
  if ( qword_1C0011530 && (dword_1C00113E0 & 0x70000000) != 0 )
    qword_1C0011530 = 0LL;
  return v3;
}
