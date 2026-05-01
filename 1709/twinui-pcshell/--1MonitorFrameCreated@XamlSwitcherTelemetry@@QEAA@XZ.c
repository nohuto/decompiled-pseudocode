/*
 * XREFs of ??1MonitorFrameCreated@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180155C4C
 * Callers:
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$1 @ 0x1801F13C4 (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$1.c)
 *     __lambda_439a64ed92fed00dbcb4e6e66f12d415_::_lambda_439a64ed92fed00dbcb4e6e66f12d415__::_1_::dtor$5 @ 0x1801F163C (__lambda_439a64ed92fed00dbcb4e6e66f12d415_--_lambda_439a64ed92fed00dbcb4e6e66f12d41_ea_1801F163C.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18015CE44 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall XamlSwitcherTelemetry::MonitorFrameCreated::~MonitorFrameCreated(
        XamlSwitcherTelemetry::MonitorFrameCreated *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::MonitorFrameCreated::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
