/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke @ 0x18011B610
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800086FC (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke(
        __int64 a1)
{
  CRotationManagerSync *v2; // rcx
  unsigned int v3; // edx

  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 128LL) = 0;
  v2 = *(CRotationManagerSync **)(a1 + 16);
  v3 = *((_DWORD *)v2 + 33);
  if ( v3 != -1 )
  {
    CRotationManagerSync::_SetActiveProcessForRotation(v2, v3);
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 132LL) = -1;
  }
  return 0LL;
}
