/*
 * XREFs of ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801A9EE4
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180017664 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180064114 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801A9FF4 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackContent(CWindowNode *this, struct CDrawingContext *a2)
{
  bool v4; // zf
  struct CShape *v5; // r8
  int WindowClipShape; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct CShape *v10; // [rsp+30h] [rbp-29h] BYREF
  char v11; // [rsp+38h] [rbp-21h]
  _QWORD v12[4]; // [rsp+40h] [rbp-19h] BYREF
  int v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+64h] [rbp+Bh]
  int v15; // [rsp+68h] [rbp+Fh]
  _BYTE v16[16]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v17; // [rsp+80h] [rbp+27h]

  v10 = 0LL;
  v12[1] = 0LL;
  v15 = 0;
  v17 = 0LL;
  v4 = *((_QWORD *)this + 97) == 0LL;
  v12[0] = &CRectanglesShape::`vftable';
  v12[2] = v16;
  v12[3] = v16;
  v13 = 1;
  v14 = 1;
  v11 = 0;
  if ( v4 )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v12, (CWindowNode *)((char *)this + 164));
    CShapePtr::Release(&v10);
    v5 = (struct CShape *)v12;
    v11 = 0;
    v10 = (struct CShape *)v12;
  }
  else
  {
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v10);
    v7 = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowClipShape, 0xD08u);
      goto LABEL_8;
    }
    v5 = v10;
  }
  v8 = CWindowNode::RenderBlackShape(this, a2, v5);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xD0Bu);
LABEL_8:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v12);
  CShapePtr::Release(&v10);
  return v7;
}
