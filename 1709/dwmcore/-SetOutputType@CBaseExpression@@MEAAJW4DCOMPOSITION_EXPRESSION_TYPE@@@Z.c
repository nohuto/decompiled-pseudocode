/*
 * XREFs of ?SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A1DB0
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::SetOutputType(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 136) = a2;
  return 0LL;
}
