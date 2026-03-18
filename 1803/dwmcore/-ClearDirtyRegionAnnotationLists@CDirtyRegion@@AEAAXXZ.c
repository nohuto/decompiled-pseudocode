/*
 * XREFs of ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x18009F1DC
 * Callers:
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18009DF78 (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 * Callees:
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800C6908 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 */

void __fastcall CDirtyRegion::ClearDirtyRegionAnnotationLists(CDirtyRegion *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  char *v3; // rbx

  v1 = (_QWORD *)((char *)this + 280);
  v2 = 8LL;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --v2;
  }
  while ( v2 );
  v3 = (char *)this + 1280;
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CDirtyRegion *)((char *)this + 1280));
  *((_QWORD *)v3 + 2) = v3;
  *((_QWORD *)v3 + 3) = v3;
  *((_QWORD *)v3 + 1) = v3 + 16;
  *(_QWORD *)v3 = v3 + 16;
  *((_DWORD *)v3 + 392) = 0;
}
