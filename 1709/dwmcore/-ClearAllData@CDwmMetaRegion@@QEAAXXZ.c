/*
 * XREFs of ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800BB98C
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180098B00 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18009BB64 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x180178EAC (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDwmMetaRegion::ClearAllData(CDwmMetaRegion *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    DeleteObject(v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    DeleteObject(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_BYTE *)this + 40) = 0;
}
