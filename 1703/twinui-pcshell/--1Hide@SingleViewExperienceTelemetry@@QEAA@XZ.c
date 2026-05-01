/*
 * XREFs of ??1Hide@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180187DF8
 * Callers:
 *     _CSingleViewShellExperience::Hide_::_1_::dtor$1 @ 0x1801A564D (_CSingleViewShellExperience--Hide_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::Hide::~Hide(SingleViewExperienceTelemetry::Hide *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Hide::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
