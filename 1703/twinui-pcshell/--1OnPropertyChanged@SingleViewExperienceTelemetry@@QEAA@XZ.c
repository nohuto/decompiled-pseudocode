/*
 * XREFs of ??1OnPropertyChanged@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18018A5B8
 * Callers:
 *     _CSingleViewShellExperience::OnViewStateChanged_::_1_::dtor$0 @ 0x1801A54C1 (_CSingleViewShellExperience--OnViewStateChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::~OnPropertyChanged(
        SingleViewExperienceTelemetry::OnPropertyChanged *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnPropertyChanged::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
