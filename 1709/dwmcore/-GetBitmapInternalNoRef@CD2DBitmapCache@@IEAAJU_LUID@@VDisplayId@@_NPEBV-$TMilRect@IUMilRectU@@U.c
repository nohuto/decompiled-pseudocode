/*
 * XREFs of ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18008A438
 * Callers:
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004D7E0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008A660 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18008A8A0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x18004C370 (-IsHardwareProtected@CD2DBitmap@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x18004C460 (-GetAdapterLuid@CD2DBitmap@@UEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18008A168 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18008A28C (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?GetAdapterLuid@CHwTextureRenderTarget@@UEBA?AU_LUID@@XZ @ 0x18008FB50 (-GetAdapterLuid@CHwTextureRenderTarget@@UEBA-AU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z @ 0x18011B23C (-GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z.c)
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
  char *v7; // r13
  CD2DBitmapCache *v8; // rsi
  __int64 v9; // rcx
  char v10; // r14
  CD2DBitmap *v13; // rcx
  struct _LUID (__fastcall *v14)(CHwTextureRenderTarget *__hidden); // rax
  struct _LUID AdapterLuid; // rax
  _DWORD *v16; // rax
  CD2DBitmap *v17; // rcx
  bool (__fastcall *v18)(CD2DBitmap *); // rax
  char v19; // al
  unsigned int v20; // ebx
  unsigned int v22; // r14d
  struct CSecondaryD2DBitmap *v23; // rdi
  CD2DBitmap *v24; // rcx
  __int64 (__fastcall *v25)(CD2DBitmap *, CD2DBitmapCache **); // rax
  __int64 v26; // rax
  int updated; // eax
  DWORD v28; // r9d
  unsigned __int32 v29; // r14d
  unsigned __int32 v30; // r15d
  unsigned __int32 v31; // r12d
  unsigned int v32; // esi
  unsigned int v33; // [rsp+20h] [rbp-60h]
  CD2DBitmapCache *v35; // [rsp+38h] [rbp-48h] BYREF
  __m128i v36; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v37[4]; // [rsp+50h] [rbp-30h] BYREF
  __m128i v38; // [rsp+60h] [rbp-20h] BYREF
  struct CSecondaryD2DBitmap *v39; // [rsp+70h] [rbp-10h] BYREF
  LONG HighPart; // [rsp+BCh] [rbp+3Ch]

  HighPart = a2.HighPart;
  v6 = a6;
  v7 = 0LL;
  v8 = this;
  v35 = this;
  v9 = *((_QWORD *)this + 4);
  v10 = a4;
  *a6 = 0LL;
  if ( !v9 )
  {
    v20 = -2003292412;
    v33 = 161;
    goto LABEL_32;
  }
  if ( a5 )
  {
    v36 = *a5;
    v29 = v36.m128i_i32[1] - 1;
    v30 = v36.m128i_i32[2] + 1;
    v31 = v36.m128i_i32[3] + 1;
    v32 = _mm_cvtsi128_si32(v36) - 1;
    CD2DBitmapCache::GetBitmapRect(v35, (struct MilRectU *)&v38);
    if ( v38.m128i_i32[0] > v32 )
      v32 = v38.m128i_i32[0];
    v36.m128i_i32[0] = v32;
    if ( v38.m128i_i32[1] > v29 )
      v29 = v38.m128i_u32[1];
    v36.m128i_i32[1] = v29;
    if ( v38.m128i_i32[2] < v30 )
      v30 = v38.m128i_u32[2];
    v36.m128i_i32[2] = v30;
    if ( v38.m128i_i32[3] < v31 )
      v31 = v38.m128i_u32[3];
    v36.m128i_i32[3] = v31;
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v36) )
      v36 = 0uLL;
    if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v36) )
    {
      v8 = v35;
      v6 = a6;
      v10 = a4;
      goto LABEL_4;
    }
    v20 = -2147024809;
    v33 = 192;
LABEL_32:
    v28 = v20;
LABEL_56:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, v33);
    return v20;
  }
  v37[0] = 0;
  LODWORD(v35) = 0;
  (*(void (__fastcall **)(__int64, _DWORD *, CD2DBitmapCache **))(*(_QWORD *)v9 + 32LL))(v9, v37, &v35);
  v36.m128i_i64[1] = __PAIR64__((unsigned int)v35, v37[0]);
  v36.m128i_i64[0] = 0LL;
LABEL_4:
  v13 = (CD2DBitmap *)*((_QWORD *)v8 + 5);
  if ( v13 )
  {
    v14 = *(struct _LUID (__fastcall **)(CHwTextureRenderTarget *__hidden))(*(_QWORD *)v13 + 48LL);
    if ( (char *)v14 == (char *)CD2DBitmap::GetAdapterLuid )
      AdapterLuid = CD2DBitmap::GetAdapterLuid(v13, &v35);
    else
      AdapterLuid = v14 == CHwTextureRenderTarget::GetAdapterLuid
                  ? CHwTextureRenderTarget::GetAdapterLuid(v13)
                  : (struct _LUID)((__int64 (__fastcall *)(CD2DBitmap *, CD2DBitmapCache **))v14)(v13, &v35);
    if ( *(_DWORD *)AdapterLuid.LowPart == a2.LowPart && *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == HighPart )
    {
      v16 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, CD2DBitmapCache **))(**((_QWORD **)v8 + 4) + 40LL))(
                        *((_QWORD *)v8 + 4),
                        &v35);
      if ( *v16 == DisplayId::None || *v16 == a3 || a3 == DisplayId::All )
      {
        v17 = (CD2DBitmap *)*((_QWORD *)v8 + 5);
        v18 = *(bool (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v17 + 64LL);
        v19 = v18 == CD2DBitmap::IsHardwareProtected ? CD2DBitmap::IsHardwareProtected(v17) : ((__int64 (*)(void))v18)();
        if ( !v19 || v10 )
        {
          v20 = 0;
          *v6 = *((_QWORD *)v8 + 5);
          return v20;
        }
      }
    }
  }
  v22 = 0;
  v39 = 0LL;
  if ( *((_DWORD *)v8 + 20) )
  {
    while ( 1 )
    {
      v23 = *(struct CSecondaryD2DBitmap **)(*((_QWORD *)v8 + 7) + 8LL * v22);
      v24 = (struct CSecondaryD2DBitmap *)((char *)v23 + 104);
      v25 = *(__int64 (__fastcall **)(CD2DBitmap *, CD2DBitmapCache **))(*((_QWORD *)v23 + 13) + 48LL);
      if ( (char *)v25 == (char *)CD2DBitmap::GetAdapterLuid )
        v26 = (__int64)CD2DBitmap::GetAdapterLuid(v24, &v35);
      else
        v26 = v25(v24, &v35);
      if ( *(_DWORD *)v26 == a2.LowPart && *(_DWORD *)(v26 + 4) == HighPart )
        break;
      if ( ++v22 >= *((_DWORD *)v8 + 20) )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_27:
    updated = CD2DBitmapCache::CreateAndCacheBitmap(v8, a2, &v39);
    v20 = updated;
    if ( updated < 0 )
    {
      v33 = 235;
LABEL_55:
      v28 = updated;
      goto LABEL_56;
    }
    v23 = v39;
  }
  v38 = v36;
  updated = CD2DBitmapCache::UpdateCachedBitmap(v8, (const struct MilRectU *)&v38, (__int64)v23);
  v20 = updated;
  if ( updated < 0 )
  {
    v33 = 238;
    goto LABEL_55;
  }
  if ( v23 )
    v7 = (char *)v23 + 104;
  *v6 = v7;
  return v20;
}
