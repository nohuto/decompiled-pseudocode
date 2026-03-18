/*
 * XREFs of ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180179974
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800352C4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180099020 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x180179A80 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackContent(CWindowNode *this, struct CDrawingContext *a2)
{
  bool v4; // zf
  struct CShape *v5; // r8
  signed int WindowClipShape; // eax
  unsigned int v7; // ebx
  signed int v8; // eax
  struct CShape *v10; // [rsp+30h] [rbp-19h] BYREF
  char v11; // [rsp+38h] [rbp-11h]
  _QWORD v12[3]; // [rsp+40h] [rbp-9h] BYREF
  int v13; // [rsp+58h] [rbp+Fh]
  int v14; // [rsp+5Ch] [rbp+13h]
  int v15; // [rsp+60h] [rbp+17h]
  _BYTE v16[16]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+78h] [rbp+2Fh]

  v10 = 0LL;
  v15 = 0;
  v17 = 0LL;
  v4 = *((_QWORD *)this + 105) == 0LL;
  v12[0] = &CRectanglesShape::`vftable';
  v12[1] = v16;
  v12[2] = v16;
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
    WindowClipShape = CWindowNode::GetWindowClipShape(this, &v10);
    v7 = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WindowClipShape, 0x1022u);
      goto LABEL_8;
    }
    v5 = v10;
  }
  v8 = CWindowNode::RenderBlackShape(this, a2, v5);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1025u);
LABEL_8:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v12);
  CShapePtr::Release(&v10);
  return v7;
}
