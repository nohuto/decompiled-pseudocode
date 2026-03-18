/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800B9DF0
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B9954 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800B9BAC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800D8564 (-ReleaseRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WKA@EAAKXZ @ 0x1800DE4E0 (-Release@CScratchRenderTargetBitmap@@WKA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WNI@EAAKXZ @ 0x1800DE4F0 (-Release@CScratchRenderTargetBitmap@@WNI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WOA@EAAKXZ @ 0x1800DE500 (-Release@CScratchRenderTargetBitmap@@WOA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WOI@EAAKXZ @ 0x1800DE510 (-Release@CScratchRenderTargetBitmap@@WOI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WPA@EAAKXZ @ 0x1800DE520 (-Release@CScratchRenderTargetBitmap@@WPA@EAAKXZ.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180140924 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1801E4C38 (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800B9D04 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Release(CScratchRenderTargetBitmap *this)
{
  _DWORD *v2; // rcx
  unsigned __int32 v3; // ebx

  if ( *((_BYTE *)this + 296)
    && *((_DWORD *)this + 42) == 1
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 32LL))(*((_QWORD *)this + 25)) )
  {
    CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
      (CRenderTargetBitmapCache *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 25) + 16LL) + 80LL) + 536LL),
      this);
  }
  v2 = (_DWORD *)((char *)this + 160);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 42);
  if ( !v3 )
  {
    --v2[2];
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  }
  return v3;
}
