/*
 * XREFs of ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180188598
 * Callers:
 *     _CSingleViewShellExperience::RemoveKeepAlive_::_1_::dtor$0 @ 0x1801A561D (_CSingleViewShellExperience--RemoveKeepAlive_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::RemoveKeepAlive::~RemoveKeepAlive(
        SingleViewExperienceTelemetry::RemoveKeepAlive *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
