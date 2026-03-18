/*
 * XREFs of ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0033424
 * Callers:
 *     DxgkFlipOverlay @ 0x1C01ADB30 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C01ADF20 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C01AE3F0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREOVERLAYACCESS::AcquireShared(DXGADAPTER **this)
{
  COREACCESS::AcquireShared(this + 1);
  if ( *((_DWORD *)this[5] + 7) == 1 )
    return 0LL;
  COREACCESS::Release((struct _KTHREAD ***)this + 1);
  return 3221226166LL;
}
