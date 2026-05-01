/*
 * XREFs of ??1Show@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800F6F08
 * Callers:
 *     _CSingleViewShellExperience::Show_::_1_::dtor$0 @ 0x1800B52B8 (_CSingleViewShellExperience--Show_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006E568 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::~Show(SingleViewExperienceTelemetry::Show *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Show::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
