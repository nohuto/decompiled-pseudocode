/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C920
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18012B018 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180160ED8 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NP.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180171F88 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CDropShadow **this, struct CDrawingContext *a2, bool *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  float v10; // xmm1_4
  struct CContent *v11; // rdx
  unsigned int v12; // [rsp+20h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_RECT_F v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15[2]; // [rsp+48h] [rbp-18h] BYREF

  if ( this[62] )
  {
    *(_QWORD *)&v14.left = 0LL;
    if ( CVisual::GetContentAsSpriteNoRef((CVisual *)this, (struct CSpriteVisualContent **)&v14) )
    {
      v9 = *((_DWORD *)a2 + 752);
      if ( !v9 )
      {
        v7 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x71u);
        return v7;
      }
      v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(*((_QWORD *)a2 + 378) + 4LL * (unsigned int)(v9 - 1))
                                                      - 1.0)) & _xmm);
      if ( v10 >= 0.0000011920929 )
      {
        *(_QWORD *)&v14.left = 0LL;
        *(_QWORD *)&v14.right = 0LL;
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, struct D2D_RECT_F *))(**(_QWORD **)&v14.left + 248LL))(
               *(_QWORD *)&v14.left,
               (char *)this + 128,
               0LL,
               &v14);
        v7 = v6;
        if ( v6 < 0 )
        {
          v12 = 118;
LABEL_14:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v12);
          return v7;
        }
      }
      CDropShadow::SetOcclusionRect(this[62], &v14);
    }
    v11 = this[62];
    LOBYTE(v13) = 0;
    *(_OWORD *)v15 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    CVisual::RenderContentWorker((CVisual *)this, v11, a2, (__int64)&v13, (__int64)v15);
  }
  v6 = CVisual::RenderContent((CVisual *)this, (unsigned __int64)a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 141;
    goto LABEL_14;
  }
  return v7;
}
