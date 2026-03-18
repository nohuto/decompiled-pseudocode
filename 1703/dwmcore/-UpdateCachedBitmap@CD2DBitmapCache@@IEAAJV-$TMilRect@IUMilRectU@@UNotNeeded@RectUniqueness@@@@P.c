/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180024FC4
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180024E9C (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180024F1C (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(CD2DBitmapCache *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // eax
  int updated; // eax
  int v11; // eax
  _BYTE v12[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3 + 264;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)(a3 + 264) + 48LL))(a3 + 264, a2, v12) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 88LL))(*((_QWORD *)this + 6)) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, v12, *((_QWORD *)this + 6));
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x15Fu);
    }
    else
    {
      v9 = CD2DBitmapCache::EnsureSysmemBitmap(this);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x163u);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 8) + 16LL)
                                                                            + 48LL))(
                  *((_QWORD *)this + 8) + 16LL,
                  a2,
                  0LL)
             || (updated = CD2DBitmapCache::UpdateSysmemBitmap(this), v6 = updated, updated >= 0) )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v3 + 56LL))(
                v3,
                v12,
                (*((_QWORD *)this + 8) + 96LL) & -(__int64)(*((_QWORD *)this + 8) != 0LL));
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x16Du);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x167u);
      }
    }
  }
  return v6;
}
