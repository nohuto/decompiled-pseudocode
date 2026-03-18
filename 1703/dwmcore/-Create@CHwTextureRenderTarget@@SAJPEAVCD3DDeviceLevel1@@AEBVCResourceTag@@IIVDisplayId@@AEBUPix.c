/*
 * XREFs of ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800C68D4
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180079250 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 * Callees:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18004955C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800498D8 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2CHwTextureRenderTarget@@KAPEAX_K@Z @ 0x1800C69B8 (--2CHwTextureRenderTarget@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Create(
        struct CD3DDeviceLevel1 *a1,
        const struct CResourceTag *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct PixelFormatInfo *a6,
        bool a7,
        struct CD3DVidMemOnlyTexture ***a8)
{
  void *v12; // rax
  struct CD3DVidMemOnlyTexture **v13; // rbx
  int v14; // eax
  unsigned int v15; // edi

  *a8 = 0LL;
  v12 = CHwTextureRenderTarget::operator new((unsigned __int64)a1);
  if ( v12 )
    v13 = (struct CD3DVidMemOnlyTexture **)CHwTextureRenderTarget::CHwTextureRenderTarget((__int64)v12, a5);
  else
    v13 = 0LL;
  if ( v13 )
  {
    (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v13 + 1))(v13);
    v14 = CHwTextureRenderTarget::Init(v13, a1, a2, a3, a4, a6, a7);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x66u);
      (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v13 + 2))(v13);
    }
    else
    {
      *a8 = v13;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5Bu);
  }
  return v15;
}
