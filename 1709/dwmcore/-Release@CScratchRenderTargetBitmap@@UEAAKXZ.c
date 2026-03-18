/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x18008D360
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x18008CE70 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18008CFE4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18008D224 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800BC078 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Release@CScratchRenderTargetBitmap@@WJA@EAAKXZ @ 0x1800C6DD0 (-Release@CScratchRenderTargetBitmap@@WJA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WMA@EAAKXZ @ 0x1800C6DE0 (-Release@CScratchRenderTargetBitmap@@WMA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WMI@EAAKXZ @ 0x1800C6DF0 (-Release@CScratchRenderTargetBitmap@@WMI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WNA@EAAKXZ @ 0x1800C6E00 (-Release@CScratchRenderTargetBitmap@@WNA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WNI@EAAKXZ @ 0x1800C6E10 (-Release@CScratchRenderTargetBitmap@@WNI@EAAKXZ.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18011DDB0 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1801AE954 (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18008D148 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall CScratchRenderTargetBitmap::Release(CScratchRenderTargetBitmap *this)
{
  if ( *((_BYTE *)this + 272)
    && *((_DWORD *)this + 38) == 1
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 32LL))(*((_QWORD *)this + 23)) )
  {
    CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
      (CRenderTargetBitmapCache *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 23) + 16LL) + 80LL) + 536LL),
      this);
  }
  return CMILCOMBase::InternalRelease((CScratchRenderTargetBitmap *)((char *)this + 144));
}
