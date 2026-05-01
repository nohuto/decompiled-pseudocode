/*
 * XREFs of ??1GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x1800864D4
 * Callers:
 *     _TaskbarLayoutPolicyManager::GetTaskbarLayout_::_1_::dtor$0 @ 0x18019B8EE (_TaskbarLayoutPolicyManager--GetTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180088F80 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::~GetTaskbarLayout(
        TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
