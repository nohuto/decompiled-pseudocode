/*
 * XREFs of ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180071360
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C144 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _lambda_de3f4501c60332f424e3ead36a7d18c4_::__lambda_de3f4501c60332f424e3ead36a7d18c4_ @ 0x180071640 (_lambda_de3f4501c60332f424e3ead36a7d18c4_--__lambda_de3f4501c60332f424e3ead36a7d18c4_.c)
 *     _CSingleViewShellExperience::Launch_::_1_::dtor$1 @ 0x1800B52D0 (_CSingleViewShellExperience--Launch_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006E568 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::Launch::~Launch(SingleViewExperienceTelemetry::Launch *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
