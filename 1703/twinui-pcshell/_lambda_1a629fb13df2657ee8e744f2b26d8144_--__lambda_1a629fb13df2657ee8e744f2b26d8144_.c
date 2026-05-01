/*
 * XREFs of _lambda_1a629fb13df2657ee8e744f2b26d8144_::__lambda_1a629fb13df2657ee8e744f2b26d8144_ @ 0x180114588
 * Callers:
 *     _ViewWrapperBase::_ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x18019F301 (_ViewWrapperBase--_ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_1a629fb13df2657ee8e744f2b26d8144_::__lambda_1a629fb13df2657ee8e744f2b26d8144_(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = a1 + 32;
  *(_QWORD *)(a1 + 32) = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((_QWORD *)(a1 + 32));
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
