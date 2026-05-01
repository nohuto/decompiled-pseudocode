/*
 * XREFs of ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180111280
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UIUAPViewWrapper@@U?$InterfaceList@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FC480 (-Release@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UIUAPViewWrapper@@U-.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UIUAPViewWrapper@@U?$InterfaceList@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FC530 (-AddRef@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UIUAPViewWrapper@@U-$.c)
 *     ??$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerInteropTelemetry@@SAX$$QEAPEBGAEAI$$QEAW4VIEW_TYPE@0@@Z @ 0x180110EFC (--$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerIntero.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_e749f471b43b5c52416cbe595e41d9dc___ @ 0x180111AEC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_e749f471b43b5c52416cbe595e41d9dc___.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116F00 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UAPViewWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v4; // rbx
  volatile signed __int64 *v5; // rsi
  volatile signed __int64 *v6; // r14
  int v7; // edi
  IUnknown **v8; // rax
  __int64 result; // rax
  WCHAR *v10; // rcx
  volatile signed __int64 *v11[5]; // [rsp+38h] [rbp-28h] BYREF
  PCWSTR StringRawBuffer; // [rsp+90h] [rbp+30h] BYREF
  int v13; // [rsp+98h] [rbp+38h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+40h]

  v13 = 1;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 136), 0LL);
  ViewManagerInteropTelemetry::SetDesiredNavigationLevel<unsigned short const *,unsigned int &,enum ViewManagerInteropTelemetry::VIEW_TYPE>(
    (void **)&StringRawBuffer,
    (int *)(a1 + 132),
    &v13);
  *(_DWORD *)(a1 + 528) = a2;
  if ( a2 || (int)CoreIsWindowServiceSupported(*(_QWORD *)(a1 + 240), &IID_IHostedViewDeferClose) < 0 )
    return ViewWrapperBase::NavigateInternal(a1, a2);
  ViewWrapperBase::NavigateInternal(a1, 3LL);
  v4 = (volatile signed __int64 *)(a1 - 8);
  v14 = a1 - 8;
  if ( a1 != 8 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<IUAPViewWrapper,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(a1 - 8);
  v5 = *(volatile signed __int64 **)(a1 + 240);
  v6 = (volatile signed __int64 *)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 136), 0LL);
  v11[0] = (volatile signed __int64 *)(a1 - 8);
  if ( a1 != 8 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<IUAPViewWrapper,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(a1 - 8);
  v11[1] = (volatile signed __int64 *)(a1 - 8);
  v11[2] = v5;
  v11[3] = v6;
  v7 = *(_DWORD *)(a1 + 160);
  v8 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_e749f471b43b5c52416cbe595e41d9dc___(
                      &StringRawBuffer,
                      v11);
  result = Windows::Internal::ComTaskPool::RunTask(3, 2u, v7, 0, *v8, 0LL);
  v10 = (WCHAR *)StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    result = (*(__int64 (__fastcall **)(WCHAR *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v11[0] )
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<IUAPViewWrapper,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v11[0]);
  if ( v4 )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<IUAPViewWrapper,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v4);
  return result;
}
