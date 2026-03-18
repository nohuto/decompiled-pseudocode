/*
 * XREFs of ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180016590 (-GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11S.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18007A250 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAU.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18007A740 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015AC94 (-GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResou.c)
 *     ?GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B4CC0 (-GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUI.c)
 * Callees:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180024FC4 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800250D8 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?GetAdapterLuid@CHwTextureRenderTarget@@UEBA?AU_LUID@@XZ @ 0x1800493F0 (-GetAdapterLuid@CHwTextureRenderTarget@@UEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x18007AA60 (-IsHardwareProtected@CD2DBitmap@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x18007AB30 (-GetAdapterLuid@CD2DBitmap@@UEBA-AU_LUID@@XZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z @ 0x180130678 (-GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternalNoRef(
        CD2DBitmapCache *this,
        struct _LUID a2,
        int a3,
        char a4,
        __m128i *a5,
        _QWORD *a6)
{
  _QWORD *v6; // r14
  char *v7; // r15
  __int64 v9; // rcx
  char v10; // si
  unsigned int v13; // r12d
  CD2DBitmap *v14; // rcx
  struct _LUID (__fastcall *v15)(CD2DBitmap *__hidden); // rax
  __int64 AdapterLuid; // rax
  int v17; // eax
  CD2DBitmap *v18; // rcx
  bool (__fastcall *v19)(CD2DBitmap *__hidden); // rax
  char v20; // al
  unsigned int v22; // esi
  int updated; // eax
  struct CSecondaryD2DBitmap *v24; // rdi
  _DWORD *v25; // rax
  int v26; // r9d
  unsigned __int32 v27; // esi
  unsigned int v28; // r14d
  unsigned __int32 v29; // eax
  unsigned __int32 v30; // ecx
  unsigned int v31; // [rsp+20h] [rbp-60h]
  struct CSecondaryD2DBitmap *v33; // [rsp+38h] [rbp-48h] BYREF
  __m128i v34; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v35[4]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v36; // [rsp+60h] [rbp-20h] BYREF
  LONG HighPart; // [rsp+BCh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v6 = a6;
  v7 = 0LL;
  v9 = *((_QWORD *)this + 6);
  v10 = a4;
  *a6 = 0LL;
  v13 = 0;
  if ( !v9 )
  {
    v13 = -2003292412;
    v31 = 184;
    goto LABEL_30;
  }
  if ( a5 )
  {
    v34 = *a5;
    LODWORD(v33) = v34.m128i_i32[1] - 1;
    v27 = v34.m128i_i32[2] + 1;
    v35[0] = v34.m128i_i32[3] + 1;
    v28 = _mm_cvtsi128_si32(v34) - 1;
    CD2DBitmapCache::GetBitmapRect(this, (struct MilRectU *)&v36);
    v29 = v34.m128i_i32[1] - 1;
    if ( v36.m128i_i32[0] > v28 )
      v28 = v36.m128i_i32[0];
    v30 = v35[0];
    if ( v36.m128i_i32[1] > v29 )
      v29 = v36.m128i_u32[1];
    v34.m128i_i32[0] = v28;
    if ( v36.m128i_i32[2] < v27 )
      v27 = v36.m128i_u32[2];
    v34.m128i_i32[1] = v29;
    if ( v36.m128i_i32[3] < v35[0] )
      v30 = v36.m128i_u32[3];
    v34.m128i_i64[1] = __PAIR64__(v30, v27);
    if ( v27 <= v28 || v30 <= v29 )
      v34 = 0uLL;
    if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v34) )
    {
      v6 = a6;
      v10 = a4;
      goto LABEL_4;
    }
    v13 = -2147024809;
    v31 = 215;
LABEL_30:
    v26 = v13;
LABEL_55:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v31);
    return v13;
  }
  v35[0] = 0;
  LODWORD(v33) = 0;
  (*(void (__fastcall **)(__int64, _DWORD *, struct CSecondaryD2DBitmap **))(*(_QWORD *)v9 + 24LL))(v9, v35, &v33);
  v34.m128i_i64[1] = __PAIR64__((unsigned int)v33, v35[0]);
  v34.m128i_i64[0] = 0LL;
LABEL_4:
  v14 = (CD2DBitmap *)*((_QWORD *)this + 7);
  if ( v14 )
  {
    v15 = *(struct _LUID (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v14 + 24LL);
    if ( v15 == CD2DBitmap::GetAdapterLuid )
    {
      AdapterLuid = (__int64)CD2DBitmap::GetAdapterLuid(v14);
    }
    else if ( (char *)v15 == (char *)CHwTextureRenderTarget::GetAdapterLuid )
    {
      AdapterLuid = (__int64)CHwTextureRenderTarget::GetAdapterLuid(v14, &v33);
    }
    else
    {
      AdapterLuid = ((__int64 (__fastcall *)(CD2DBitmap *, struct CSecondaryD2DBitmap **))v15)(v14, &v33);
    }
    if ( *(_DWORD *)AdapterLuid == a2.LowPart && *(_DWORD *)(AdapterLuid + 4) == HighPart )
    {
      v17 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)this + 6) + 56LL))(
                         *((_QWORD *)this + 6),
                         &v33);
      if ( v17 == DisplayId::None || v17 == a3 || a3 == DisplayId::All )
      {
        v18 = (CD2DBitmap *)*((_QWORD *)this + 7);
        v19 = *(bool (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v18 + 40LL);
        v20 = v19 == CD2DBitmap::IsHardwareProtected ? CD2DBitmap::IsHardwareProtected(v18) : ((__int64 (*)(void))v19)();
        if ( !v20 || v10 )
        {
          *v6 = *((_QWORD *)this + 7);
          return v13;
        }
      }
    }
  }
  v22 = 0;
  v33 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      v24 = *(struct CSecondaryD2DBitmap **)(*((_QWORD *)this + 9) + 8LL * v22);
      v25 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _DWORD *))(*((_QWORD *)v24 + 13) + 24LL))(
                        (__int64)v24 + 104,
                        v35);
      if ( *v25 == a2.LowPart && v25[1] == HighPart )
        break;
      if ( ++v22 >= *((_DWORD *)this + 24) )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    updated = CD2DBitmapCache::CreateAndCacheBitmap(this, a2, &v33);
    v13 = updated;
    if ( updated < 0 )
    {
      v31 = 258;
LABEL_54:
      v26 = updated;
      goto LABEL_55;
    }
    v24 = v33;
  }
  v36 = v34;
  updated = CD2DBitmapCache::UpdateCachedBitmap(this, (__int64)&v36, (__int64)v24);
  v13 = updated;
  if ( updated < 0 )
  {
    v31 = 261;
    goto LABEL_54;
  }
  if ( v24 )
    v7 = (char *)v24 + 104;
  *v6 = v7;
  return v13;
}
