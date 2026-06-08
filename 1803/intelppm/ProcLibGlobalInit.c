/*
 * XREFs of ProcLibGlobalInit @ 0x1C003650C
 * Callers:
 *     DriverEntry @ 0x1C0037250 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     DisplayPPMFlags @ 0x1C0002BEC (DisplayPPMFlags.c)
 *     WPP_RECORDER_SF_s @ 0x1C000374C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003834 (WPP_RECORDER_SF_.c)
 *     InitDevExts @ 0x1C0003B28 (InitDevExts.c)
 *     HviIsAnyHypervisorPresent @ 0x1C0003B84 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000866C (WPP_RECORDER_SF_dd.c)
 *     GetRegistryDwordValue @ 0x1C0023E5C (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0024038 (GetRegistryQwordValue.c)
 *     TraceLoggingRegisterEx @ 0x1C0024A2C (TraceLoggingRegisterEx.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0028B38 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0028BAC (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0029054 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0029E24 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHvPpmCapabilities @ 0x1C002BDC0 (GetHvPpmCapabilities.c)
 *     InitDriver @ 0x1C0036040 (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C0036358 (PopulateEnergyEstimationModel.c)
 *     CollectAcpiBiosInfo @ 0x1C0037168 (CollectAcpiBiosInfo.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // eax
  NTSTATUS v3; // ebx
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  void *v23; // rax
  ETWENABLECALLBACK *v24; // rdx
  const struct _TlgProvider_t *v25; // rcx
  void *v26; // r8
  bool v27; // zf
  unsigned int v28; // ebx
  __int64 v29; // rsi
  __int64 v30; // rax
  int *v31; // rdi
  unsigned __int8 i; // bl
  int v33; // eax
  __int64 v34; // rax
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

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C001A7D0, 0xF8u);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 10;
LABEL_3:
    v37 = inited;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
      v37);
    return (unsigned int)v3;
  }
  v6 = dword_1C001A7D0;
  if ( dword_1C001A7D0 != 56 )
  {
    v7 = 11;
    v38 = 56;
LABEL_8:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
      v6,
      v38);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001A5D8);
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
         &qword_1C001A5E0);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 13;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001AAF0);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 14;
    goto LABEL_11;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C001AB04 = 0;
  qword_1C001AAF8 = WorkItem;
  qword_1C001A5F0 = (__int64)&qword_1C001A5E8;
  qword_1C001A5E8 = (__int64)&qword_1C001A5E8;
  qword_1C001A600 = (__int64)&qword_1C001A5F8;
  qword_1C001A5F8 = (__int64)&qword_1C001A5F8;
  qword_1C001A610 = (__int64)&qword_1C001A608;
  qword_1C001A608 = (__int64)&qword_1C001A608;
  qword_1C001A620 = (__int64)&qword_1C001A618;
  qword_1C001A618 = (__int64)&qword_1C001A618;
  qword_1C001A630 = (__int64)&qword_1C001A628;
  qword_1C001A628 = (__int64)&qword_1C001A628;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v44);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C001A5D0);
  GetRegistryQwordValue(v11, v10, &qword_1C001A5C8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v42);
  if ( v42 )
    byte_1C001AB06 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v43);
  qword_1C001A970 = (__int64)RegisterKernelIdleStates;
  v12 = 1280;
  dword_1C001A9EC = 0;
  qword_1C001A978 = (__int64)RegisterKernelPerfStates;
  byte_1C001A9E8 = v43 == 0;
  qword_1C001A988 = (__int64)RegisterKernelPerfFeedback;
  qword_1C001A990 = (__int64)RegisterKernelLegacyPcc;
  qword_1C001A980 = (__int64)RegisterKernelCap;
  qword_1C001A998 = (__int64)RegisterKernelCpc;
  qword_1C001A9A0 = (__int64)RegisterKernelPepPerf;
  qword_1C001A9A8 = (__int64)GetNtProcessorNumber;
  qword_1C001A9B0 = (__int64)RegisterKernelPackage;
  qword_1C001A9B8 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C001A9C8 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C001A9D0 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C001A9D8 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C001A9E0 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      HIDWORD(InputBuffer) = _RBX;
      v51 = __PAIR64__(_RDX, _RCX);
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
      v51 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      InputBuffer = 0LL;
    }
    if ( (InputBuffer & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v41, &v40, 0LL);
      if ( v40 )
      {
        dword_1C001A9EC = 2;
        qword_1C001A978 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C001A988 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C001A990 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C001A998 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v41 )
          goto LABEL_37;
        dword_1C001A9EC = 1;
        qword_1C001A978 = (__int64)RegisterHvPerfStates;
        qword_1C001A990 = (__int64)RegisterHvLegacyPcc;
        qword_1C001A988 = (__int64)RegisterNoop;
        qword_1C001A9A0 = (__int64)RegisterNoop;
        qword_1C001A9B8 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C001A9D0 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C001A9D8 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C001A980 = (__int64)RegisterHvCap;
        qword_1C001A9E0 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C001A998 = (__int64)RegisterHvCpc;
      }
      v12 = 512;
      qword_1C001A970 = (__int64)RegisterHvIdleStates;
      qword_1C001A9C8 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      qword_1C001A9A8 = (__int64)GetLpIndex;
      v23 = RegisterHvPackage;
    }
    else
    {
      qword_1C001A970 = (__int64)RegisterGuestIdleStates;
      v23 = RegisterNoop;
      qword_1C001A978 = (__int64)RegisterNoop;
      qword_1C001A988 = (__int64)RegisterNoop;
      qword_1C001A990 = (__int64)RegisterNoop;
      qword_1C001A980 = (__int64)RegisterNoop;
      qword_1C001A998 = (__int64)RegisterNoop;
      qword_1C001A9A0 = (__int64)RegisterNoop;
    }
    qword_1C001A9B0 = (__int64)v23;
  }
  else if ( (int)HalPrivateDispatchTable[139]((__int64)&v45) >= 0 )
  {
    v6 = v45;
    if ( v45 != 1 )
    {
      v7 = 15;
      v38 = 1;
      goto LABEL_8;
    }
    qword_1C001A898 = v46;
    qword_1C001A8A0 = v47;
    qword_1C001A8A8 = v48;
    qword_1C001A8B0 = v49;
  }
LABEL_37:
  inited = InitDevExts(v12);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 16;
    goto LABEL_3;
  }
  v3 = EtwRegister(
         &PPM_ETW_PROVIDER,
         (PETWENABLECALLBACK)ProcLibTraceControlCallback,
         0LL,
         (PREGHANDLE)&WPP_MAIN_CB.Queue.ListEntry.Blink);
  if ( v3 >= 0 )
  {
    TraceLoggingRegisterEx(v25, v24, v26);
    ProcLibEtwRegistered = 1;
    v3 = 0;
  }
  if ( v3 < 0 )
  {
    v4 = 17;
    v37 = v3;
    goto LABEL_4;
  }
  v51 = 0LL;
  InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
  inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 18;
    goto LABEL_3;
  }
  inited = CollectAcpiBiosInfo();
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 19;
    goto LABEL_3;
  }
  v39 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v39);
  v27 = v39 == 2;
  v28 = 0;
  v39 = 1;
  if ( v27 )
    v28 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v39);
  if ( v39 == 2 )
    v28 |= 2u;
  v39 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v39);
  if ( v39 == 2 )
    v28 |= 0x3300000u;
  v39 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v39);
  if ( v39 == 2 )
    v28 |= 0x80000000;
  v29 = v28;
  v30 = 0x180099900377LL;
  qword_1C001A5C8 = v28 | (unsigned __int64)qword_1C001A5C8;
  dword_1C001AA50 = v28;
  dword_1C001A6E0 = 1;
  dword_1C001A6E4 = 240;
  if ( v44 )
    v30 = 0x181099D00377LL;
  Globals[0] = v30 | 0x10000000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v31 = dword_1C001AB60;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      PopulateEnergyEstimationModel(i, v31);
      v31 += 64;
    }
  }
  InputBuffer = 0LL;
  v33 = InitDriver((__int64)&dword_1C001A6E0, &InputBuffer);
  v3 = v33;
  if ( v33 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x14u,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
      v33);
    memset(&dword_1C001A6E0, 0, 0xF0uLL);
    return (unsigned int)v3;
  }
  v34 = InputBuffer | Globals[0];
  Globals[0] |= InputBuffer;
  if ( dword_1C001A9EC == 1 )
  {
    qword_1C001A708 = 0LL;
    qword_1C001A720 = 0LL;
    Globals[0] = v34 & 0xFFFFDFFCF7FFFEFFuLL;
    qword_1C001A728 = 0LL;
    qword_1C001A730 = 0LL;
    qword_1C001A738 = 0LL;
    qword_1C001A740 = 0LL;
    qword_1C001A750 = 0LL;
    qword_1C001A758 = 0LL;
    qword_1C001A760 = 0LL;
    qword_1C001A768 = 0LL;
    qword_1C001A790 = 0LL;
    qword_1C001A798 = 0LL;
  }
  else
  {
    if ( dword_1C001A9EC == 2 )
    {
      qword_1C001A790 = 0LL;
      qword_1C001A798 = 0LL;
      Globals[0] = v34 & 0xFFFFFFFCFFFFFEFFuLL;
    }
    v35 = "Disabled";
    if ( !dword_1C001A9EC )
      goto LABEL_68;
  }
  v35 = "Enabled";
LABEL_68:
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x15u,
    (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
    v35);
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
  if ( (Globals[0] & v29 & 0x7F077) != 0 )
    ProcLibTraceIdleStatesErrata(0);
  if ( (Globals[0] & v29 & 0x70000000) != 0 )
    ProcLibTracePerfStatesErrata(0);
  if ( (Globals[0] & v29 & 0x3300000) != 0 )
    ProcLibTraceThrottleStatesErrata(0);
  if ( (Globals[0] & (unsigned int)v29 & 0x80000000) != 0 )
    ProcLibTracePccErrata(0);
  if ( qword_1C001A5C8 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x18u,
        (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
    DisplayPPMFlags(~qword_1C001A5C8, 5u);
    Globals[0] &= ~qword_1C001A5C8;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x19u,
    (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids);
  DisplayPPMFlags(Globals[0], 4u);
  if ( qword_1C001A720 && (dword_1C001A5D0 & 0x70000000) != 0 )
    qword_1C001A720 = 0LL;
  return (unsigned int)v3;
}
