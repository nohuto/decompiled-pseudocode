/*
 * XREFs of ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18019BF68
 * Callers:
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180195A70 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 * Callees:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800498D8 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2CHwTextureRenderTarget@@KAPEAX_K@Z @ 0x1800C69B8 (--2CHwTextureRenderTarget@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18019BD0C (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::OpenShared(
        __int64 **a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        struct CD3DVidMemOnlyTexture ***a5)
{
  LPVOID v9; // rax
  struct CD3DVidMemOnlyTexture **v10; // rbx
  unsigned int v11; // edi
  int v12; // eax

  *a5 = 0LL;
  v9 = CHwTextureRenderTarget::operator new();
  if ( v9 )
    v10 = (struct CD3DVidMemOnlyTexture **)CHwTextureRenderTarget::CHwTextureRenderTarget((__int64)v9, a2);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v10 + 1))(v10);
    v12 = CHwTextureRenderTarget::Init(v10, a1, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x87u);
      (*((void (__fastcall **)(struct CD3DVidMemOnlyTexture **))*v10 + 2))(v10);
    }
    else
    {
      *a5 = v10;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x84u);
  }
  return v11;
}
