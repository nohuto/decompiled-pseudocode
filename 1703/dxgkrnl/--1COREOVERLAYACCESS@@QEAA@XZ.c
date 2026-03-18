/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C00147DC
 * Callers:
 *     DxgkFlipOverlay @ 0x1C019B490 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C019B820 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C019BCC0 (DxgkUpdateOverlay.c)
 * Callees:
 *     <none>
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
