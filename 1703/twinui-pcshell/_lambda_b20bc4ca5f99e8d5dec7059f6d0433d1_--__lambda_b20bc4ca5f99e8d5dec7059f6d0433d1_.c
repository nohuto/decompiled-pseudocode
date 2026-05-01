/*
 * XREFs of _lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_ @ 0x1800668C8
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1____::_1_::dtor$0 @ 0x18019AA39 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1____--_1.c)
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = (__int64)(a1 + 2);
  a1[2] = (__int64)&CFramePresentationTelemetry::PresentWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 2);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
