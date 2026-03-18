/*
 * XREFs of ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x1801879E0
 * Callers:
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180187AE4 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConditionalExpression::GetDebugTargetInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 280);
  if ( (*(_DWORD *)(v2 + 4) & 0x2000000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x7000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v4 = *(_DWORD *)(i + 12);
    *(_QWORD *)a2 = *(_QWORD *)(i + 4);
    *(_DWORD *)(a2 + 8) = v4;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
