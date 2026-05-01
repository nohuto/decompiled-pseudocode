/*
 * XREFs of ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180145538
 * Callers:
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@@Z @ 0x180142780 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x180143C88 (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImme.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x180144288 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ??$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA?AV?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@XZ @ 0x180145DB8 (--$MakeAndInitializeOrThrow@VCreationThreadDispatcher@@$$V@wil@@YA-AV-$ComPtr@VCreationThreadDis.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall XamlBaseViewController::XamlBaseViewController(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+48h] [rbp+10h] BYREF

  Platform::Object::Object(a1 + 3);
  *a1 = &XamlBaseViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[1] = &XamlBaseViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[2] = &XamlBaseViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[3] = &XamlBaseViewController::`vftable'{for `Platform::Object'};
  a1[4] = &XamlBaseViewController::`vftable'{for `__abi_IUnknown'};
  a1[5] = &XamlBaseViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[13] = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  v2 = (__int64 *)wil::MakeAndInitializeOrThrow<CreationThreadDispatcher,>(&v7);
  v3 = *v2;
  *v2 = 0LL;
  v4 = (volatile signed __int32 *)a1[10];
  a1[10] = v3;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  return a1;
}
