/*
 * XREFs of ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0071AE4
 * Callers:
 *     GreConvertMemToRedirectionDC @ 0x1C009ED74 (GreConvertMemToRedirectionDC.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C009F2D0 (NtGdiDdDDICreateDCFromMemory.c)
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
 *     GreSetPaletteEntries @ 0x1C0295DE0 (GreSetPaletteEntries.c)
 *     NtGdiResizePalette @ 0x1C02962A0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

MDCOBJA *__fastcall MDCOBJA::MDCOBJA(MDCOBJA *this, HDC a2)
{
  HDC v3; // rax

  v3 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLock(v3, a2);
  return this;
}
