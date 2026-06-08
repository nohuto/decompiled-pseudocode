/*
 * XREFs of ProcLibGlobalInit @ 0x1C00354C0
 * Callers:
 *     DriverEntry @ 0x1C0035050 (DriverEntry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C00016C0 (HviIsAnyHypervisorPresent.c)
 *     InitDevExts @ 0x1C000170C (InitDevExts.c)
 *     DisplayPPMFlags @ 0x1C0001880 (DisplayPPMFlags.c)
 *     WPP_RECORDER_SF_s @ 0x1C00023E0 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000829C (WPP_RECORDER_SF_dd.c)
 *     GetRegistryQwordValue @ 0x1C001D584 (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C001D790 (GetRegistryDwordValue.c)
 *     TraceLoggingRegisterEx @ 0x1C00239F0 (TraceLoggingRegisterEx.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0027A90 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0027B00 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0027FA4 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0028D70 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHvPpmCapabilities @ 0x1C002ABD0 (GetHvPpmCapabilities.c)
 *     CollectAcpiBiosInfo @ 0x1C003517C (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationModel @ 0x1C0035264 (PopulateEnergyEstimationModel.c)
 *     InitDriver @ 0x1C0035EF0 (InitDriver.c)
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
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  const CHAR *v29; // r8
  const CHAR *v30; // r9
  bool v31; // zf
  unsigned int v32; // ebx
  __int64 v33; // rsi
  __int64 v34; // rax
  int *v35; // rdi
  unsigned __int8 i; // bl
  int v37; // eax
  __int64 v38; // rax
  const char *v39; // rax
  int v41; // [rsp+28h] [rbp-41h]
  int v42; // [rsp+30h] [rbp-39h]
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

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C00197D0, 0xF8u);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 10;
LABEL_3:
    v41 = inited;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v41);
    return (unsigned int)v3;
  }
  v6 = dword_1C00197D0;
  if ( dword_1C00197D0 != 52 )
  {
    v7 = 11;
    v42 = 52;
LABEL_8:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v6,
      v42);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00195D8);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 12;
LABEL_11:
    v41 = v8;
    v5 = 4;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00195E0);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 13;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0019AF0);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 14;
    goto LABEL_11;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C0019B04 = 0;
  qword_1C0019AF8 = WorkItem;
  qword_1C00195F0 = (__int64)&qword_1C00195E8;
  qword_1C00195E8 = (__int64)&qword_1C00195E8;
  qword_1C0019600 = (__int64)&qword_1C00195F8;
  qword_1C00195F8 = (__int64)&qword_1C00195F8;
  qword_1C0019610 = (__int64)&qword_1C0019608;
  qword_1C0019608 = (__int64)&qword_1C0019608;
  qword_1C0019620 = (__int64)&qword_1C0019618;
  qword_1C0019618 = (__int64)&qword_1C0019618;
  qword_1C0019630 = (__int64)&qword_1C0019628;
  qword_1C0019628 = (__int64)&qword_1C0019628;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v48);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C00195D0);
  GetRegistryQwordValue(v11, v10, &qword_1C00195C8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v46);
  if ( v46 )
    byte_1C0019B06 = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v47);
  qword_1C0019970 = (__int64)RegisterKernelIdleStates;
  v12 = 1280;
  dword_1C00199EC = 0;
  qword_1C0019978 = (__int64)RegisterKernelPerfStates;
  byte_1C00199E8 = v47 == 0;
  qword_1C0019988 = (__int64)RegisterKernelPerfFeedback;
  qword_1C0019990 = (__int64)RegisterKernelLegacyPcc;
  qword_1C0019980 = (__int64)RegisterKernelCap;
  qword_1C0019998 = (__int64)RegisterKernelCpc;
  qword_1C00199A0 = (__int64)RegisterKernelPepPerf;
  qword_1C00199A8 = (__int64)GetNtProcessorNumber;
  qword_1C00199B0 = (__int64)RegisterKernelPackage;
  qword_1C00199B8 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C00199C8 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C00199D0 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C00199D8 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C00199E0 = (__int64)&PPM_ETW_LONG_CAP_INFO;
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
        dword_1C00199EC = 2;
        qword_1C0019978 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C0019988 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C0019990 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C0019998 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v45 )
          goto LABEL_37;
        dword_1C00199EC = 1;
        qword_1C0019978 = (__int64)RegisterHvPerfStates;
        qword_1C0019990 = (__int64)RegisterHvLegacyPcc;
        qword_1C0019988 = (__int64)RegisterNoop;
        qword_1C00199A0 = (__int64)RegisterNoop;
        qword_1C00199B8 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C00199D0 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C00199D8 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C0019980 = (__int64)RegisterHvCap;
        qword_1C00199E0 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C0019998 = (__int64)RegisterHvCpc;
      }
      v12 = 512;
      qword_1C0019970 = (__int64)RegisterHvIdleStates;
      qword_1C00199C8 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      qword_1C00199A8 = (__int64)GetLpIndex;
      v23 = RegisterHvPackage;
    }
    else
    {
      qword_1C0019970 = (__int64)RegisterGuestIdleStates;
      v23 = RegisterNoop;
      qword_1C0019978 = (__int64)RegisterNoop;
      qword_1C0019988 = (__int64)RegisterNoop;
      qword_1C0019990 = (__int64)RegisterNoop;
      qword_1C0019980 = (__int64)RegisterNoop;
      qword_1C0019998 = (__int64)RegisterNoop;
      qword_1C00199A0 = (__int64)RegisterNoop;
    }
    qword_1C00199B0 = (__int64)v23;
  }
  else if ( (int)HalPrivateDispatchTable[136]((__int64)&v49) >= 0 )
  {
    v6 = v49;
    if ( v49 != 1 )
    {
      v7 = 15;
      v42 = 1;
      goto LABEL_8;
    }
    qword_1C0019898 = v50;
    qword_1C00198A0 = v51;
    qword_1C00198A8 = v52;
    qword_1C00198B0 = v53;
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
    v41 = v3;
    goto LABEL_4;
  }
  v55 = 0LL;
  InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
  inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 18;
    goto LABEL_3;
  }
  inited = CollectAcpiBiosInfo(v28, v27, v29, v30);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 19;
    goto LABEL_3;
  }
  v43 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v43);
  v31 = v43 == 2;
  v32 = 0;
  v43 = 1;
  if ( v31 )
    v32 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v43);
  if ( v43 == 2 )
    v32 |= 2u;
  v43 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v43);
  if ( v43 == 2 )
    v32 |= 0x3300000u;
  v43 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v43);
  if ( v43 == 2 )
    v32 |= 0x80000000;
  v33 = v32;
  v34 = 0x180099100377LL;
  qword_1C00195C8 = v32 | (unsigned __int64)qword_1C00195C8;
  dword_1C0019A50 = v32;
  dword_1C00196E0 = 1;
  dword_1C00196E4 = 240;
  if ( v48 )
    v34 = 0x181099100377LL;
  Globals[0] = v34 | 0x10000000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v35 = dword_1C0019B60;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      PopulateEnergyEstimationModel(i, v35);
      v35 += 64;
    }
  }
  InputBuffer = 0LL;
  v37 = InitDriver(&dword_1C00196E0, &InputBuffer);
  v3 = v37;
  if ( v37 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x14u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v37);
    memset(&dword_1C00196E0, 0, 0xF0uLL);
    return (unsigned int)v3;
  }
  v38 = InputBuffer | Globals[0];
  Globals[0] |= InputBuffer;
  if ( dword_1C00199EC == 1 )
  {
    qword_1C0019708 = 0LL;
    qword_1C0019720 = 0LL;
    Globals[0] = v38 & 0xFFFFDFFCF7FFFEFFuLL;
    qword_1C0019728 = 0LL;
    qword_1C0019730 = 0LL;
    qword_1C0019738 = 0LL;
    qword_1C0019740 = 0LL;
    qword_1C0019750 = 0LL;
    qword_1C0019758 = 0LL;
    qword_1C0019760 = 0LL;
    qword_1C0019768 = 0LL;
    qword_1C0019790 = 0LL;
    qword_1C0019798 = 0LL;
  }
  else
  {
    if ( dword_1C00199EC == 2 )
    {
      qword_1C0019790 = 0LL;
      qword_1C0019798 = 0LL;
      Globals[0] = v38 & 0xFFFFFFFCFFFFFEFFuLL;
    }
    v39 = "Disabled";
    if ( !dword_1C00199EC )
      goto LABEL_68;
  }
  v39 = "Enabled";
LABEL_68:
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x15u,
    (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
    v39);
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
  if ( (Globals[0] & v33 & 0x7F077) != 0 )
    ProcLibTraceIdleStatesErrata(0);
  if ( (Globals[0] & v33 & 0x70000000) != 0 )
    ProcLibTracePerfStatesErrata(0);
  if ( (Globals[0] & v33 & 0x3300000) != 0 )
    ProcLibTraceThrottleStatesErrata(0);
  if ( (Globals[0] & (unsigned int)v33 & 0x80000000) != 0 )
    ProcLibTracePccErrata(0);
  if ( qword_1C00195C8 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x18u,
        (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
    DisplayPPMFlags(~qword_1C00195C8, 5u);
    Globals[0] &= ~qword_1C00195C8;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x19u,
    (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  DisplayPPMFlags(Globals[0], 4u);
  if ( qword_1C0019720 && (dword_1C00195D0 & 0x70000000) != 0 )
    qword_1C0019720 = 0LL;
  return (unsigned int)v3;
}
