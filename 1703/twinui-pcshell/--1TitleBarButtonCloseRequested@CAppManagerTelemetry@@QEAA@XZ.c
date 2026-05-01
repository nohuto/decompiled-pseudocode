/*
 * XREFs of ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x18004FA48
 * Callers:
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$1 @ 0x18019A0B8 (_CApplicationFrameService--OnCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020270 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall CAppManagerTelemetry::TitleBarButtonCloseRequested::~TitleBarButtonCloseRequested(
        CAppManagerTelemetry::TitleBarButtonCloseRequested *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
