/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18008A168
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18008A438 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180088A20 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18008A050 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18008A0D0 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(CD2DBitmapCache *this, const struct MilRectU *a2, __int64 a3)
{
  const struct FastRegion::Internal::CRgnData **v3; // rsi
  unsigned int v5; // ebx
  char (__fastcall *v7)(const struct FastRegion::Internal::CRgnData **, const struct MilRectU *, __int64); // rax
  char IsValid; // al
  signed int v9; // eax
  signed int v11; // eax
  signed int updated; // eax
  signed int v13; // eax
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (const struct FastRegion::Internal::CRgnData **)(a3 + 264);
  v5 = 0;
  v7 = *(char (__fastcall **)(const struct FastRegion::Internal::CRgnData **, const struct MilRectU *, __int64))(*(_QWORD *)(a3 + 264) + 48LL);
  if ( v7 == CSecondaryBitmap::IsValid )
    IsValid = CSecondaryBitmap::IsValid(v3, a2, (__int64)v14);
  else
    IsValid = v7(v3, a2, (__int64)v14);
  if ( !IsValid )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4)) )
    {
      v9 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **, _BYTE *, _QWORD))*v3 + 7))(
             v3,
             v14,
             *((_QWORD *)this + 4));
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x162u);
    }
    else
    {
      v11 = CD2DBitmapCache::EnsureSysmemBitmap(this);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x166u);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct MilRectU *, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL)
                                                                                            + 48LL))(
                  *((_QWORD *)this + 6) + 16LL,
                  a2,
                  0LL)
             || (updated = CD2DBitmapCache::UpdateSysmemBitmap(this), v5 = updated, updated >= 0) )
      {
        v13 = (*((__int64 (__fastcall **)(const struct FastRegion::Internal::CRgnData **, _BYTE *, __int64))*v3 + 7))(
                v3,
                v14,
                (*((_QWORD *)this + 6) + 96LL) & -(__int64)(*((_QWORD *)this + 6) != 0LL));
        v5 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x170u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x16Au);
      }
    }
  }
  return v5;
}
