/*
 * XREFs of ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180162368
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800A56A0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801401D4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x1801C8644 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 */

__int64 __fastcall CDrawingContext::PushOffsetInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3,
        float a4,
        float a5)
{
  int *v5; // r14
  char v7; // si
  char v8; // bp
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  float *TopByReference; // rax
  int v13; // eax
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  const struct CVisual *v17; // [rsp+88h] [rbp+10h] BYREF

  v17 = a2;
  *((_QWORD *)&v16 + 1) = 0LL;
  v5 = (int *)((char *)this + 448);
  LODWORD(v16) = 4;
  v7 = 0;
  v8 = 0;
  v9 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)this + 112, &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1882u);
  }
  else
  {
    v7 = 1;
    v11 = CMatrixStack::PushOffset((CDrawingContext *)((char *)this + 480), a3, a4, a5);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1888u);
    }
    else
    {
      v8 = 1;
      TopByReference = (float *)CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      LOBYTE(v17) = (unsigned __int8)CMILMatrix::Is2DAffine<0>(TopByReference) == 0;
      v13 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 64, &v17);
      v10 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x188Eu);
      else
        *((_BYTE *)this + 6824) = 1;
    }
  }
  if ( v10 < 0 )
  {
    if ( v8 )
    {
      v14 = *((_DWORD *)this + 120);
      if ( v14 )
        *((_DWORD *)this + 120) = v14 - 1;
    }
    if ( v7 )
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(v5, 0LL);
  }
  return (unsigned int)v10;
}
