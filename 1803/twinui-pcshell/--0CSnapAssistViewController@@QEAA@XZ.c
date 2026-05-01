/*
 * XREFs of ??0CSnapAssistViewController@@QEAA@XZ @ 0x18028477C
 * Callers:
 *     ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x180284658 (--$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAU.c)
 * Callees:
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180071FB4 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSour.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewControllerBase@@QEAA@XZ @ 0x18027E7A8 (--0CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CSnapAssistViewController *__fastcall CSnapAssistViewController::CSnapAssistViewController(
        CSnapAssistViewController *this)
{
  CSnapAssistViewController *result; // rax

  CMultitaskingViewControllerBase::CMultitaskingViewControllerBase(this);
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>>((CSnapAssistViewController *)((char *)this + 120));
  *((_DWORD *)this + 33) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `IMultitaskingViewController'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `ISwitchItemController'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
  *((_QWORD *)this + 15) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CSnapAssistViewController::`vftable'{for `IMultitaskingViewController'};
  *((_QWORD *)this + 1) = &CSnapAssistViewController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
  *((_QWORD *)this + 2) = &CSnapAssistViewController::`vftable'{for `ISwitchItemController'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase,ISnapAssistViewController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
  *((_QWORD *)this + 15) = &CSnapAssistViewController::`vftable';
  result = this;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_BYTE *)this + 168) = 0;
  return result;
}
