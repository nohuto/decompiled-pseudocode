/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18014B7D0
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016F8A0 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v15; // [rsp+20h] [rbp-38h]

  v4 = (unsigned __int64)this + 8;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    v9 = -2147467263;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x97Au);
    return v9;
  }
  v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v9 = v10;
  if ( v10 < 0 )
  {
    v15 = 2429;
    goto LABEL_12;
  }
  v11 = *((_DWORD *)this + 67);
  v12 = 0;
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( v13 )
    {
      if ( v13 == 3 )
        v12 = 2;
    }
    else
    {
      v12 = 1;
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct ID2D1Ink *, const struct _D3DCOLORVALUE *, struct ID2D1InkStyle *, bool, int))(**((_QWORD **)this + 49) + 184LL))(
          *((_QWORD *)this + 49),
          v4 & -(__int64)(this != 0LL),
          a2,
          a3,
          a4,
          *((_DWORD *)this + 66) != 0,
          v12);
  v9 = v10;
  if ( v10 < 0 )
  {
    v15 = 2437;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v15);
  }
  return v9;
}
