/*
 * XREFs of ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800183A0
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180077B9C (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 48LL))(
          *((_QWORD *)this + 6) + 16LL,
          0LL,
          v5) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 56LL))(
           *((_QWORD *)this + 6) + 16LL,
           v5,
           *((_QWORD *)this + 4));
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x19Au);
  }
  return v2;
}
