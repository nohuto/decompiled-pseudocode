/*
 * XREFs of ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18009306C
 * Callers:
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180093028 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800A871C (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180159000 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18018766C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExpressionTypeChannelCount(int a1)
{
  if ( a1 >= 17 && (a1 == 52 || a1 <= 18 || a1 == 35 || a1 > 68 && (a1 == 104 || a1 == 265 || a1 <= 71)) )
    return (unsigned int)(a1 >> 4);
  else
    return 0LL;
}
