/*
 * XREFs of ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180140364
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18006B500 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18013D188 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801403B0 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::PopCpuClipFromScope(CScopedClipStack *this, bool *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 104) + 120LL * (unsigned int)(*((_DWORD *)this + 214) - 1);
  *a2 = *(_BYTE *)(v4 + 112);
  CScopedClipStack::FreeCpuClipStackState(this, (struct CScopedClipStack::CpuClipStackState *)v4);
  --*((_DWORD *)this + 214);
  v5 = 10LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  --*(_DWORD *)(*(_QWORD *)this + 8 * v5 + 8);
}
