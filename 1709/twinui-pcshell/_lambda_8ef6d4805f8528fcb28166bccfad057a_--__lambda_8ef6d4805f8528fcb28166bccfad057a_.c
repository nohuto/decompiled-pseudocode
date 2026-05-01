/*
 * XREFs of _lambda_8ef6d4805f8528fcb28166bccfad057a_::__lambda_8ef6d4805f8528fcb28166bccfad057a_ @ 0x18006C8C4
 * Callers:
 *     _CFrameApplicationPresentation::SetSystemVisual_::_1_::dtor$6 @ 0x1801E9298 (_CFrameApplicationPresentation--SetSystemVisual_--_1_--dtor$6.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180049860 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180049A78 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_8ef6d4805f8528fcb28166bccfad057a_::__lambda_8ef6d4805f8528fcb28166bccfad057a_(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = (__int64)(a1 + 4);
  a1[4] = (__int64)&CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 4);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
