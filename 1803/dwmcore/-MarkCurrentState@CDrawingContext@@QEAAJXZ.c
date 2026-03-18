/*
 * XREFs of ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x180161C18
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 */

__int64 __fastcall CDrawingContext::MarkCurrentState(CDrawingContext *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  *((_QWORD *)&v4 + 1) = -1LL;
  LODWORD(v4) = 11;
  v1 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)this + 112, &v4);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x17B8u);
  return v2;
}
