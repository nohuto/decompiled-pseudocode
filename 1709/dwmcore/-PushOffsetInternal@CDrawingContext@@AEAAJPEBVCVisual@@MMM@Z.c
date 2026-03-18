/*
 * XREFs of ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x18013E134
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003CCF8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180045A8C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18011D6B4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x180191720 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
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
  signed int v9; // eax
  int v10; // ebx
  signed int v11; // eax
  float *TopByReference; // rax
  __int64 v13; // rdx
  signed int v14; // eax
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  const struct CVisual *v18; // [rsp+88h] [rbp+10h] BYREF

  v18 = a2;
  *((_QWORD *)&v17 + 1) = 0LL;
  v5 = (int *)((char *)this + 448);
  LODWORD(v17) = 4;
  v7 = 0;
  v8 = 0;
  v9 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 112, &v17);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1802u);
  }
  else
  {
    v7 = 1;
    v11 = CMatrixStack::PushOffset((CDrawingContext *)((char *)this + 480), a3, a4, a5);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x1808u);
    }
    else
    {
      v8 = 1;
      TopByReference = (float *)CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      LOBYTE(v18) = (unsigned __int8)CMILMatrix::Is2DAffine<0>(TopByReference, v13) == 0;
      v14 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 64, &v18);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x180Eu);
      else
        *((_BYTE *)this + 6824) = 1;
    }
  }
  if ( v10 < 0 )
  {
    if ( v8 )
    {
      v15 = *((_DWORD *)this + 120);
      if ( v15 )
        *((_DWORD *)this + 120) = v15 - 1;
    }
    if ( v7 )
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(v5, 0LL);
  }
  return (unsigned int)v10;
}
