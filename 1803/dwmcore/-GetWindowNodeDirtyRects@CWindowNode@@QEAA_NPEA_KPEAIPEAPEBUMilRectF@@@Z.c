/*
 * XREFs of ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x180161B58
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006B178 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800BD684 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

bool __fastcall CWindowNode::GetWindowNodeDirtyRects(
        CWindowNode *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        const struct MilRectF **a4)
{
  int v4; // eax
  bool v5; // bl

  v4 = *((_DWORD *)this + 148);
  v5 = v4 != 0;
  if ( v4 )
  {
    *a2 = *((_QWORD *)this + 28);
    CMergedRectBase<4>::GetRects((__int64)this + 520, a3, a4, (__int64)a4);
  }
  else
  {
    *a3 = 0;
  }
  return v5;
}
