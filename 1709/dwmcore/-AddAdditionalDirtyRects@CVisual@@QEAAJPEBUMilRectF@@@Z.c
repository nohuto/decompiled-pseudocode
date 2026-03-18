/*
 * XREFs of ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800513D4
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180030CC0 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     _lambda_bb28168dec429e930d29fad703717257_::operator() @ 0x1800C5714 (_lambda_bb28168dec429e930d29fad703717257_--operator().c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180129C38 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ @ 0x18004E820 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098274 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CVisual::AddAdditionalDirtyRects(CVisual *this, const struct MilRectF *a2)
{
  unsigned int v4; // edi
  struct CMergedRect *AdditionalDirtyRects; // rbx
  char v6; // al
  struct CMergedRect *v8; // rax
  struct CMergedRect *v9; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a2) )
  {
    AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(this);
    if ( !AdditionalDirtyRects )
    {
      v8 = (struct CMergedRect *)HeapAlloc(WPF::g_processHeap, 0, 0x4CuLL);
      AdditionalDirtyRects = v8;
      if ( v8 )
      {
        memset_0(v8, 0, 0x4CuLL);
        `vector constructor iterator'(
          AdditionalDirtyRects,
          16LL,
          4LL,
          COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        memset_0(AdditionalDirtyRects, 0, 0x4CuLL);
        *((_DWORD *)AdditionalDirtyRects + 17) = 1;
      }
      else
      {
        AdditionalDirtyRects = 0LL;
      }
      if ( !AdditionalDirtyRects )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA7Cu);
        return v4;
      }
      v9 = AdditionalDirtyRects;
      if ( AdditionalDirtyRects == (struct CMergedRect *)`CVisual::SetAdditionalDirtyRects'::`2'::sc_defaultValue )
        *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x20000u;
      else
        CSparseStorage::SetData((CVisual *)((char *)this + 208), 0xFu, 8u, &v9);
    }
    v6 = *((_BYTE *)this + 93);
    if ( (v6 & 1) != 0 )
    {
      *((_BYTE *)this + 93) = v6 & 0xFE;
      *((_DWORD *)AdditionalDirtyRects + 16) = 0;
      *(_QWORD *)((char *)AdditionalDirtyRects + 68) = 1LL;
    }
    CMergedRectBase<4>::Add(AdditionalDirtyRects, a2);
    CVisual::PropagateFlags((__int64)this, 8u, 0);
  }
  return v4;
}
