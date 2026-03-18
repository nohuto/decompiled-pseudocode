/*
 * XREFs of ?GetCurrentState@CExpressionForce@@UEBA?BUIntegrationState@@XZ @ 0x1800CCED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionForce::GetCurrentState(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 44);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 36);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
