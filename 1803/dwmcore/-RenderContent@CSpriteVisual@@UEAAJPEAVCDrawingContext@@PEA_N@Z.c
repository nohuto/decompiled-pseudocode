/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009DD60
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800DA9A8 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18013C5B4 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18018AB3C (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A88B4 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CSpriteVisual *this, struct CDrawingContext *a2, bool *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  float v10; // xmm0_4
  float v11; // xmm1_4
  CDropShadow *DropShadow; // rax
  __int64 v13; // r10
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  struct D2D_RECT_F v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16[2]; // [rsp+58h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)this + 27) + 4LL) & 0x100) != 0 )
  {
    *(_QWORD *)&v15.left = 0LL;
    if ( CVisual::GetContentAsSpriteNoRef(this, (struct CSpriteVisualContent **)&v15) )
    {
      v9 = *((_DWORD *)a2 + 776);
      if ( v9 )
        v10 = *(float *)(*((_QWORD *)a2 + 390) + 4LL * (unsigned int)(v9 - 1));
      else
        v10 = FLOAT_1_0;
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - 1.0)) & _xmm);
      if ( v11 >= 0.0000011920929
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, char *, struct D2D_RECT_F *))(**(_QWORD **)&v15.left + 280LL))(
              *(_QWORD *)&v15.left,
              (char *)this + 132,
              &v15) )
      {
        *(_QWORD *)&v15.left = 0LL;
        *(_QWORD *)&v15.right = 0LL;
      }
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CDropShadow::SetOcclusionRect(DropShadow, &v15);
    }
    LOBYTE(v14) = 0;
    *(_OWORD *)v16 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    CSpriteVisual::GetDropShadow(this);
    CVisual::RenderContentWorker(this, a2, v13, (__int64)&v14, (__int64)v16);
  }
  v6 = CVisual::RenderContent(this, a2, (unsigned __int64)a3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x9Du);
  return v7;
}
