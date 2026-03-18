/*
 * XREFs of ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1800A25A4 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A3C30 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800A83FC (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801584FC (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180161C34 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801728A0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801734D4 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x180173D30 (-ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseExpression::GetTracingCookie(CBaseExpression *this)
{
  __int64 v1; // rcx
  _DWORD *i; // rcx

  v1 = *((_QWORD *)this + 33);
  if ( (*(_DWORD *)(v1 + 4) & 0x40000000) == 0 )
    return 0LL;
  for ( i = (_DWORD *)(v1 + 12); (*i & 0x7F000000) != 0x2000000; i = (_DWORD *)((char *)i + (*i & 0xFFFFFF) + 4) )
    ;
  return (unsigned int)i[1];
}
