/*
 * XREFs of ?DrawPencil@CDrawingContext@@UEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@23M@Z @ 0x18014BDA0
 * Callers:
 *     ?Draw@CPencil@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016FB10 (-Draw@CPencil@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawPencil(
        CDrawingContext *this,
        struct ID2D1PencilStroke *a2,
        const struct D2D1_PENCIL_STYLE *a3,
        struct CCompositionSurfaceBitmap *a4,
        const struct tagRECT *a5,
        struct CCompositionSurfaceBitmap *a6,
        const struct tagRECT *a7,
        float a8)
{
  unsigned __int64 v8; // rsi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r9
  int v17; // ecx
  unsigned int v19; // [rsp+20h] [rbp-58h]

  v8 = (unsigned __int64)this + 8;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    v13 = -2147467263;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x999u);
    return v13;
  }
  v14 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v13 = v14;
  if ( v14 < 0 )
  {
    v19 = 2460;
    goto LABEL_12;
  }
  v15 = *((_DWORD *)this + 67);
  v16 = 0LL;
  if ( v15 )
  {
    v17 = v15 - 1;
    if ( v17 )
    {
      if ( v17 == 3 )
        v16 = 2LL;
    }
    else
    {
      v16 = 1LL;
    }
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, __int64, struct ID2D1PencilStroke *, const struct D2D1_PENCIL_STYLE *, struct CCompositionSurfaceBitmap *, const struct tagRECT *, struct CCompositionSurfaceBitmap *, const struct tagRECT *, _DWORD))(**((_QWORD **)this + 49) + 208LL))(
          *((_QWORD *)this + 49),
          v8 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          *((_DWORD *)this + 66) != 0,
          v16,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          LODWORD(a8));
  v13 = v14;
  if ( v14 < 0 )
  {
    v19 = 2472;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v19);
  }
  return v13;
}
