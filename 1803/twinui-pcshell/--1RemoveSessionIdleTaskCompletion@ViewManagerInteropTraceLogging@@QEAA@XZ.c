/*
 * XREFs of ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801E4688
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     _ViewWrapperBase::_ReconcileSessionIdleTaskCompletion_::_1_::dtor$3 @ 0x1800B45E2 (_ViewWrapperBase--_ReconcileSessionIdleTaskCompletion_--_1_--dtor$3.c)
 *     _lambda_6ec78f2e6dfd28b322b562580e584ea6_::__lambda_6ec78f2e6dfd28b322b562580e584ea6_ @ 0x1801E45B0 (_lambda_6ec78f2e6dfd28b322b562580e584ea6_--__lambda_6ec78f2e6dfd28b322b562580e584ea6_.c)
 *     ??_G?$CTaskWrapper@V_lambda_6ec78f2e6dfd28b322b562580e584ea6_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801E4A70 (--_G-$CTaskWrapper@V_lambda_6ec78f2e6dfd28b322b562580e584ea6_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
