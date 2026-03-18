/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180022550
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800C2790 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18011A5C8 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180161140 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180177CF4 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_N.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CSpriteVisual *this, struct CDrawingContext *a2, bool *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // eax
  CDropShadow *DropShadow; // rax
  __int64 v14; // r10
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  struct D2D_RECT_F v16; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17[2]; // [rsp+58h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x100) != 0 )
  {
    *(_QWORD *)&v16.left = 0LL;
    if ( CVisual::GetContentAsSpriteNoRef(this, (struct CSpriteVisualContent **)&v16) )
    {
      v9 = *((_DWORD *)a2 + 776);
      if ( v9 )
        v10 = *(float *)(*((_QWORD *)a2 + 390) + 4LL * (unsigned int)(v9 - 1));
      else
        v10 = FLOAT_1_0;
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - 1.0)) & _xmm);
      if ( v11 >= 0.0000011920929 )
      {
        *(_QWORD *)&v16.left = 0LL;
        *(_QWORD *)&v16.right = 0LL;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, struct D2D_RECT_F *))(**(_QWORD **)&v16.left + 264LL))(
                *(_QWORD *)&v16.left,
                (char *)this + 132,
                0LL,
                &v16);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x89u);
          return v7;
        }
      }
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CDropShadow::SetOcclusionRect(DropShadow, &v16);
    }
    LOBYTE(v15) = 0;
    *(_OWORD *)v17 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    CSpriteVisual::GetDropShadow(this);
    CVisual::RenderContentWorker(this, v14, (__int64)&v15, (__int64)v17);
  }
  v6 = CVisual::RenderContent(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xA1u);
  return v7;
}
