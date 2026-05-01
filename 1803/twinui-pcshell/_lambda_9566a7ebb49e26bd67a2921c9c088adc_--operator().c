/*
 * XREFs of _lambda_9566a7ebb49e26bd67a2921c9c088adc_::operator() @ 0x1801894E8
 * Callers:
 *     wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator() @ 0x180189558 (wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9566a7ebb49e26bd67a2921c9c088adc_::operator()(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v1 = (_QWORD *)*a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v1)(*v1, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v3) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
}
