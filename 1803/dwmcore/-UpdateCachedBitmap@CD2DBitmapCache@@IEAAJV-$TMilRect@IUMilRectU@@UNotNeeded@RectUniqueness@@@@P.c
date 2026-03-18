/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180077B9C
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x180077EBC (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800183A0 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180018420 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180083790 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(CD2DBitmapCache *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(__int64, __int64, _BYTE *); // rax
  char IsValid; // al
  int v9; // eax
  int v11; // eax
  int updated; // eax
  int v13; // eax
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3 + 264;
  v5 = 0;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)(a3 + 264) + 48LL);
  if ( (char *)v7 == (char *)CSecondaryBitmap::IsValid )
    IsValid = CSecondaryBitmap::IsValid(v3, a2, v14);
  else
    IsValid = v7(v3, a2, v14);
  if ( !IsValid )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4)) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, v14, *((_QWORD *)this + 4));
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x162u);
    }
    else
    {
      v11 = CD2DBitmapCache::EnsureSysmemBitmap(this);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x166u);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL)
                                                                            + 48LL))(
                  *((_QWORD *)this + 6) + 16LL,
                  a2,
                  0LL)
             || (updated = CD2DBitmapCache::UpdateSysmemBitmap(this), v5 = updated, updated >= 0) )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v3 + 56LL))(
                v3,
                v14,
                (*((_QWORD *)this + 6) + 96LL) & -(__int64)(*((_QWORD *)this + 6) != 0LL));
        v5 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x170u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x16Au);
      }
    }
  }
  return v5;
}
