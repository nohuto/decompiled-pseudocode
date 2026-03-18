/*
 * XREFs of ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B1EEC
 * Callers:
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180049410 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180055214 (-CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800D1AF0 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x1800B2100 (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Create(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct CBitmapOfDeviceBitmaps **a4)
{
  unsigned int v4; // ebx
  struct CBitmapOfDeviceBitmaps *v9; // rdi
  CBitmapOfDeviceBitmaps *v10; // rax
  CBitmapOfDeviceBitmaps *v11; // rax
  __int64 result; // rax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v9 = 0LL;
  if ( a1 > 0x1000000 || a2 > 0x1000000 )
  {
    v13 = -2147024809;
    v14 = 58;
    goto LABEL_10;
  }
  v10 = (CBitmapOfDeviceBitmaps *)HeapAlloc(WPF::g_processHeap, 0, 0x218uLL);
  if ( !v10 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v11 = CBitmapOfDeviceBitmaps::CBitmapOfDeviceBitmaps(v10, a1, a2, a3);
  v9 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v14 = 64;
LABEL_10:
    v4 = v13;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
    goto LABEL_6;
  }
  CBitmapOfDeviceBitmaps::AddRef(v11);
LABEL_6:
  result = v4;
  *a4 = v9;
  return result;
}
