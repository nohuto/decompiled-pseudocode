/*
 * XREFs of InputUnInitialize @ 0x1C0004D90
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0075CD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0004FB0 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C0007214 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C001ADD0 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C006107C (-_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 InputUnInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  CInputConfig *v10; // rcx
  struct _SINGLE_LIST_ENTRY *v11; // rbx
  CInputConfig *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  void (**v15)(void); // rbx
  __int64 v16; // rdi
  CDeviceAcceleration **v17; // rbx
  __int64 v18; // rdi
  int v20; // [rsp+30h] [rbp+8h] BYREF
  int v21; // [rsp+34h] [rbp+Ch]

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v20, 1, 0);
    if ( gpInputGlobals )
      Win32FreePool(gpInputGlobals, v0, v1);
    gpInputGlobals = 0LL;
    v2 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      CTouchProcessor::~CTouchProcessor(*(CTouchProcessor **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      Win32FreePool(v2, v3, v4);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    }
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
    {
      Win32FreePool(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, v0, v1);
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
    }
    v5 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    {
      CInputDest::SetEmpty(*(CInputDest **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
      Win32FreePool(v5, v6, v7);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
    }
    InputExtensibilityCallout::UnInitialize();
    v10 = *(CInputConfig **)&WPP_MAIN_CB.AlignmentRequirement;
    if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
    {
      Win32FreePool(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement, v8, v9);
      *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
    }
    v11 = gpInputConfig;
    if ( gpInputConfig )
    {
      CInputConfig::_FreeConfigList(v10, gpInputConfig);
      CInputConfig::_FreeConfigList(v12, v11 + 1);
      Win32FreePool(v11, v13, v14);
    }
    gpInputConfig = 0LL;
    v15 = (void (**)(void))&off_1C0188008;
    v16 = 3LL;
    do
    {
      (*v15)();
      v15 += 6;
      --v16;
    }
    while ( v16 );
    CBaseInput::_sessionInitialized = 0;
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, gBaseLog);
    v17 = &qword_1C0188098;
    v18 = 2LL;
    do
    {
      if ( *v17 )
        (*(void (__fastcall **)(CDeviceAcceleration *, __int64))(*(_QWORD *)*v17 + 16LL))(*v17, 1LL);
      *v17 = 0LL;
      v17 += 3;
      --v18;
    }
    while ( v18 );
    if ( v20 && !v21 && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
  return 0LL;
}
