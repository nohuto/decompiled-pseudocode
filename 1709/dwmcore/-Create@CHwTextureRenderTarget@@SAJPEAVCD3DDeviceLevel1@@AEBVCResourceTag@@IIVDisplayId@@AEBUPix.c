/*
 * XREFs of ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800795D4
 * Callers:
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180021A78 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CHwTextureRenderTarget@@KAPEAX_K@Z @ 0x180079698 (--2CHwTextureRenderTarget@@KAPEAX_K@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x18008FE30 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x1800901A0 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Create(
        struct CD3DDeviceLevel1 *a1,
        const struct CResourceTag *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct PixelFormatInfo *a6,
        bool a7,
        CHwTextureRenderTarget **a8)
{
  void *v12; // rax
  CHwTextureRenderTarget *v13; // rbx
  signed int v14; // eax
  unsigned int v15; // edi

  *a8 = 0LL;
  v12 = CHwTextureRenderTarget::operator new((unsigned __int64)a1);
  if ( v12 )
    v13 = (CHwTextureRenderTarget *)CHwTextureRenderTarget::CHwTextureRenderTarget(v12, a5);
  else
    v13 = 0LL;
  if ( v13 )
  {
    (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = CHwTextureRenderTarget::Init(v13, a1, a2, a3, a4, a6, a7);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x66u);
      (*(void (__fastcall **)(CHwTextureRenderTarget *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    else
    {
      *a8 = v13;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x5Bu);
  }
  return v15;
}
