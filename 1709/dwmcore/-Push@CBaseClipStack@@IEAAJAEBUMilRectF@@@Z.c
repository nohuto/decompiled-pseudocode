/*
 * XREFs of ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800B876C
 * Callers:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800437C8 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045B10 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8848 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CBaseClipStack::Push(CBaseClipStack *this, const struct MilRectF *a2)
{
  float *v2; // r10
  unsigned int *v3; // r11
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  signed int v10; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF

  CBaseClipStack::Top(this, &v13);
  v4 = *v2;
  v5 = *(float *)&v13;
  v6 = v2[1];
  if ( *v2 > *(float *)&v13 )
  {
    *(float *)&v13 = *v2;
    v5 = v4;
  }
  v7 = *((float *)&v13 + 1);
  if ( v6 > *((float *)&v13 + 1) )
  {
    *((float *)&v13 + 1) = v6;
    v7 = v6;
  }
  v8 = *((float *)&v13 + 2);
  if ( *((float *)&v13 + 2) > v2[2] )
  {
    v8 = v2[2];
    *((float *)&v13 + 2) = v8;
  }
  v9 = *((float *)&v13 + 3);
  if ( *((float *)&v13 + 3) > v2[3] )
  {
    v9 = v2[3];
    *((float *)&v13 + 3) = v9;
  }
  if ( v8 <= v5 || v9 <= v7 )
    v13 = 0uLL;
  v10 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(v3, &v13);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x31u);
  return v11;
}
