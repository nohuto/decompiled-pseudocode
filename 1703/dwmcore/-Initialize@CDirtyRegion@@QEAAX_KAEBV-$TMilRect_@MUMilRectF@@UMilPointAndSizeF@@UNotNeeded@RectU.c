/*
 * XREFs of ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180092E00
 * Callers:
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x180092ADC (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CDirtyRegion::Initialize(CDirtyRegion *this, __int64 a2, _OWORD *a3, char a4)
{
  char *v8; // rbp
  __int64 result; // rax

  memset_0((char *)this + 24, 0, 0x80uLL);
  memset_0((char *)this + 536, 0, 0x120uLL);
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 676) = 0;
  *((_DWORD *)this + 280) = 0;
  *(_WORD *)((char *)this + 2725) = 0;
  *((_BYTE *)this + 2724) = a4 != 0;
  *(_OWORD *)((char *)this + 2708) = *a3;
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
