/*
 * XREFs of ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x18002E02C
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E0AC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B588 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x180030020 (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x180030038 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_AddOcclusionInstruction(
        CAnimatedTransitionVisual *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  const struct tagRECT *v5; // rcx
  CRenderDataVisual *v6; // rcx
  CBaseObject *v7; // rdi
  int v8; // eax
  struct CDrawOcclusionRectangleInstruction *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( *((_BYTE *)this + 1037) && *((float *)this + 186) == 1.0 && !IsRectEmpty(a2) )
  {
    CDrawOcclusionRectangleInstruction::Create(v5, &v9);
    v6 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v7 = v9;
    v8 = CRenderDataVisual::AddInstruction(v6, v9);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x595u);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return v2;
}
