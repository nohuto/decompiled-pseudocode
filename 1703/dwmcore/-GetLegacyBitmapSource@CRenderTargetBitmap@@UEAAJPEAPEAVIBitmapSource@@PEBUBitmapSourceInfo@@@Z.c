/*
 * XREFs of ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180046FB0
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18001650C (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180049410 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetLegacyBitmapSource(
        CRenderTargetBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  unsigned int v3; // ebx
  CHwTextureRenderTarget *v6; // rcx
  __int64 (__fastcall *v7)(CHwTextureRenderTarget *__hidden, struct IBitmapSource **); // rax
  int BitmapSource; // eax

  v3 = 0;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 14)
    && (!*((_BYTE *)this + 184)
     || !a3
     || (int)CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(
               (__int64)this - 16,
               *(_QWORD *)a3,
               *((_DWORD *)a3 + 2)) >= 0) )
  {
    v6 = (CHwTextureRenderTarget *)*((_QWORD *)this + 14);
    v7 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, struct IBitmapSource **))(*(_QWORD *)v6 + 184LL);
    if ( v7 == CHwTextureRenderTarget::GetBitmapSource )
      BitmapSource = CHwTextureRenderTarget::GetBitmapSource(v6, a2);
    else
      BitmapSource = v7(v6, a2);
    v3 = BitmapSource;
    if ( BitmapSource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0xCFu);
  }
  return v3;
}
