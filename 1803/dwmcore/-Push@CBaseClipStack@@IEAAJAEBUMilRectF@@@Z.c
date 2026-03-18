/*
 * XREFs of ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800173D0
 * Callers:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001739C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE4B0 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CBaseClipStack::Push(CBaseClipStack *this, const struct MilRectF *a2)
{
  float *v2; // r10
  __int64 v3; // r11
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF

  CBaseClipStack::Top(this, &v15);
  v4 = *v2;
  v5 = *(float *)&v15;
  v6 = v2[1];
  v7 = v2[2];
  v8 = v2[3];
  if ( *v2 > *(float *)&v15 )
  {
    *(float *)&v15 = *v2;
    v5 = v4;
  }
  v9 = *((float *)&v15 + 1);
  if ( v6 > *((float *)&v15 + 1) )
  {
    *((float *)&v15 + 1) = v6;
    v9 = v6;
  }
  v10 = *((float *)&v15 + 2);
  if ( *((float *)&v15 + 2) > v7 )
  {
    *((float *)&v15 + 2) = v7;
    v10 = v7;
  }
  v11 = *((float *)&v15 + 3);
  if ( *((float *)&v15 + 3) > v8 )
  {
    *((float *)&v15 + 3) = v8;
    v11 = v8;
  }
  if ( v10 <= v5 || v11 <= v9 )
    v15 = 0uLL;
  v12 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(v3, &v15);
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x31u);
  return v13;
}
