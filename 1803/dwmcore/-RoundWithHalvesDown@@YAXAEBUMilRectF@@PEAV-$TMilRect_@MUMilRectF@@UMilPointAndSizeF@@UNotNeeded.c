/*
 * XREFs of ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800174D4
 * Callers:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800660AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ??0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800C37B4 (--0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x1800435C8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 */

__int64 __fastcall RoundWithHalvesDown(float *a1, float *a2)
{
  __int64 result; // rax

  *a2 = (float)(int)CFloatFPU::CeilingSat(*a1 - 0.5);
  a2[1] = (float)(int)CFloatFPU::CeilingSat(a1[1] - 0.5);
  a2[2] = (float)(int)CFloatFPU::CeilingSat(a1[2] - 0.5);
  result = CFloatFPU::CeilingSat(a1[3] - 0.5);
  a2[3] = (float)(int)result;
  return result;
}
