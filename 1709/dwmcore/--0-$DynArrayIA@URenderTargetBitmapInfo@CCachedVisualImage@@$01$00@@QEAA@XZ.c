/*
 * XREFs of ??0?$DynArrayIA@URenderTargetBitmapInfo@CCachedVisualImage@@$01$00@@QEAA@XZ @ 0x18007E4BC
 * Callers:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18008ED34 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18007E6CC (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

__int64 __fastcall DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>::DynArrayIA<CCachedVisualImage::RenderTargetBitmapInfo,2,1>(
        __int64 a1)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, a1 + 32, 2LL);
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)(a1 + 32),
    48LL,
    2LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  return a1;
}
