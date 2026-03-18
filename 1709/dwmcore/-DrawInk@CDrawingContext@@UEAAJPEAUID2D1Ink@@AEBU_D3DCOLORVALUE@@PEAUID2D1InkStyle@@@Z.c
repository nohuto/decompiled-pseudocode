/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18013CB80
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168520 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180036CA0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v9; // ebx
  signed int v10; // eax
  int v11; // eax
  float v12; // xmm1_4
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  unsigned int v17; // [rsp+20h] [rbp-78h]
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF

  v4 = (unsigned __int64)this + 8;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    v9 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004001, 0x88Cu);
    return v9;
  }
  v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v9 = v10;
  if ( v10 < 0 )
  {
    v17 = 2191;
    goto LABEL_15;
  }
  v11 = *((_DWORD *)this + 776);
  v18 = *(_OWORD *)&a3->r;
  if ( v11 )
    v12 = *(float *)(*((_QWORD *)this + 390) + 4LL * (unsigned int)(v11 - 1));
  else
    v12 = FLOAT_1_0;
  v13 = *((_DWORD *)this + 65);
  v14 = 0;
  *((float *)&v18 + 3) = *((float *)&v18 + 3) * v12;
  if ( v13 )
  {
    v15 = v13 - 1;
    if ( v15 )
    {
      if ( v15 == 3 )
        v14 = 2;
    }
    else
    {
      v14 = 1;
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct ID2D1Ink *, __int128 *, struct ID2D1InkStyle *, bool, int))(**((_QWORD **)this + 48) + 168LL))(
          *((_QWORD *)this + 48),
          v4 & -(__int64)(this != 0LL),
          a2,
          &v18,
          a4,
          *((_DWORD *)this + 64) != 0,
          v14);
  v9 = v10;
  if ( v10 < 0 )
  {
    v17 = 2203;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, v17);
  }
  return v9;
}
