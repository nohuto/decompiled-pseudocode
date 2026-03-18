/*
 * XREFs of ??0CDirtyRegion@@QEAA@XZ @ 0x180092C90
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Initialize@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800C2FA4 (-Initialize@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 */

CDirtyRegion *__fastcall CDirtyRegion::CDirtyRegion(CDirtyRegion *this)
{
  __int64 v1; // rdi
  _QWORD *v3; // rcx

  v1 = 8LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDirtyRegion::`vftable';
  `vector constructor iterator'(
    (CDirtyRegion *)((char *)this + 24),
    0x10uLL,
    8uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  `vector constructor iterator'(
    (CDirtyRegion *)((char *)this + 152),
    0x10uLL,
    8uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  *((_BYTE *)this + 824) = 0;
  `vector constructor iterator'(
    (CDirtyRegion *)((char *)this + 828),
    0x10uLL,
    8uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  *((_DWORD *)this + 239) = 0;
  `vector constructor iterator'(
    (CDirtyRegion *)((char *)this + 960),
    0x10uLL,
    8uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  CDirtyRegionAnnotationAllocationSet::Initialize((CDirtyRegion *)((char *)this + 1128));
  v3 = (_QWORD *)((char *)this + 280);
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v1;
  }
  while ( v1 );
  return this;
}
