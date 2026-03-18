/*
 * XREFs of ??0CDirtyRegion@@QEAA@XZ @ 0x180034340
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CDirtyRegion *__fastcall CDirtyRegion::CDirtyRegion(CDirtyRegion *this)
{
  __int64 v1; // rdi
  _QWORD *v3; // rax

  v1 = 8LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDirtyRegion::`vftable';
  `vector constructor iterator'(
    (CDirtyRegion *)((char *)this + 24),
    16LL,
    8LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  `vector constructor iterator'(
    (CDirtyRegion *)((char *)this + 152),
    16LL,
    8LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  `vector constructor iterator'(
    (CDirtyRegion *)((char *)this + 824),
    16LL,
    8LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  *((_DWORD *)this + 238) = 0;
  `vector constructor iterator'(
    (CDirtyRegion *)((char *)this + 956),
    16LL,
    8LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  *((_QWORD *)this + 142) = (char *)this + 1120;
  *((_QWORD *)this + 143) = (char *)this + 1120;
  *((_QWORD *)this + 141) = (char *)this + 1136;
  *((_QWORD *)this + 140) = (char *)this + 1136;
  v3 = (_QWORD *)((char *)this + 280);
  *((_DWORD *)this + 672) = 0;
  *((_BYTE *)this + 2720) = 0;
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
