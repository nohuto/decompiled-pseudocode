/*
 * XREFs of _lambda_e2bfed03b2a69a603428f007f3531625_::__lambda_e2bfed03b2a69a603428f007f3531625_ @ 0x1800F9600
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation_::_1_::dtor$1 @ 0x1800B4C0D (_CImmersiveApp--CImmersiveWindowCollection--QueueAyncPositionReconciliation_--_1_--dtor$1.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation_::_1_::dtor$1 @ 0x18012FD14 (_CImmersiveApp--CImmersiveWindowCollection--QueueAyncVisibilityReconciliation_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveApp **__fastcall lambda_e2bfed03b2a69a603428f007f3531625_::__lambda_e2bfed03b2a69a603428f007f3531625_(
        CImmersiveApp **a1)
{
  CImmersiveApp **result; // rax
  CImmersiveApp *v2; // rcx
  __int64 (__fastcall *v3)(CImmersiveApp *); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release )
      return (CImmersiveApp **)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release(v2);
    else
      return (CImmersiveApp **)v3(v2);
  }
  return result;
}
