/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B4CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x1801B4B28 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetBitmapShaderResourceViewNoRef(
        struct IUnknown *this,
        const struct RenderTargetInfo *a2,
        struct ID3D11ShaderResourceView **a3)
{
  CD2DBitmapCache *v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int BitmapInternalNoRef; // eax
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = (CD2DBitmapCache *)&this[-13];
  *a3 = 0LL;
  v6 = CSectionBitmapRealization::EnsureBitmapCacheSource(this - 13);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x50u);
  }
  else
  {
    BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(
                            v3,
                            *(struct _LUID *)a2,
                            *((_DWORD *)a2 + 2),
                            *((_BYTE *)a2 + 16),
                            0LL,
                            &v11);
    v7 = BitmapInternalNoRef;
    if ( BitmapInternalNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapInternalNoRef, 0x56u);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, struct ID3D11ShaderResourceView **))(*(_QWORD *)v11 + 80LL))(v11, a3);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x58u);
    }
  }
  return v7;
}
