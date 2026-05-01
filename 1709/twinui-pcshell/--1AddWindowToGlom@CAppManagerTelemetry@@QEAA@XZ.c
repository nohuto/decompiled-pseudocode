/*
 * XREFs of ??1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ @ 0x180020244
 * Callers:
 *     _CApplicationManager::_AddViewToGlom_::_1_::dtor$0 @ 0x1801E7038 (_CApplicationManager--_AddViewToGlom_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppManagerTelemetry::AddWindowToGlom::~AddWindowToGlom(CAppManagerTelemetry::AddWindowToGlom *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
