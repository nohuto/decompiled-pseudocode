/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260
 * Callers:
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180025AB0 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18003AA14 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inte.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x18004D2F4 (--1CImmersiveApp@@MEAA@XZ.c)
 *     ?ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180051D30 (-ApproveWinRtActivation@ViewWrapperBase@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@P.c)
 *     ?add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180053F60 (-add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAU.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180054180 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x1800541B8 (-Attach@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetAr.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800541E8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180054224 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?s_TPWake@CDelayedTask@ComTaskPool@Internal@Windows@@CAXPEAXE@Z @ 0x180054340 (-s_TPWake@CDelayedTask@ComTaskPool@Internal@Windows@@CAXPEAXE@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___::Run @ 0x1800548F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_de7a847248f7e9ff51c83bca1460305a___--Run.c)
 *     ??_GUAPViewWrapper@@UEAAPEAXI@Z @ 0x18005AC20 (--_GUAPViewWrapper@@UEAAPEAXI@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180069034 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_16dbbe28c6f74937ed7301029aac4a5a_@@$0?0PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18006ED60 (--_G-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManager_ea_18006ED60.c)
 *     _lambda_16dbbe28c6f74937ed7301029aac4a5a_::operator() @ 0x18006EEE0 (_lambda_16dbbe28c6f74937ed7301029aac4a5a_--operator().c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180070F64 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fe210b1289c3c46e19802a64f8cd29ca___ @ 0x180075EE0 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_180075EE0.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_fe210b1289c3c46e19802a64f8cd29ca__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___ @ 0x180075FB0 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_fe210b1289c3c46e19802a64f8cd29ca__Windo.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_aef83c7aa80487086a369dd1bddd48ec___ @ 0x1800855AC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_1800855AC.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_aef83c7aa80487086a369dd1bddd48ec__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___ @ 0x18008567C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_aef83c7aa80487086a369dd1bddd48ec__Windo.c)
 *     ?ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z @ 0x18008A8E0 (-ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18008AB9C (_lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_10764c1d64f4a25c831c35f7f52c83d4___::Run @ 0x18008B730 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_10764c1d64f4a25c831c35f7f52c83d4___--Run.c)
 *     ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x18008E8B8 (-s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x180094564 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??1ViewWrapperBase@@QEAA@XZ @ 0x1800EFD58 (--1ViewWrapperBase@@QEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180153514 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x18015B03C (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18015B2B8 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x180173180 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180175A70 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801E6048 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 * Callees:
 *     ??_GSizeConversionViewInfo@@UEAAPEAXI@Z @ 0x180026150 (--_GSizeConversionViewInfo@@UEAAPEAXI@Z.c)
 *     ??_ECThread@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x18003BA60 (--_ECThread@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x1800710D0 (--_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z.c)
 *     ??_ECDelayedTask@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x180087C80 (--_ECDelayedTask@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int result; // eax
  Windows::Internal::ComTaskPool::CDelayedTask *v3; // r10
  unsigned int v4; // ebx
  Windows::Internal::ComTaskPool::CThread *(__fastcall *v5)(Windows::Internal::ComTaskPool::CThread *, char); // rax
  __int64 v6; // rdx
  __int64 (*v7)(); // rax

  result = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  v4 = result;
  if ( !result )
  {
    if ( v3 )
    {
      v5 = *(Windows::Internal::ComTaskPool::CThread *(__fastcall **)(Windows::Internal::ComTaskPool::CThread *, char))(*(_QWORD *)v3 + 24LL);
      v6 = v4 + 1;
      if ( (char *)v5 == (char *)Windows::Internal::ComTaskPool::CDelayedTask::`vector deleting destructor' )
      {
        Windows::Internal::ComTaskPool::CDelayedTask::`vector deleting destructor'(v3, v6);
      }
      else if ( v5 == SizeConversionViewInfo::`scalar deleting destructor' )
      {
        SizeConversionViewInfo::`scalar deleting destructor'(v3, v4 + 1);
      }
      else if ( v5 == Windows::Internal::ComTaskPool::CThread::`vector deleting destructor' )
      {
        Windows::Internal::ComTaskPool::CThread::`vector deleting destructor'(v3, v4 + 1);
      }
      else if ( (char *)v5 == (char *)CMarshaledInterface::CMarshalStream::`scalar deleting destructor' )
      {
        CMarshaledInterface::CMarshalStream::`scalar deleting destructor'(v3, v6);
      }
      else if ( (char *)v5 == (char *)Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
      {
        Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v3, v6);
      }
      else
      {
        v5(v3, v6);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v7 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( v7 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        return v4;
      }
      v7();
    }
    return v4;
  }
  return result;
}
