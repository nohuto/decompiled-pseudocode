/*
 * XREFs of _lambda_aa48c572b33de96146be9e3e412c5ad4_::__lambda_aa48c572b33de96146be9e3e412c5ad4_ @ 0x18006899C
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_aa48c572b33de96146be9e3e412c5ad4____::_1_::dtor$0 @ 0x1801E943C (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_aa48c572b33de96146be9e3e412c5ad4____--_1.c)
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_aa48c572b33de96146be9e3e412c5ad4_::__lambda_aa48c572b33de96146be9e3e412c5ad4_(__int64 *a1)
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
