/*
 * XREFs of ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800F621C
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___ @ 0x180012350 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___.c)
 *     _CFrameApplicationPresentation::SetSystemVisual_::_1_::dtor$0 @ 0x1800B1650 (_CFrameApplicationPresentation--SetSystemVisual_--_1_--dtor$0.c)
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::__lambda_0d74f069fa796de4b01adcedcd59308d_ @ 0x1800F9814 (_lambda_0d74f069fa796de4b01adcedcd59308d_--__lambda_0d74f069fa796de4b01adcedcd59308d_.c)
 *     _lambda_e039250a5e9a10031e161b6cc2d8aa5b_::__lambda_e039250a5e9a10031e161b6cc2d8aa5b_ @ 0x1800F987C (_lambda_e039250a5e9a10031e161b6cc2d8aa5b_--__lambda_e039250a5e9a10031e161b6cc2d8aa5b_.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010768 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
