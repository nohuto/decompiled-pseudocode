/*
 * XREFs of _lambda_c42184d898c0806d92bf2f8c2d17483b_::operator() @ 0x1800F57D0
 * Callers:
 *     ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x1800F54E4 (-_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOper.c)
 *     std::_Func_impl__lambda_af9b671aa906e030469e276bcd26d6be__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x1801011E0 (std--_Func_impl__lambda_af9b671aa906e030469e276bcd26d6be__std--allocator_int__void__ea_1801011E0.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherCrashRecovery@@U?$InterfaceList@UIViewManagerControl@@U?$InterfaceList@UIImmersiveShellHookNotification@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD2A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherCrashRecovery@@U?$InterfaceList@UIViewManagerControl@@U?$InterfaceList@UIImmersiveShellHookNotification@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FD350 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_b11ecdeb5c454bd9b2c1333bf65344f5___ @ 0x1800FFE2C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_b11ecdeb5c454bd9b2c1333bf65344f5___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_c42184d898c0806d92bf2f8c2d17483b_::operator()(unsigned int **a1, _QWORD *a2)
{
  unsigned int *v4; // rbx
  __int64 v5; // rcx
  IUnknown *v6; // rbx
  DWORD CurrentThreadId; // eax
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int *v11; // [rsp+38h] [rbp-20h] BYREF
  unsigned int *v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h]

  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a2 + 808LL))(*a2, **a1, *(_QWORD *)a1[1]) == 1 )
  {
    v4 = a1[2];
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,Microsoft::WRL::Details::InterfaceList<IViewEventDispatcherCrashRecovery,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(a1[2]);
    v11 = a1[2];
    v12 = v4;
    v16 = 0LL;
    v5 = *a2;
    v13 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_b11ecdeb5c454bd9b2c1333bf65344f5___(
                         &v15,
                         &v11);
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v6, 0LL);
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x656,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,Microsoft::WRL::Details::InterfaceList<IViewEventDispatcherCrashRecovery,Microsoft::WRL::Details::InterfaceList<IViewManagerControl,Microsoft::WRL::Details::InterfaceList<IImmersiveShellHookNotification,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release();
  }
  return 0LL;
}
