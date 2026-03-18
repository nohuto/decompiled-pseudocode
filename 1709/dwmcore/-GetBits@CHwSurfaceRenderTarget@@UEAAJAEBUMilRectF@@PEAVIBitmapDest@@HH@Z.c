/*
 * XREFs of ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18008F748
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18002C320 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?GetBits@CHwTextureRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x1801AD260 (-GetBits@CHwTextureRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002DA20 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetBits(
        struct CD3DSurface **this,
        const struct MilRectF *a2,
        struct IBitmapDest *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  float v9; // xmm0_4
  float v10; // eax
  double v11; // xmm0_8
  int v12; // eax
  int v13; // eax
  signed int v14; // eax
  float v16; // [rsp+40h] [rbp-48h]
  struct tagRECT v17; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0;
  v9 = *(float *)a2 + 6291456.25;
  v10 = v9;
  v11 = *((float *)a2 + 2);
  v17.left = (int)(LODWORD(v10) << 10) >> 11;
  *(float *)&v11 = v11 + 6291456.25;
  v12 = LODWORD(v11);
  LODWORD(v11) = *((_DWORD *)a2 + 1);
  v17.right = v12 << 10 >> 11;
  *(float *)&v11 = *(float *)&v11 + 6291456.25;
  v13 = LODWORD(v11);
  LODWORD(v11) = *((_DWORD *)a2 + 3);
  v17.top = v13 << 10 >> 11;
  v16 = *(float *)&v11 + 6291456.25;
  v17.bottom = (int)(LODWORD(v16) << 10) >> 11;
  if ( (*((unsigned __int8 (__fastcall **)(struct CD3DSurface **))*this + 4))(this) )
  {
    if ( (*((unsigned __int8 (__fastcall **)(struct CD3DSurface **))*this + 19))(this) )
    {
      v8 = -2147024891;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070005, 0x2D1u);
    }
    else
    {
      v14 = CD3DSurface::CopyPixelsToBitmap(this[23], &v17, 0, 0LL, (__int64)a3, a4, a5);
      v8 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x2D9u);
    }
  }
  return v8;
}
