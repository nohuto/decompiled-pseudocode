/*
 * XREFs of ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x1801E69A4
 * Callers:
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1801DE5E0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180078864 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     ??2CHwTextureRenderTarget@@KAPEAX_K@Z @ 0x1800C6200 (--2CHwTextureRenderTarget@@KAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x1801E6748 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::OpenShared(
        struct CD3DDeviceLevel1 *a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        bool a5,
        CHwTextureRenderTarget **a6)
{
  LPVOID v10; // rax
  CHwTextureRenderTarget *v11; // rbx
  unsigned int v12; // edi
  int v13; // eax

  *a6 = 0LL;
  v10 = CHwTextureRenderTarget::operator new();
  if ( v10 )
    v11 = (CHwTextureRenderTarget *)CHwTextureRenderTarget::CHwTextureRenderTarget((__int64)v10, a2);
  else
    v11 = 0LL;
  if ( v11 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v11 + 8LL))(v11);
    v13 = CHwTextureRenderTarget::Init(v11, a1, (enum DXGI_ALPHA_MODE)*(_DWORD *)(a3 + 4), a4, a5);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x88u);
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      *a6 = v11;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x85u);
  }
  return v12;
}
