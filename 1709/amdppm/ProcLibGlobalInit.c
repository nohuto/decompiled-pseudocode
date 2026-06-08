/*
 * XREFs of ProcLibGlobalInit @ 0x1C00303D4
 * Callers:
 *     DriverEntry @ 0x1C0030130 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0001F1C (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_s @ 0x1C00026B8 (WPP_RECORDER_SF_s.c)
 *     DisplayPPMFlags @ 0x1C0004EE4 (DisplayPPMFlags.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000C148 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C000C1A4 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C00205C8 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C00205F0 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0020618 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0020640 (ProcLibTracePccErrata.c)
 *     GetRegistryDwordValue @ 0x1C002980C (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C00298AC (GetRegistryQwordValue.c)
 *     GetHvPpmCapabilities @ 0x1C002D930 (GetHvPpmCapabilities.c)
 *     InitDriver @ 0x1C0030008 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C0030294 (CollectAcpiBiosInfo.c)
 *     ProcLibRegisterEtw @ 0x1C0030DB0 (ProcLibRegisterEtw.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0030E68 (PopulateEnergyEstimationParameters.c)
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
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r9
  unsigned int v16; // edi
  void *v22; // rax
  PVOID PoolWithTag; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  const CHAR *v26; // r8
  const CHAR *v27; // r9
  bool v28; // zf
  unsigned int v29; // ebx
  __int64 v30; // rsi
  __int64 v31; // rax
  int inited; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  const char *v35; // rax
  int v37; // [rsp+28h] [rbp-41h]
  int v38; // [rsp+30h] [rbp-39h]
  int v39; // [rsp+40h] [rbp-29h] BYREF
  bool v40; // [rsp+44h] [rbp-25h] BYREF
  bool v41; // [rsp+45h] [rbp-24h] BYREF
  int v42; // [rsp+48h] [rbp-21h] BYREF
  int v43; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v44; // [rsp+50h] [rbp-19h] BYREF
  int v45; // [rsp+58h] [rbp-11h] BYREF
  __int64 v46; // [rsp+60h] [rbp-9h]
  __int64 v47; // [rsp+68h] [rbp-1h]
  __int64 v48; // [rsp+70h] [rbp+7h]
  __int64 v49; // [rsp+78h] [rbp+Fh]
  unsigned __int64 InputBuffer; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp+1Fh]

  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C00115E0, 0xF8u);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 10;
LABEL_3:
    v37 = v2;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v37);
    return v3;
  }
  v6 = dword_1C00115E0;
  if ( dword_1C00115E0 != 52 )
  {
    v7 = 11;
    v38 = 52;
LABEL_8:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v6,
      v38);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00113E8);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 12;
LABEL_11:
    v37 = v8;
    v5 = 4;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00113F0);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 13;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0011900);
  v3 = v8;
  if ( v8 < 0 )
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
    &v44,
    v10);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C00113E0,
    v11);
  GetRegistryQwordValue(v13, v12, &qword_1C00113D8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v42,
    v14);
  if ( v42 )
    byte_1C0011916 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v43,
    v15);
  qword_1C0011780 = (__int64)RegisterKernelIdleStates;
  v16 = 1280;
  dword_1C00117FC = 0;
  qword_1C0011788 = (__int64)RegisterKernelPerfStates;
  byte_1C00117F8 = v43 == 0;
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
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsHypervisorMicrosoftCompatible() )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      InputBuffer = __PAIR64__(_RBX, _RAX);
      v51 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v41, &v40);
      if ( v40 )
      {
        dword_1C00117FC = 2;
        qword_1C0011788 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C0011798 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C00117A0 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C00117A8 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v41 )
          goto LABEL_34;
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
      v16 = 512;
      qword_1C0011780 = (__int64)RegisterHvIdleStates;
      qword_1C00117D8 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      qword_1C00117B8 = (__int64)GetLpIndex;
      v22 = RegisterHvPackage;
    }
    else
    {
      qword_1C0011780 = (__int64)RegisterGuestIdleStates;
      v22 = RegisterNoop;
      qword_1C0011788 = (__int64)RegisterNoop;
      qword_1C0011798 = (__int64)RegisterNoop;
      qword_1C00117A0 = (__int64)RegisterNoop;
      qword_1C0011790 = (__int64)RegisterNoop;
      qword_1C00117A8 = (__int64)RegisterNoop;
      qword_1C00117B0 = (__int64)RegisterNoop;
    }
    qword_1C00117C0 = (__int64)v22;
  }
  else if ( (int)HalPrivateDispatchTable[136]((__int64)&v45) >= 0 )
  {
    v6 = v45;
    if ( v45 != 1 )
    {
      v7 = 15;
      v38 = 1;
      goto LABEL_8;
    }
    qword_1C00116A8 = v46;
    qword_1C00116B0 = v47;
    qword_1C00116B8 = v48;
    qword_1C00116C0 = v49;
  }
LABEL_34:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v16, 0x72637250u);
  DevExts = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    v4 = 16;
    v37 = -1073741670;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, 8LL * v16);
  v2 = ProcLibRegisterEtw();
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 17;
    goto LABEL_3;
  }
  v51 = 0LL;
  InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
  v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 18;
    goto LABEL_3;
  }
  v2 = CollectAcpiBiosInfo(v25, v24, v26, v27);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 19;
    goto LABEL_3;
  }
  v39 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v39);
  v28 = v39 == 2;
  v29 = 0;
  v39 = 1;
  if ( v28 )
    v29 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v39);
  if ( v39 == 2 )
    v29 |= 2u;
  v39 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v39);
  if ( v39 == 2 )
    v29 |= 0x3300000u;
  v39 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v39);
  if ( v39 == 2 )
    v29 |= 0x80000000;
  v30 = v29;
  v31 = 0x180099100377LL;
  qword_1C00113D8 = v29 | (unsigned __int64)qword_1C00113D8;
  dword_1C0011860 = v29;
  dword_1C00114F0 = 1;
  dword_1C00114F4 = 240;
  if ( v44 )
    v31 = 0x181099100377LL;
  Globals[0] = v31 | 0x10000000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    Globals[0] |= 0x2000000000uLL;
    PopulateEnergyEstimationParameters();
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
      0x14u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      inited);
    memset(&dword_1C00114F0, 0, 0xF0uLL);
    return v3;
  }
  v33 = InputBuffer | Globals[0];
  Globals[0] |= InputBuffer;
  if ( dword_1C00117FC == 1 )
  {
    qword_1C0011518 = 0LL;
    v34 = 0xFFFFDFFCF7FFFEFFuLL;
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
    Globals[0] = v34 & v33;
    qword_1C00115A0 = 0LL;
    goto LABEL_61;
  }
  if ( dword_1C00117FC == 2 )
  {
    v34 = 0xFFFFFFFCFFFFFEFFuLL;
    goto LABEL_60;
  }
LABEL_61:
  v35 = "Enabled";
  if ( !dword_1C00117FC )
    v35 = "Disabled";
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x15u,
    (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
    v35);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0x16u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0x17u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  DisplayPPMFlags(Globals[0], 5u);
  if ( (Globals[0] & v30 & 0x7F077) != 0 )
    ProcLibTraceIdleStatesErrata(0);
  if ( (Globals[0] & v30 & 0x70000000) != 0 )
    ProcLibTracePerfStatesErrata(0);
  if ( (Globals[0] & v30 & 0x3300000) != 0 )
    ProcLibTraceThrottleStatesErrata(0);
  if ( (Globals[0] & (unsigned int)v30 & 0x80000000) != 0 )
    ProcLibTracePccErrata(0);
  if ( qword_1C00113D8 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x18u,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
    DisplayPPMFlags(~qword_1C00113D8, 5u);
    Globals[0] &= ~qword_1C00113D8;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x19u,
    (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  DisplayPPMFlags(Globals[0], 4u);
  if ( qword_1C0011530 && (dword_1C00113E0 & 0x70000000) != 0 )
    qword_1C0011530 = 0LL;
  return v3;
}
