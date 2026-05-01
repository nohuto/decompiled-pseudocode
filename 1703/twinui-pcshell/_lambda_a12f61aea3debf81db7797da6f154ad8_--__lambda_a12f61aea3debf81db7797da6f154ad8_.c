/*
 * XREFs of _lambda_a12f61aea3debf81db7797da6f154ad8_::__lambda_a12f61aea3debf81db7797da6f154ad8_ @ 0x18006A894
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569____::_1_::dtor$2 @ 0x18019AAB1 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482df_ea_18019AAB1.c)
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_a12f61aea3debf81db7797da6f154ad8_::__lambda_a12f61aea3debf81db7797da6f154ad8_(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = (__int64)(a1 + 4);
  a1[4] = (__int64)&CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 4);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
