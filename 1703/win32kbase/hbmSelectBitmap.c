/*
 * XREFs of hbmSelectBitmap @ 0x1C007E7E0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 *     GreSelectBitmap @ 0x1C007E7C0 (GreSelectBitmap.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 */

__int64 __fastcall hbmSelectBitmap(HDC a1)
{
  return hbmSelectBitmapInternal(a1, 1);
}
