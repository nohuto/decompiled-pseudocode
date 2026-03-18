/*
 * XREFs of ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18016308C
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800174AC (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18006B3F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 */

void __fastcall CDrawingContext::RestoreStateToLastMark(CDrawingContext *this)
{
  int *v1; // rbx
  int v3; // eax
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v1 = (int *)((char *)this + 448);
  *(_QWORD *)&v4 = 0LL;
  while ( (int)CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(v1, &v4) >= 0 )
  {
    if ( (_DWORD)v4 == 11 )
      goto LABEL_7;
    v3 = CDrawingContext::Pop(this);
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x17CCu);
  }
  if ( (_DWORD)v4 != 11 )
    return;
LABEL_7:
  CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(v1, &v4);
}
