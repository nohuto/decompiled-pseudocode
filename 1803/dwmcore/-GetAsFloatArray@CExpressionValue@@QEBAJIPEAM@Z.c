/*
 * XREFs of ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18002983C
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C8AC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180052B90 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x1801820E8 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801AE054 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180029880 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CExpressionValue::GetAsFloatArray(CExpressionValue *this, __int64 a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int ExpressionTypeChannelCount; // eax
  const void *v5; // rdx
  void *v6; // r9

  v3 = 0;
  *a3 = 0.0;
  if ( *((_BYTE *)this + 76) )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)this + 18), this, a3, a3);
    if ( ExpressionTypeChannelCount > 0x10 )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x1DCu);
    }
    else
    {
      memcpy_0(v6, v5, 4LL * ExpressionTypeChannelCount);
    }
  }
  else
  {
    v3 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147023728, 0x1D3u);
  }
  return v3;
}
