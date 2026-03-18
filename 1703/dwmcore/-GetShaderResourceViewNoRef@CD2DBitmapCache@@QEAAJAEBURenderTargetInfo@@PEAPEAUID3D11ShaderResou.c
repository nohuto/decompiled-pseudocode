/*
 * XREFs of ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015AC94
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B6160 (-GetBitmapShaderResourceViewNoRef@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::GetShaderResourceViewNoRef(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct ID3D11ShaderResourceView **a3)
{
  char v3; // r9
  int v5; // r8d
  struct _LUID v6; // rdx
  int BitmapInternalNoRef; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  v3 = *((_BYTE *)a2 + 16);
  v5 = *((_DWORD *)a2 + 2);
  v6 = *(struct _LUID *)a2;
  v11 = 0LL;
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(this, v6, v5, v3, 0LL, &v11);
  v8 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapInternalNoRef, 0x75u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct ID3D11ShaderResourceView **))(*(_QWORD *)v11 + 80LL))(v11, a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x77u);
  }
  return v8;
}
