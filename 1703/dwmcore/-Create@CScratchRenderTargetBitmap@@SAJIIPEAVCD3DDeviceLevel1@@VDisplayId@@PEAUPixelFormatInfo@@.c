/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180020D64
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800061E0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x18000626C (--0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18004955C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(
        unsigned int a1,
        unsigned int a2,
        struct CD3DDeviceLevel1 *a3,
        __int64 a4,
        struct PixelFormatInfo *a5,
        bool a6,
        CHwTextureRenderTarget **a7)
{
  __int64 v10; // rax
  CHwTextureRenderTarget *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  const char *v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  *a7 = 0LL;
  if ( !HeapAlloc(WPF::g_processHeap, 0, 0x108uLL) )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v10 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap();
  v11 = (CHwTextureRenderTarget *)v10;
  if ( v10 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v10 + 128));
    v16 = 24;
    v15 = "DWM Scratch Rendertarget";
    v12 = CHwTextureRenderTarget::Init(v11, a3, (const struct CResourceTag *)&v15, a1, a2, a5, a6);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x23u);
      CScratchRenderTargetBitmap::Release(v11);
    }
    else
    {
      *((_BYTE *)v11 + 256) = 1;
      *a7 = v11;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Bu);
  }
  return v13;
}
