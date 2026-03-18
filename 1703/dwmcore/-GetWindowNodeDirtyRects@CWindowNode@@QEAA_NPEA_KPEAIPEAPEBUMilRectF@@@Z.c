/*
 * XREFs of ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18014D054
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x1800A62D0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800737D0 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

char __fastcall CWindowNode::GetWindowNodeDirtyRects(
        CWindowNode *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        const struct MilRectF **a4)
{
  char v4; // bl

  v4 = 0;
  if ( *((_DWORD *)this + 142) )
  {
    *a2 = *((_QWORD *)this + 27);
    v4 = 1;
    CMergedRectBase<4>::GetRects((__int64)this + 496, a3, a4);
  }
  else
  {
    *a3 = 0;
  }
  return v4;
}
