/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750FC
 * Callers:
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0071B18 (--1DCOBJA@@QEAA@XZ.c)
 *     GreConvertMemToRedirectionDC @ 0x1C009ED74 (GreConvertMemToRedirectionDC.c)
 *     GreGetDxRgn @ 0x1C024E018 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C024E738 (GreHintDxUpdate.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C024FDE0 (DxgkEngAccumD3DPresentBounds.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn @ 0x1C0250060 (DxgkEngAddRedirBitmapD3DDirtyRgn.c)
 *     DxgkEngGetClientRect @ 0x1C0250B30 (DxgkEngGetClientRect.c)
 *     DxgkEngGetDC @ 0x1C0250B90 (DxgkEngGetDC.c)
 *     DxgkEngGetRedirBitmapSharedHandle @ 0x1C0250C20 (DxgkEngGetRedirBitmapSharedHandle.c)
 *     DxgkEngIsRedirectionDC @ 0x1C0250CD0 (DxgkEngIsRedirectionDC.c)
 *     DxgkEngLockVisRgn @ 0x1C0250D20 (DxgkEngLockVisRgn.c)
 *     GreWatchVisRgnChange @ 0x1C027DD18 (GreWatchVisRgnChange.c)
 *     GreConvertRedirectionToMemDC @ 0x1C027F2C4 (GreConvertRedirectionToMemDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
  }
}
