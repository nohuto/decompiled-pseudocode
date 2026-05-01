/*
 * XREFs of ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x1802224D8
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180218AC0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800F6188 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021B964 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1802233F8 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall XamlSnapAssistViewController::XamlSnapAssistViewController(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 (__fastcall ***a5)(_QWORD, GUID *, __int64),
        __int64 a6)
{
  __int64 v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  XamlBaseViewController::XamlBaseViewController(a1 + 1);
  *a1 = (__int64)&XamlSnapAssistViewController::`vftable';
  a1[1] = (__int64)&XamlSnapAssistViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[2] = (__int64)&XamlSnapAssistViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[3] = (__int64)&XamlSnapAssistViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[4] = (__int64)&XamlSnapAssistViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  a1[5] = (__int64)&XamlSnapAssistViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  a1[6] = (__int64)&XamlSnapAssistViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  a1[18] = (__int64)&XamlSnapAssistViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[19] = (__int64)&XamlSnapAssistViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[20] = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_OWORD *)(a1 + 21) = *a4;
  if ( !a1[20] )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      19LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( Geometry::CRect::IsEmpty((Geometry::CRect *)(a1 + 21)) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      20LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    a1 + 9,
    a6);
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    a1 + 7,
    a2);
  v10 = a1[10];
  a1[10] = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = (**a5)(a5, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, (__int64)(a1 + 10));
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      23LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)v11);
  return a1;
}
