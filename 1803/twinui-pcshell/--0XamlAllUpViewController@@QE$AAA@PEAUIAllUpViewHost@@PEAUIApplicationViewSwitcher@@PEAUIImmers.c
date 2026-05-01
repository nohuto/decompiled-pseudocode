/*
 * XREFs of ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@5PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@9ComposableShell@Internal@Windows@@@Z @ 0x18021B52C
 * Callers:
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18020F0C0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021B964 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1802233F8 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall XamlAllUpViewController::XamlAllUpViewController(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, __int64),
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  XamlBaseViewController::XamlBaseViewController(a1 + 1);
  *a1 = (__int64)&XamlAllUpViewController::`vftable'{for `__IXamlAllUpViewControllerPublicNonVirtuals'};
  a1[1] = (__int64)&XamlAllUpViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[2] = (__int64)&XamlAllUpViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[3] = (__int64)&XamlAllUpViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[4] = (__int64)&XamlAllUpViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  a1[5] = (__int64)&XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  a1[6] = (__int64)&XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  a1[18] = (__int64)&XamlAllUpViewController::`vftable'{for `IMonitorFrameDismissAnimationCallback'};
  a1[19] = (__int64)&XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[20] = (__int64)&XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[21] = 0LL;
  v15 = a1 + 22;
  a1[22] = 0LL;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    a1 + 8,
    a3);
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    a1 + 9,
    a4);
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    a1 + 7,
    a2);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 22);
  v16 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&a5);
    if ( (int)RoGetAgileReference(0LL, &GUID_fff59320_db70_4865_8fed_8b502d692f12, v16, &a5) >= 0 )
    {
      v17 = *v15;
      *v15 = a5;
      a5 = v17;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&a5);
  }
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(a1 + 21);
  __abi_winrt_ptr_assign(a1 + 23, a10);
  __abi_winrt_ptr_assign(a1 + 24, a11);
  v18 = a1[10];
  a1[10] = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = (**a6)(a6, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, (__int64)(a1 + 10));
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      39LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)retaddr, 3u, v20);
  return a1;
}
