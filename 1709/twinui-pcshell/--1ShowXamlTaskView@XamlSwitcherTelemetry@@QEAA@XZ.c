/*
 * XREFs of ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18015663C
 * Callers:
 *     _XamlAllUpViewHost::Show_::_1_::dtor$1 @ 0x1801F1288 (_XamlAllUpViewHost--Show_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015CE44 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView(
        XamlSwitcherTelemetry::ShowXamlTaskView *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
