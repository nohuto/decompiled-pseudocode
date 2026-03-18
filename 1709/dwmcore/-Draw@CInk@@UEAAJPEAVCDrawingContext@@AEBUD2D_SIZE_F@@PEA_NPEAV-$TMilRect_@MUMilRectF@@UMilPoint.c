/*
 * XREFs of ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168520
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18013CB80 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180168908 (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::Draw(__int64 a1, struct ID2DContext **a2)
{
  signed int D2DInk; // eax
  unsigned int v5; // ebx
  signed int v6; // eax
  struct ID2D1InkStyle *v8; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  D2DInk = CInk::GetD2DInk((CInk *)a1, a2[48], &v9, &v8);
  v5 = D2DInk;
  if ( D2DInk < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D2DInk, 0xFEu);
  }
  else
  {
    v6 = CDrawingContext::DrawInk((CDrawingContext *)a2, v9, (const struct _D3DCOLORVALUE *)(a1 + 120), v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x100u);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v9);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v8);
  return v5;
}
