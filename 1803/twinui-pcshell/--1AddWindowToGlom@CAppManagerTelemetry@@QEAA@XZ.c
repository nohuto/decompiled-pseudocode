/*
 * XREFs of ??1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ @ 0x1800F63B0
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$16 @ 0x1800B3830 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$16.c)
 *     _CApplicationManager::_AddViewToGlom_::_1_::dtor$0 @ 0x1800F0F0F (_CApplicationManager--_AddViewToGlom_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010008 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 */

void __fastcall CAppManagerTelemetry::AddWindowToGlom::~AddWindowToGlom(CAppManagerTelemetry::AddWindowToGlom *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
