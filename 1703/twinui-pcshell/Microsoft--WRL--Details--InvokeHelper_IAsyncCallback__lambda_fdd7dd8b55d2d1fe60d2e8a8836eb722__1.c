/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722__1__1_::Invoke @ 0x18003A320
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180039FA0 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722__1__1_::Invoke(
        __int64 a1)
{
  CRotationManagerSync *v2; // rcx
  unsigned int v3; // edx

  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 112LL) = 0;
  v2 = *(CRotationManagerSync **)(a1 + 16);
  v3 = *((_DWORD *)v2 + 29);
  if ( v3 != -1 )
  {
    CRotationManagerSync::_SetActiveProcessForRotation(v2, v3);
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 116LL) = -1;
  }
  return 0LL;
}
