/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00E64BC
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C00E6448 (GreConvertMemToRedirectionDC.c)
 *     GreGetDxRgn @ 0x1C024FA88 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C02501AC (GreHintDxUpdate.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0251830 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0251AA0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0252570 (DxgkEngGetClientRect.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0252660 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0252740 (DxgkEngIsRedirectionDC.c)
 *     GreWatchVisRgnChange @ 0x1C027A824 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C027BDF4 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C0144678 (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2, int a3)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vAltLock(this, a2, a3);
  return this;
}
