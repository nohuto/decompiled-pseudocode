/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1801600C0
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180190E50 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180066600 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECC0 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  float v12; // xmm1_4
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int v18; // [rsp+20h] [rbp-78h]
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF

  v4 = (unsigned __int64)this + 8;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    v9 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467263, 0x814u);
    return v9;
  }
  v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v9 = v10;
  if ( v10 < 0 )
  {
    v18 = 2071;
    goto LABEL_10;
  }
  v11 = *((_DWORD *)this + 776);
  v19 = *(_OWORD *)&a3->r;
  if ( v11 )
    v12 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v11 - 1));
  else
    v12 = FLOAT_1_0;
  v13 = *((_DWORD *)this + 65);
  *((float *)&v19 + 3) = *((float *)&v19 + 3) * v12;
  v14 = D2DPrimitiveBlendFromMilCompositingMode(v13);
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, struct ID2D1Ink *, __int128 *, struct ID2D1InkStyle *, bool, int))(v15 + 176))(
          v16,
          v4 & -(__int64)(this != 0LL),
          a2,
          &v19,
          a4,
          *((_DWORD *)this + 64) != 0,
          v14);
  v9 = v10;
  if ( v10 < 0 )
  {
    v18 = 2083;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v18);
  }
  return v9;
}
