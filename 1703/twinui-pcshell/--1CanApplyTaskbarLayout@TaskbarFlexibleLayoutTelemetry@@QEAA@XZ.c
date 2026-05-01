/*
 * XREFs of ??1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180085F94
 * Callers:
 *     _TaskbarLayoutPolicyManager::CanApplyTaskbarLayout_::_1_::dtor$0 @ 0x18019B8BE (_TaskbarLayoutPolicyManager--CanApplyTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180088F80 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::~CanApplyTaskbarLayout(
        TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
