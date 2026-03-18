/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkPartner@@@Z @ 0x18014B600
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180170250 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(CDrawingContext *this, struct IDCompositionDirectInkPartner *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // r9
  int v9; // ecx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v2 = (unsigned __int64)this + 8;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    v5 = -2147467263;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x9B6u);
    return v5;
  }
  v6 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 2489;
    goto LABEL_12;
  }
  v7 = *((_DWORD *)this + 67);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      if ( v9 == 3 )
        v8 = 2LL;
    }
    else
    {
      v8 = 1LL;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, __int64, struct IDCompositionDirectInkPartner *))(**((_QWORD **)this + 49) + 224LL))(
         *((_QWORD *)this + 49),
         v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
         *((_DWORD *)this + 66) != 0,
         v8,
         a2);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 2495;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v11);
  }
  return v5;
}
