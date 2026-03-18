/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C0029120 (GreSelectRedirectionBitmap.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00E6448 (GreConvertMemToRedirectionDC.c)
 *     ??1MDCOBJA@@QEAA@XZ @ 0x1C0143144 (--1MDCOBJA@@QEAA@XZ.c)
 *     GreGetDxRgn @ 0x1C024FA88 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C02501AC (GreHintDxUpdate.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0251830 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0251AA0 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0252570 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C02525D0 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0252660 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0252740 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0252790 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C027A824 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C027BDF4 (GreConvertRedirectionToMemDC.c)
 *     NtGdiCancelDC @ 0x1C02899D0 (NtGdiCancelDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  XDCOBJ::RestoreAttributes(this);
  v2 = *(__int64 **)this;
  v4 = 0;
  v3 = *v2;
  HmgDecrementShareReferenceCountEx(v2, &v4);
  if ( v4 )
    bDeleteDCInternalEx(v3, 0LL);
}
