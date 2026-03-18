/*
 * XREFs of CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback @ 0x1406FB2F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpPrepareForSubtreeInvalidation @ 0x140614070 (CmpPrepareForSubtreeInvalidation.c)
 */

__int64 __fastcall CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = CmpPrepareForSubtreeInvalidation(a1, *(_QWORD *)(a2 + 8));
  if ( v3 == -1073741267 )
  {
    *(_DWORD *)(a2 + 4) = -1073741267;
    return 0LL;
  }
  if ( v3 >= 0 )
    return 0LL;
  *(_DWORD *)(a2 + 4) = v3;
  return 1LL;
}
