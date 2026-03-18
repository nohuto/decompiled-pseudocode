/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0013600
 * Callers:
 *     DxgkCreateOverlay @ 0x1C019A970 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C019AFA0 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C019B490 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C019B820 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C019BCC0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(
        DXGOVERLAYMUTEX *this,
        struct ADAPTER_RENDER *a2,
        __int64 a3,
        __int64 a4)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 520), a3, a4);
  return this;
}
