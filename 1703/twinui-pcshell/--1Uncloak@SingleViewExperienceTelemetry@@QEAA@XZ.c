/*
 * XREFs of ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180187638
 * Callers:
 *     _CSingleViewShellExperience::Uncloak_::_1_::dtor$0 @ 0x1801A5659 (_CSingleViewShellExperience--Uncloak_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::Uncloak::~Uncloak(SingleViewExperienceTelemetry::Uncloak *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Uncloak::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
