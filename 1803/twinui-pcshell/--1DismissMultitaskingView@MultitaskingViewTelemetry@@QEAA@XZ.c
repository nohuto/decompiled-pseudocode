/*
 * XREFs of ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180207514
 * Callers:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18020AAC0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_IAllUpViewHost_::DismissView_::_1_::dtor$1 @ 0x18020AC87 (_CMultitaskingViewHostBase_IAllUpViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180216E80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_IAltTabViewHost_::DismissView_::_1_::dtor$1 @ 0x18021706F (_CMultitaskingViewHostBase_IAltTabViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180218590 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     _CMultitaskingViewHostBase_ISnapAssistViewHost_::DismissView_::_1_::dtor$1 @ 0x18021877F (_CMultitaskingViewHostBase_ISnapAssistViewHost_--DismissView_--_1_--dtor$1.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180278250 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014FD34 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 */

void __fastcall MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView(
        MultitaskingViewTelemetry::DismissMultitaskingView *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
