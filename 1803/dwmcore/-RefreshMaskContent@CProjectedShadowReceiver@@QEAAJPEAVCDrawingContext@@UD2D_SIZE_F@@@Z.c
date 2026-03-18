/*
 * XREFs of ?RefreshMaskContent@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z @ 0x1801A1888
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowReceiver::RefreshMaskContent(
        CProjectedShadowReceiver *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  float v10; // xmm2_4
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_SIZE_F v13; // [rsp+38h] [rbp-28h] BYREF
  struct D2D_SIZE_F v14; // [rsp+40h] [rbp-20h] BYREF
  float v15; // [rsp+48h] [rbp-18h]
  float v16; // [rsp+4Ch] [rbp-14h]

  v14 = a3;
  v4 = *((_QWORD *)this + 12);
  v5 = 0;
  v13 = a3;
  if ( v4 )
  {
    v12[0] = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, _BYTE *))(*(_QWORD *)v4 + 272LL))(
            v4,
            a2,
            v12)
      || v12[0] )
    {
      return v5;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, struct D2D_SIZE_F *))(**((_QWORD **)this + 12)
                                                                                          + 288LL))(
           *((_QWORD *)this + 12),
           a2,
           &v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x16Au);
      return v5;
    }
  }
  v8 = *((_QWORD *)this + 13);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct D2D_SIZE_F *))(*(_QWORD *)v8 + 120LL))(
           v8,
           0LL,
           0LL,
           &v14);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x171u);
    }
    else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13.width - (float)(v15 - v14.width))) & _xmm) > 0.015625
           || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13.height - (float)(v16 - v14.height))) & _xmm),
               v10 > 0.015625) )
    {
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)this + 13);
    }
  }
  return v5;
}
