/*
 * XREFs of ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800344AC
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x180034190 (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CDirtyRegion::Initialize(CDirtyRegion *this, __int64 a2, _OWORD *a3, char a4)
{
  char *v8; // rbp
  __int64 result; // rax

  memset_0((char *)this + 24, 0, 0x80uLL);
  memset_0((char *)this + 536, 0, 0x120uLL);
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 679) = 1065353216;
  *((_WORD *)this + 1362) = 0;
  *((_DWORD *)this + 674) = 0;
  *((_DWORD *)this + 279) = 0;
  *((_BYTE *)this + 2722) = a4 != 0;
  *((_BYTE *)this + 2723) = 0;
  *(_OWORD *)((char *)this + 2700) = *a3;
  CDirtyRegion::ClearDirtyRegionAnnotationLists(this);
  v8 = (char *)this + 160;
  result = 8LL;
  do
  {
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 - 1) = 0LL;
    v8[260] = 1;
    *(_QWORD *)(v8 + 252) = 0LL;
    *((_DWORD *)v8 + 62) = 0;
    *((_QWORD *)v8 - 16) = 0LL;
    *((_QWORD *)v8 - 17) = 0LL;
    v8 += 16;
    --result;
  }
  while ( result );
  return result;
}
