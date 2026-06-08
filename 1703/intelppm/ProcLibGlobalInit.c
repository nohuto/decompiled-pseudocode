/*
 * XREFs of ProcLibGlobalInit @ 0x1C0031254
 * Callers:
 *     DriverEntry @ 0x1C0031040 (DriverEntry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0001BC0 (HviIsAnyHypervisorPresent.c)
 *     InitDevExts @ 0x1C0001C0C (InitDevExts.c)
 *     DisplayPPMFlags @ 0x1C0001DEC (DisplayPPMFlags.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002830 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000844C (WPP_RECORDER_SF_dd.c)
 *     TraceLoggingRegisterEx @ 0x1C001A7D0 (TraceLoggingRegisterEx.c)
 *     GetRegistryQwordValue @ 0x1C001AC7C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C001AD4C (GetRegistryDwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0024378 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C00243E0 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C00247D4 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0025588 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHvPpmCapabilities @ 0x1C002737C (GetHvPpmCapabilities.c)
 *     CollectAcpiBiosInfo @ 0x1C003116C (CollectAcpiBiosInfo.c)
 *     InitDriver @ 0x1C0031C84 (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C003202C (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // eax
  NTSTATUS v3; // ebx
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  void *v21; // rax
  ETWENABLECALLBACK *v22; // rdx
  const struct _TlgProvider_t *v23; // rcx
  void *v24; // r8
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  const CHAR *v27; // r8
  const CHAR *v28; // r9
  bool v29; // zf
  unsigned int v30; // ebx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  int *v34; // rdi
  unsigned __int8 i; // bl
  int v36; // eax
  __int64 v37; // rax
  const char *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v42; // [rsp+28h] [rbp-41h]
  int v43; // [rsp+40h] [rbp-29h] BYREF
  bool v44; // [rsp+44h] [rbp-25h] BYREF
  bool v45; // [rsp+45h] [rbp-24h] BYREF
  int v46; // [rsp+48h] [rbp-21h] BYREF
  int v47; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v48; // [rsp+50h] [rbp-19h] BYREF
  int v49; // [rsp+58h] [rbp-11h] BYREF
  __int64 v50; // [rsp+60h] [rbp-9h]
  __int64 v51; // [rsp+68h] [rbp-1h]
  __int64 v52; // [rsp+70h] [rbp+7h]
  __int64 v53; // [rsp+78h] [rbp+Fh]
  unsigned __int64 InputBuffer; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v55; // [rsp+88h] [rbp+1Fh]

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C0015F90, 0xF8u);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 10;
LABEL_3:
    v42 = inited;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      v42);
    return (unsigned int)v3;
  }
  if ( dword_1C0015F90 != 49 )
  {
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0xBu,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      dword_1C0015F90,
      49);
    return (unsigned int)-1073741735;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0015D98);
  v3 = v6;
  if ( v6 < 0 )
  {
    v4 = 12;
LABEL_11:
    v42 = v6;
    v5 = 4;
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0015DA0);
  v3 = v6;
  if ( v6 < 0 )
  {
    v4 = 13;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00162B0);
  v3 = v6;
  if ( v6 < 0 )
  {
    v4 = 14;
    goto LABEL_11;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C00162C4 = 0;
  qword_1C00162B8 = WorkItem;
  qword_1C0015DB0 = (__int64)&qword_1C0015DA8;
  qword_1C0015DA8 = (__int64)&qword_1C0015DA8;
  qword_1C0015DC0 = (__int64)&qword_1C0015DB8;
  qword_1C0015DB8 = (__int64)&qword_1C0015DB8;
  qword_1C0015DD0 = (__int64)&qword_1C0015DC8;
  qword_1C0015DC8 = (__int64)&qword_1C0015DC8;
  qword_1C0015DE0 = (__int64)&qword_1C0015DD8;
  qword_1C0015DD8 = (__int64)&qword_1C0015DD8;
  qword_1C0015DF0 = (__int64)&qword_1C0015DE8;
  qword_1C0015DE8 = (__int64)&qword_1C0015DE8;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v48);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C0015D90);
  GetRegistryQwordValue(v9, v8, &qword_1C0015D88);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v46);
  if ( v46 )
    byte_1C00162C6 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v47);
  qword_1C0016130 = (__int64)RegisterKernelIdleStates;
  v10 = 640;
  dword_1C00161AC = 0;
  qword_1C0016138 = (__int64)RegisterKernelPerfStates;
  byte_1C00161A8 = v47 == 0;
  qword_1C0016148 = (__int64)RegisterKernelPerfFeedback;
  qword_1C0016150 = (__int64)RegisterKernelLegacyPcc;
  qword_1C0016140 = (__int64)RegisterKernelCap;
  qword_1C0016158 = (__int64)RegisterKernelCpc;
  qword_1C0016160 = (__int64)RegisterKernelPepPerf;
  qword_1C0016168 = (__int64)GetNtProcessorNumber;
  qword_1C0016170 = (__int64)RegisterKernelPackage;
  qword_1C0016178 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C0016188 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C0016190 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C0016198 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C00161A0 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      HIDWORD(InputBuffer) = _RBX;
      v55 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      LODWORD(_RAX) = 0;
    }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      InputBuffer = __PAIR64__(_RBX, _RAX);
      v55 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v45, &v44, 0LL);
      if ( v44 )
      {
        dword_1C00161AC = 2;
        qword_1C0016138 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C0016148 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C0016150 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C0016158 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v45 )
          goto LABEL_36;
        dword_1C00161AC = 1;
        qword_1C0016138 = (__int64)RegisterHvPerfStates;
        qword_1C0016150 = (__int64)RegisterHvLegacyPcc;
        qword_1C0016148 = (__int64)RegisterNoop;
        qword_1C0016160 = (__int64)RegisterNoop;
        qword_1C0016178 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C0016190 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C0016198 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C0016140 = (__int64)RegisterHvCap;
        qword_1C00161A0 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C0016158 = (__int64)RegisterHvCpc;
      }
      v10 = 512;
      qword_1C0016130 = (__int64)RegisterHvIdleStates;
      qword_1C0016188 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      qword_1C0016168 = (__int64)GetLpIndex;
      v21 = RegisterHvPackage;
    }
    else
    {
      qword_1C0016130 = (__int64)RegisterGuestIdleStates;
      v21 = RegisterNoop;
      qword_1C0016138 = (__int64)RegisterNoop;
      qword_1C0016148 = (__int64)RegisterNoop;
      qword_1C0016150 = (__int64)RegisterNoop;
      qword_1C0016140 = (__int64)RegisterNoop;
      qword_1C0016158 = (__int64)RegisterNoop;
      qword_1C0016160 = (__int64)RegisterNoop;
    }
    qword_1C0016170 = (__int64)v21;
  }
  else if ( (int)HalPrivateDispatchTable[126]((__int64)&v49) >= 0 )
  {
    if ( v49 != 1 )
      return (unsigned int)-1073741735;
    qword_1C0016068 = v50;
    qword_1C0016070 = v51;
    qword_1C0016078 = v52;
    qword_1C0016080 = v53;
  }
LABEL_36:
  inited = InitDevExts(v10);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 15;
    goto LABEL_3;
  }
  v3 = EtwRegister(
         &PPM_ETW_PROVIDER,
         (PETWENABLECALLBACK)ProcLibTraceControlCallback,
         0LL,
         (PREGHANDLE)&WPP_MAIN_CB.Queue.ListEntry.Blink);
  if ( v3 >= 0 )
  {
    TraceLoggingRegisterEx(v23, v22, v24);
    ProcLibEtwRegistered = 1;
    v3 = 0;
  }
  if ( v3 < 0 )
  {
    v4 = 16;
    v42 = v3;
    goto LABEL_4;
  }
  v55 = 0LL;
  InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
  inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 17;
    goto LABEL_3;
  }
  inited = CollectAcpiBiosInfo(v26, v25, v27, v28);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 18;
    goto LABEL_3;
  }
  v43 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v43);
  v29 = v43 == 2;
  v30 = 0;
  v43 = 1;
  if ( v29 )
    v30 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v43);
  if ( v43 == 2 )
    v30 |= 2u;
  v43 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v43);
  if ( v43 == 2 )
    v30 |= 0x3300000u;
  v43 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v43);
  if ( v43 == 2 )
    v30 |= 0x80000000;
  v31 = v30;
  v32 = 0x180099100377LL;
  qword_1C0015D88 = v30 | (unsigned __int64)qword_1C0015D88;
  dword_1C0016210 = v30;
  dword_1C0015EA0 = 1;
  dword_1C0015EA4 = 240;
  if ( v48 )
    v32 = 0x181099100377LL;
  Globals[0] = v32 | 0x10000000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v34 = dword_1C0016320;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      LOBYTE(v33) = i;
      PopulateEnergyEstimationModel(v33, v34);
      v34 += 54;
    }
  }
  InputBuffer = 0LL;
  v36 = InitDriver(&dword_1C0015EA0, &InputBuffer);
  v3 = v36;
  if ( v36 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x13u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      v36);
    memset(&dword_1C0015EA0, 0, 0xF0uLL);
    return (unsigned int)v3;
  }
  v37 = InputBuffer | Globals[0];
  Globals[0] |= InputBuffer;
  if ( dword_1C00161AC == 1 )
  {
    qword_1C0015EC8 = 0LL;
    qword_1C0015EE0 = 0LL;
    Globals[0] = v37 & 0xFFFFDFFCF7FFFEFFuLL;
    qword_1C0015EE8 = 0LL;
    qword_1C0015EF0 = 0LL;
    qword_1C0015EF8 = 0LL;
    qword_1C0015F00 = 0LL;
    qword_1C0015F10 = 0LL;
    qword_1C0015F18 = 0LL;
    qword_1C0015F20 = 0LL;
    qword_1C0015F28 = 0LL;
    qword_1C0015F50 = 0LL;
    qword_1C0015F58 = 0LL;
  }
  else
  {
    if ( dword_1C00161AC == 2 )
    {
      qword_1C0015F50 = 0LL;
      qword_1C0015F58 = 0LL;
      Globals[0] = v37 & 0xFFFFFFFCFFFFFEFFuLL;
    }
    v38 = "Disabled";
    if ( !dword_1C00161AC )
      goto LABEL_67;
  }
  v38 = "Enabled";
LABEL_67:
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x14u,
    (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
    v38);
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
  v39 = Globals[0];
  if ( (Globals[0] & v31 & 0x7F077) != 0 )
  {
    ProcLibTraceIdleStatesErrata(0);
    v39 = Globals[0];
  }
  if ( (v39 & v31 & 0x70000000) != 0 )
  {
    ProcLibTracePerfStatesErrata(0);
    v39 = Globals[0];
  }
  if ( (v39 & v31 & 0x3300000) != 0 )
  {
    ProcLibTraceThrottleStatesErrata(0);
    LODWORD(v39) = Globals[0];
  }
  if ( ((unsigned int)v39 & (unsigned int)v31 & 0x80000000) != 0 )
    ProcLibTracePccErrata(0);
  v40 = qword_1C0015D88;
  if ( qword_1C0015D88 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x17u,
        (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
      v40 = qword_1C0015D88;
    }
    DisplayPPMFlags(~v40, 5u);
    Globals[0] &= ~qword_1C0015D88;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x18u,
    (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
  DisplayPPMFlags(Globals[0], 4u);
  if ( qword_1C0015EE0 && (dword_1C0015D90 & 0x70000000) != 0 )
    qword_1C0015EE0 = 0LL;
  return (unsigned int)v3;
}
