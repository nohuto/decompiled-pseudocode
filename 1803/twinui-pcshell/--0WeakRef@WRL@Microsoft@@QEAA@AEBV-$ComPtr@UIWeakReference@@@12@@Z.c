/*
 * XREFs of ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800F5C4C
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Copy @ 0x18009E610 (wistd--_Func_impl_wistd--_Callable_obj__lambda_6c114e0491c0ae3621bab08cb7c5d6d2__0__ea_18009E610.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800A08D0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     _lambda_0b793df119bfe5dcf9aeba02981ffa9e_::_lambda_0b793df119bfe5dcf9aeba02981ffa9e_ @ 0x1800A10A8 (_lambda_0b793df119bfe5dcf9aeba02981ffa9e_--_lambda_0b793df119bfe5dcf9aeba02981ffa9e_.c)
 *     _lambda_114373a7e1561dd71911e06c6b6df4ef_::_lambda_114373a7e1561dd71911e06c6b6df4ef_ @ 0x1800A10E0 (_lambda_114373a7e1561dd71911e06c6b6df4ef_--_lambda_114373a7e1561dd71911e06c6b6df4ef_.c)
 *     _lambda_5e1669f70f5e626cb13f0ae9b344f394_::_lambda_5e1669f70f5e626cb13f0ae9b344f394_ @ 0x1800A1134 (_lambda_5e1669f70f5e626cb13f0ae9b344f394_--_lambda_5e1669f70f5e626cb13f0ae9b344f394_.c)
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::_lambda_c3020acaf10c7144233ee4f2e713fc58_ @ 0x1800A1168 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--_lambda_c3020acaf10c7144233ee4f2e713fc58_.c)
 *     _lambda_f0bf810a5d9c986258710a4a09c5f600_::_lambda_f0bf810a5d9c986258710a4a09c5f600_ @ 0x1800A11B4 (_lambda_f0bf810a5d9c986258710a4a09c5f600_--_lambda_f0bf810a5d9c986258710a4a09c5f600_.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x180156390 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z @ 0x180287C5C (--$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::WeakRef::WeakRef(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
