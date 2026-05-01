/*
 * XREFs of _lambda_e1365bb4f253a4ea24e8f51062dc9f67_::__lambda_e1365bb4f253a4ea24e8f51062dc9f67_ @ 0x180068DD8
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1365bb4f253a4ea24e8f51062dc9f67____::_1_::dtor$0 @ 0x1801E9460 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_e1365bb4f253a4ea24e8f51062dc9f67____--_1.c)
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_e1365bb4f253a4ea24e8f51062dc9f67_::__lambda_e1365bb4f253a4ea24e8f51062dc9f67_(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = (__int64)(a1 + 2);
  a1[2] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 2);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
