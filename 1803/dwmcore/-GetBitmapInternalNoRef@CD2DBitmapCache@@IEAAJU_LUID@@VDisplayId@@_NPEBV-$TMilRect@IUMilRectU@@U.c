/*
 * XREFs of ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x180077EBC
 * Callers:
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800459A0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800780D4 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180179BD0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x180077410 (-IsHardwareProtected@CD2DBitmap@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x180077440 (-GetAdapterLuid@CD2DBitmap@@UEBA-AU_LUID@@XZ.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180077B9C (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180077CC0 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?GetAdapterLuid@CHwTextureRenderTarget@@UEBA?AU_LUID@@XZ @ 0x180078360 (-GetAdapterLuid@CHwTextureRenderTarget@@UEBA-AU_LUID@@XZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z @ 0x18013DAE8 (-GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternalNoRef(
        CD2DBitmapCache *this,
        struct _LUID a2,
        int a3,
        char a4,
        __m128i *a5,
        _QWORD *a6)
{
  _QWORD *v6; // r15
  __int64 v8; // rcx
  char v9; // si
  CHwTextureRenderTarget *v12; // rcx
  struct _LUID (__fastcall *v13)(CHwTextureRenderTarget *__hidden); // rax
  struct _LUID AdapterLuid; // rax
  _DWORD *v15; // rax
  CD2DBitmap *v16; // rcx
  bool (__fastcall *v17)(CD2DBitmap *); // rax
  char IsHardwareProtected; // al
  char *v19; // rdi
  unsigned int v20; // ebx
  unsigned int v22; // esi
  struct CSecondaryD2DBitmap *v23; // rdi
  _DWORD *v24; // rax
  int updated; // eax
  int v26; // r9d
  unsigned __int32 v27; // r14d
  unsigned __int32 v28; // r15d
  unsigned __int32 v29; // r12d
  unsigned int v30; // esi
  unsigned int v31; // [rsp+20h] [rbp-50h]
  __m128i v33; // [rsp+40h] [rbp-30h] BYREF
  struct CSecondaryD2DBitmap *v34; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int32 v35; // [rsp+58h] [rbp-18h]
  unsigned __int32 v36; // [rsp+5Ch] [rbp-14h]
  unsigned int v37; // [rsp+60h] [rbp-10h] BYREF
  LONG HighPart; // [rsp+ACh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v6 = a6;
  v8 = *((_QWORD *)this + 4);
  v9 = a4;
  *a6 = 0LL;
  if ( !v8 )
  {
    v20 = -2003292412;
    v31 = 161;
    goto LABEL_30;
  }
  if ( a5 )
  {
    v33 = *a5;
    v27 = v33.m128i_i32[1] - 1;
    v28 = v33.m128i_i32[2] + 1;
    v29 = v33.m128i_i32[3] + 1;
    v30 = _mm_cvtsi128_si32(v33) - 1;
    CD2DBitmapCache::GetBitmapRect(this, (struct MilRectU *)&v34);
    if ( (unsigned int)v34 > v30 )
      v30 = (unsigned int)v34;
    v33.m128i_i32[0] = v30;
    if ( HIDWORD(v34) > v27 )
      v27 = HIDWORD(v34);
    v33.m128i_i32[1] = v27;
    if ( v35 < v28 )
      v28 = v35;
    v33.m128i_i32[2] = v28;
    if ( v36 < v29 )
      v29 = v36;
    v33.m128i_i32[3] = v29;
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v33) )
      v33 = 0uLL;
    if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v33) )
    {
      v6 = a6;
      v9 = a4;
      goto LABEL_4;
    }
    v20 = -2147024809;
    v31 = 192;
LABEL_30:
    v26 = v20;
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v31);
    return v20;
  }
  v37 = 0;
  LODWORD(v34) = 0;
  (*(void (__fastcall **)(__int64, unsigned int *, struct CSecondaryD2DBitmap **))(*(_QWORD *)v8 + 32LL))(
    v8,
    &v37,
    &v34);
  v33.m128i_i64[1] = __PAIR64__((unsigned int)v34, v37);
  v33.m128i_i64[0] = 0LL;
LABEL_4:
  v12 = (CHwTextureRenderTarget *)*((_QWORD *)this + 5);
  if ( !v12
    || ((v13 = *(struct _LUID (__fastcall **)(CHwTextureRenderTarget *__hidden))(*(_QWORD *)v12 + 48LL),
         (char *)v13 != (char *)CD2DBitmap::GetAdapterLuid)
      ? (v13 != CHwTextureRenderTarget::GetAdapterLuid
       ? (AdapterLuid = (struct _LUID)((__int64 (__fastcall *)(CHwTextureRenderTarget *, struct CSecondaryD2DBitmap **))v13)(
                                        v12,
                                        &v34))
       : (AdapterLuid = CHwTextureRenderTarget::GetAdapterLuid(v12)))
      : (AdapterLuid = CD2DBitmap::GetAdapterLuid(v12, &v34)),
        *(_DWORD *)AdapterLuid.LowPart != a2.LowPart
     || *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) != HighPart
     || (v15 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)this + 4)
                                                                                          + 40LL))(
                           *((_QWORD *)this + 4),
                           &v34),
         *v15 != DisplayId::None)
     && *v15 != a3
     && a3 != DisplayId::All
     || ((v16 = (CD2DBitmap *)*((_QWORD *)this + 5),
          v17 = *(bool (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v16 + 64LL),
          v17 != CD2DBitmap::IsHardwareProtected)
       ? (IsHardwareProtected = ((__int64 (*)(void))v17)())
       : (IsHardwareProtected = CD2DBitmap::IsHardwareProtected(v16)),
         IsHardwareProtected && !v9)) )
  {
    v22 = 0;
    v34 = 0LL;
    if ( *((_DWORD *)this + 20) )
    {
      while ( 1 )
      {
        v23 = *(struct CSecondaryD2DBitmap **)(*((_QWORD *)this + 7) + 8LL * v22);
        v24 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, unsigned int *))(*((_QWORD *)v23 + 13) + 48LL))(
                          (__int64)v23 + 104,
                          &v37);
        if ( *v24 == a2.LowPart && v24[1] == HighPart )
          break;
        if ( ++v22 >= *((_DWORD *)this + 20) )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      updated = CD2DBitmapCache::CreateAndCacheBitmap(this, a2, &v34);
      v20 = updated;
      if ( updated < 0 )
      {
        v31 = 235;
LABEL_53:
        v26 = updated;
        goto LABEL_54;
      }
      v23 = v34;
    }
    updated = CD2DBitmapCache::UpdateCachedBitmap(this, (__int64)&v33, (__int64)v23);
    v20 = updated;
    if ( updated >= 0 )
    {
      if ( v23 )
        v19 = (char *)v23 + 104;
      else
        v19 = 0LL;
      goto LABEL_14;
    }
    v31 = 238;
    goto LABEL_53;
  }
  v19 = (char *)*((_QWORD *)this + 5);
  v20 = 0;
LABEL_14:
  *v6 = v19;
  return v20;
}
