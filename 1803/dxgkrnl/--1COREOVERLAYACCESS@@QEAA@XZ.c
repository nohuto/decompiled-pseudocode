/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C001BA58
 * Callers:
 *     DxgkFlipOverlay @ 0x1C01ADB30 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C01ADF20 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C01AE3F0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
