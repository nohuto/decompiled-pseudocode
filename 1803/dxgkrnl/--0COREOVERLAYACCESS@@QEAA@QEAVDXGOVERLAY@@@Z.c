/*
 * XREFs of ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C00333F0
 * Callers:
 *     DxgkFlipOverlay @ 0x1C01ADB30 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C01ADF20 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C01AE3F0 (DxgkUpdateOverlay.c)
 * Callees:
 *     <none>
 */

COREOVERLAYACCESS *__fastcall COREOVERLAYACCESS::COREOVERLAYACCESS(
        COREOVERLAYACCESS *this,
        struct DXGOVERLAY *const a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL);
  *((_QWORD *)this + 3) = v2;
  *((_BYTE *)this + 32) = 0;
  if ( v2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 24));
    *((_QWORD *)this + 2) = -1LL;
  }
  *((_QWORD *)this + 5) = a2;
  return this;
}
