/*
 * XREFs of ?Draw@CPencil@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016FB10
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawPencil@CDrawingContext@@UEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@23M@Z @ 0x18014BDA0 (-DrawPencil@CDrawingContext@@UEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCComposition.c)
 *     ?GetD2DPencil@CPencil@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PencilStroke@@@Z @ 0x18016FEF4 (-GetD2DPencil@CPencil@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PencilStroke@@@Z.c)
 */

__int64 __fastcall CPencil::Draw(__int64 a1, struct ID2DContext **a2)
{
  int D2DPencil; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct ID2D1PencilStroke *v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  D2DPencil = CPencil::GetD2DPencil((CPencil *)a1, a2[49], &v8);
  v5 = D2DPencil;
  if ( D2DPencil < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DPencil, 0xE0u);
  }
  else
  {
    v6 = CDrawingContext::DrawPencil(
           (CDrawingContext *)a2,
           v8,
           (const struct D2D1_PENCIL_STYLE *)(a1 + 228),
           *(struct CCompositionSurfaceBitmap **)(a1 + 136),
           (const struct tagRECT *)(a1 + 144),
           *(struct CCompositionSurfaceBitmap **)(a1 + 160),
           (const struct tagRECT *)(a1 + 168),
           *(float *)(a1 + 264));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE9u);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v8);
  return v5;
}
