/*
 * XREFs of ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18008A0D0
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18008A168 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180086A40 (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::EnsureSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v1; // ebx
  const struct PixelFormatInfo *v3; // rax
  signed int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-24h] BYREF
  _BYTE v8[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 6) )
  {
    (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 4) + 32LL))(
      *((_QWORD *)this + 4),
      &v7,
      &v6);
    v3 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 4) + 24LL))(
                                           *((_QWORD *)this + 4),
                                           v8);
    v4 = CSecondarySysmemBitmap::Create(v7, v6, v3, (struct CSecondarySysmemBitmap **)this + 6);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x186u);
  }
  return v1;
}
