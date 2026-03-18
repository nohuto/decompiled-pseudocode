/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x180161850
 * Callers:
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180162A00 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800BD684 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ @ 0x18013C958 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ.c)
 */

bool __fastcall CVisual::GetAdditionalDirtyRects(
        CVisual *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        const struct MilRectF **a4)
{
  bool v6; // bl
  struct CMergedRect *AdditionalDirtyRects; // rax
  __int64 v8; // r9
  unsigned int *v9; // r10
  __int64 v10; // r11
  __int64 v11; // rcx
  int v12; // eax

  v6 = 0;
  AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(this);
  v11 = (__int64)AdditionalDirtyRects;
  if ( AdditionalDirtyRects && (v12 = *((_DWORD *)AdditionalDirtyRects + 18), v6 = v12 != 0, v12) )
  {
    *a2 = *(_QWORD *)(v10 + 224);
    CMergedRectBase<4>::GetRects(v11, v9, a4, v8);
  }
  else
  {
    *v9 = 0;
  }
  return v6;
}
