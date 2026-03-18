/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800061E0
 * Callers:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800064BC (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180020D64 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800C1068 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800CDE60 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WIA@EAAKXZ @ 0x1800D6580 (-Release@CScratchRenderTargetBitmap@@WIA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WLA@EAAKXZ @ 0x1800D6590 (-Release@CScratchRenderTargetBitmap@@WLA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WLI@EAAKXZ @ 0x1800D65A0 (-Release@CScratchRenderTargetBitmap@@WLI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WMA@EAAKXZ @ 0x1800D65B0 (-Release@CScratchRenderTargetBitmap@@WMA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WMI@EAAKXZ @ 0x1800D65C0 (-Release@CScratchRenderTargetBitmap@@WMI@EAAKXZ.c)
 * Callees:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800064BC (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Release(CScratchRenderTargetBitmap *this)
{
  _DWORD *v2; // rcx
  unsigned __int32 v3; // ebx

  if ( *((_BYTE *)this + 256)
    && *((_DWORD *)this + 34) == 1
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21)) )
  {
    CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
      (CRenderTargetBitmapCache *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 16LL) + 128LL) + 552LL),
      this);
  }
  v2 = (_DWORD *)((char *)this + 128);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 34);
  if ( !v3 )
  {
    --v2[2];
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  }
  return v3;
}
