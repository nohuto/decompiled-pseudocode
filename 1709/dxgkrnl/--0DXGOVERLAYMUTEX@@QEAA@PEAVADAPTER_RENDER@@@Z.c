/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0014394
 * Callers:
 *     DxgkCreateOverlay @ 0x1C01B13C0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C01B1A00 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C01B1EF0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C01B22D0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C01B2750 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 616));
  return this;
}
