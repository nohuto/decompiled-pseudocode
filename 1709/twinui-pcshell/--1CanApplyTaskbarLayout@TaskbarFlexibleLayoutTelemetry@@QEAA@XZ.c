/*
 * XREFs of ??1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x1800882A4
 * Callers:
 *     _TaskbarLayoutPolicyManager::CanApplyTaskbarLayout_::_1_::dtor$0 @ 0x1801EA2F8 (_TaskbarLayoutPolicyManager--CanApplyTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18008B3A0 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::~CanApplyTaskbarLayout(
        TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
