/*
 * XREFs of ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180134954
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18012CFA4 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801348DC (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::PopCpuClipFromScope(CScopedClipStack *this, bool *a2)
{
  int v3; // eax
  __int64 v4; // rcx

  v3 = *((_DWORD *)this + 214);
  *a2 = *(_BYTE *)(120LL * (unsigned int)(v3 - 1) + *((_QWORD *)this + 104) + 112);
  CScopedClipStack::FreeCpuClipStackState(
    this,
    (CRectanglesShape **)(*((_QWORD *)this + 104) + 120LL * (unsigned int)(v3 - 1)));
  --*((_DWORD *)this + 214);
  v4 = 10LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(*(_QWORD *)this + 8 * v4 + 8);
}
