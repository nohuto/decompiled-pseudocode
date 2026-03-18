/*
 * XREFs of ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C00386A0
 * Callers:
 *     DxgkFlipOverlay @ 0x1C019B490 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C019B820 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C019BCC0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREOVERLAYACCESS::AcquireShared(COREOVERLAYACCESS *this)
{
  COREACCESS::AcquireShared((COREOVERLAYACCESS *)((char *)this + 8));
  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 28LL) == 1 )
    return 0LL;
  COREACCESS::Release((COREOVERLAYACCESS *)((char *)this + 8));
  return 3221226166LL;
}
