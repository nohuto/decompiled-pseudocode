/*
 * XREFs of ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801E4660
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     _ViewWrapperBase::_ReconcileSessionIdleTaskCompletion_::_1_::dtor$0 @ 0x1800B45B2 (_ViewWrapperBase--_ReconcileSessionIdleTaskCompletion_--_1_--dtor$0.c)
 *     _lambda_4e85baddd9af2aed2f97afae8fd139c5_::__lambda_4e85baddd9af2aed2f97afae8fd139c5_ @ 0x1801E4590 (_lambda_4e85baddd9af2aed2f97afae8fd139c5_--__lambda_4e85baddd9af2aed2f97afae8fd139c5_.c)
 *     ??_G?$CTaskWrapper@V_lambda_4e85baddd9af2aed2f97afae8fd139c5_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801E4A20 (--_G-$CTaskWrapper@V_lambda_4e85baddd9af2aed2f97afae8fd139c5_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
