/*
 * XREFs of ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58
 * Callers:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180017954 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180026550 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x180055460 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180072AE4 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x18007CF50 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800AFEA4 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x18015AD90 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18015B134 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019AE44 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18019BAF0 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x1801B4B28 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x18007DD70 (-HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x18007DE7C (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromMemoryEx(
        unsigned int a1,
        int a2,
        enum DXGI_FORMAT *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct IUnknown *a7,
        struct IBitmapSource **a8)
{
  CClientMemoryBitmap *v12; // rax
  CClientMemoryBitmap *v13; // rax
  CClientMemoryBitmap *v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v12 = (CClientMemoryBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0x100uLL);
  if ( !v12 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v13 = CClientMemoryBitmap::CClientMemoryBitmap(v12);
  v14 = v13;
  if ( v13 )
  {
    (*(void (__fastcall **)(CClientMemoryBitmap *))(*(_QWORD *)v13 + 8LL))(v13);
    v15 = CClientMemoryBitmap::HrInit(v14, a1, a2, a3, a5, a6, a4, a7);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x27u);
      (*(void (__fastcall **)(CClientMemoryBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      *a8 = (CClientMemoryBitmap *)((char *)v14 + 16);
    }
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
  }
  return v16;
}
