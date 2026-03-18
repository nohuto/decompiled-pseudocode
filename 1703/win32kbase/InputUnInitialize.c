/*
 * XREFs of InputUnInitialize @ 0x1C0069278
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0051E7C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0069480 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C006DF04 (--1CTouchProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 InputUnInitialize()
{
  __int64 v0; // rbx
  PDRIVER_CONTROL DeviceRoutine; // rbx
  __int64 v2; // rcx
  __int64 v3; // rbx
  void (**v4)(void); // rbx
  __int64 v5; // rdi
  CDeviceAcceleration **v6; // rbx
  __int64 v7; // rdi
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  if ( gbInputInitialized )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v9, 1, 0);
    if ( gpInputGlobals )
      Win32FreePool((__int64)gpInputGlobals);
    gpInputGlobals = 0LL;
    v0 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      CTouchProcessor::~CTouchProcessor(*(CTouchProcessor **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      Win32FreePool(v0);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    }
    DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
    {
      v2 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 6);
      if ( v2 )
        Win32FreePool(v2);
      Win32FreePool((__int64)DeviceRoutine);
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
    }
    v3 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    {
      CInputDest::SetEmpty(*(CInputDest **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
      Win32FreePool(v3);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
    }
    InputExtensibilityCallout::UnInitialize();
    if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
    {
      Win32FreePool(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
      *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
    }
    v4 = (void (**)(void))&off_1C0186008;
    v5 = 3LL;
    do
    {
      (*v4)();
      v4 += 6;
      --v5;
    }
    while ( v5 );
    CBaseInput::_sessionInitialized = 0;
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    v6 = &qword_1C0186098;
    v7 = 2LL;
    do
    {
      if ( *v6 )
        (*(void (__fastcall **)(CDeviceAcceleration *, __int64))(*(_QWORD *)*v6 + 16LL))(*v6, 1LL);
      *v6 = 0LL;
      v6 += 3;
      --v7;
    }
    while ( v7 );
    if ( v9 && !v10 && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
  return 0LL;
}
