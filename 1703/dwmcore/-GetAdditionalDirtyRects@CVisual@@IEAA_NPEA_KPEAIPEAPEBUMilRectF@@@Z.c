/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18014C770
 * Callers:
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18014DAB4 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800737D0 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ @ 0x18012B5D4 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ.c)
 */

char __fastcall CVisual::GetAdditionalDirtyRects(
        CVisual *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        const struct MilRectF **a4)
{
  char v6; // bl
  struct CMergedRect *AdditionalDirtyRects; // rax
  _DWORD *v8; // r10
  __int64 v9; // r11

  v6 = 0;
  AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(this);
  if ( !AdditionalDirtyRects )
    goto LABEL_5;
  if ( !*((_DWORD *)AdditionalDirtyRects + 18) )
  {
    v6 = 0;
LABEL_5:
    *v8 = 0;
    return v6;
  }
  *a2 = *(_QWORD *)(v9 + 216);
  v6 = 1;
  CMergedRectBase<4>::GetRects((__int64)AdditionalDirtyRects, v8, a4);
  return v6;
}
