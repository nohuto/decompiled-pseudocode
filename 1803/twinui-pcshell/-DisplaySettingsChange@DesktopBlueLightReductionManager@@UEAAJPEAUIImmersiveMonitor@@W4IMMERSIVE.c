/*
 * XREFs of ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180144220
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180083850 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180083850.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z @ 0x1801434A8 (--$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3c9f3b8741062b29cb4eaa4663372faf___ @ 0x1801437DC (Windows--Internal--ComTaskPool--QueueTask__lambda_3c9f3b8741062b29cb4eaa4663372faf___.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180143BC4 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180144388 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180144388.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DesktopBlueLightReductionManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  const char *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  volatile int *v9; // rdx
  int v10; // edi
  __int64 result; // rax
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  _QWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v13 = -2LL;
  try
  {
    v18 = (a3 & 0x28) != 0;
    LOBYTE(v19) = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v20);
    if ( v4 >= 0 )
      LOBYTE(v19) = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        224LL,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v4);
    DesktopBlueLightReductionManagerTelemetry::DisplaySettingsChange<bool const &,bool &>((__int64)&v18, (__int64)&v19);
    if ( v18 )
    {
      v6 = a1 - 112;
      *(_QWORD *)v12 = a1 - 112;
      if ( a1 != 112 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::InternalAddRef(a1 - 112);
      v14[0] = a1 - 112;
      v14[1] = v20;
      v15 = v19;
      wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
        &v16,
        (__int64 *)v12);
      v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_3c9f3b8741062b29cb4eaa4663372faf___(
              v8,
              v7,
              *(_DWORD *)(a1 + 92),
              (__int64)v14);
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::Release(
          v16,
          v9);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          246LL,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v10);
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::Release(
          v6,
          v9);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFA,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v5);
  }
  return result;
}
