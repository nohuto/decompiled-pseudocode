/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0015A4C
 * Callers:
 *     DxgkFlipOverlay @ 0x1C01B1EF0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C01B22D0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C01B2750 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
