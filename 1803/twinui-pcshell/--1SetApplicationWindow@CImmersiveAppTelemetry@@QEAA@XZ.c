/*
 * XREFs of ??1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x18012CC4C
 * Callers:
 *     _CImmersiveApp::SetApplicationWindow_::_1_::dtor$0 @ 0x1801305F6 (_CImmersiveApp--SetApplicationWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CImmersiveAppTelemetry::SetApplicationWindow::~SetApplicationWindow(
        CImmersiveAppTelemetry::SetApplicationWindow *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
