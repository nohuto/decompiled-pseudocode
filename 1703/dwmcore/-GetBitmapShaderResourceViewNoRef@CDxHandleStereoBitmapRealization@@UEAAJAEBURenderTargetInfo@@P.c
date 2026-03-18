/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B6160
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015AC94 (-GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResou.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801B60B0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x1801B6520 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetBitmapShaderResourceViewNoRef(
        CDxHandleStereoBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID3D11ShaderResourceView **a3)
{
  CD2DBitmap **v3; // rbp
  char v7; // al
  char v8; // r15
  int v9; // eax
  unsigned int v10; // ebx
  int ShaderResourceViewNoRef; // eax
  int v12; // eax

  v3 = (CD2DBitmap **)((char *)this - 104);
  v7 = CDxHandleStereoBitmapRealization::UseLeftBitmap((char *)this - 104, *((unsigned int *)a2 + 3));
  *a3 = 0LL;
  v8 = v7;
  v9 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap(v3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x3Eu);
  }
  else if ( v8 )
  {
    ShaderResourceViewNoRef = CD2DBitmapCache::GetShaderResourceViewNoRef((CD2DBitmapCache *)v3, a2, a3);
    v10 = ShaderResourceViewNoRef;
    if ( ShaderResourceViewNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x42u);
  }
  else
  {
    v12 = CD2DBitmapCache::GetShaderResourceViewNoRef((CDxHandleStereoBitmapRealization *)((char *)this + 328), a2, a3);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x46u);
  }
  return v10;
}
