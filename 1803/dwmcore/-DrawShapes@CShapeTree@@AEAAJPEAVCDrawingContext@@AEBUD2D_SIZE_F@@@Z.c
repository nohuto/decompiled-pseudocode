/*
 * XREFs of ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C129C
 * Callers:
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C11C0 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?MarkCurrentState@CDrawingContext@@QEAAJXZ @ 0x180161C18 (-MarkCurrentState@CDrawingContext@@QEAAJXZ.c)
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180161E8C (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18016308C (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x1801C0F88 (--1CShapeDrawingContext@@QEAA@XZ.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x18020FDB0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1802100FC (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CShapeTree::DrawShapes(CShapeTree *this, struct CDrawingContext *a2, const struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  char v4; // r14
  int v5; // esi
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[64]; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+80h] [rbp-80h]
  _DWORD v18[4]; // [rsp+90h] [rbp-70h] BYREF
  struct D2D_RECT_F v19; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v20[544]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = (int)a3;
  v19 = (struct D2D_RECT_F)*((_OWORD *)this + 4);
  if ( *((_BYTE *)this + 81) )
  {
    width = a3->width;
    height = a3->height;
    v18[0] = 0;
    v18[1] = 0;
    *(FLOAT *)&v18[2] = width;
    *(FLOAT *)&v18[3] = height;
    LOBYTE(v15) = 0;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)v18, &v19) )
    {
      v10 = CDrawingContext::MarkCurrentState(a2);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x135u);
        return v3;
      }
      v4 = 1;
      v11 = CDrawingContext::PushClipRectForCurrentNode((const struct CVisualTree **)a2, (struct MilRectF *)v18, &v15);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x138u);
LABEL_13:
        CDrawingContext::RestoreStateToLastMark(a2);
        return v3;
      }
      if ( (_BYTE)v15 )
        goto LABEL_13;
    }
    v17 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v16);
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)a2 + 126, 1, (__int64)&v19);
    CShapeDrawingContext::CShapeDrawingContext((unsigned int)v20, (_DWORD)a2, v5, (unsigned int)&v19, (__int64)v16);
    v12 = CShapeTreeIterator::Walk<CShapeDrawingContext>(v20, this, v20);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x144u);
    }
    else
    {
      v13 = CShapeDrawingContext::Render((CShapeDrawingContext *)v20);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x145u);
    }
    CShapeDrawingContext::~CShapeDrawingContext((CShapeDrawingContext *)v20);
    if ( v4 )
      goto LABEL_13;
  }
  return v3;
}
