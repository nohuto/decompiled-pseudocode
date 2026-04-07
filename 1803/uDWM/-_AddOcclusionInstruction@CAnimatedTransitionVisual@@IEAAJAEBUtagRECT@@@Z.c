/*
 * XREFs of ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180010EAC
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180010F30 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180094654 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x180037D6C (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x180039228 (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_AddOcclusionInstruction(
        CAnimatedTransitionVisual *this,
        const struct tagRECT *a2)
{
  CBaseObject *v2; // rbx
  unsigned int v4; // edi
  const struct tagRECT *v6; // rcx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDrawOcclusionRectangleInstruction *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  if ( *((_BYTE *)this + 1037)
    && *((float *)this + 186) == 1.0
    && !IsRectEmpty(a2)
    && (CDrawOcclusionRectangleInstruction::Create(v6, &v10),
        v2 = v10,
        v7 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v10),
        v4 = v7,
        v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57D,
      (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v7,
      v8);
  }
  else
  {
    v4 = 0;
  }
  if ( v2 )
    CBaseObject::Release(v2);
  return v4;
}
