/*
 * XREFs of ??0?$CMergedRectBase@$01@@QEAA@XZ @ 0x18013F7CC
 * Callers:
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180140054 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

CInputSinkStruct::InputQueueInfo *__fastcall CMergedRectBase<2>::CMergedRectBase<2>(
        CInputSinkStruct::InputQueueInfo *a1)
{
  CInputSinkStruct::InputQueueInfo *result; // rax

  `vector constructor iterator'(
    a1,
    16LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  memset_0(a1, 0, 0x2CuLL);
  result = a1;
  *((_DWORD *)a1 + 9) = 1;
  return result;
}
