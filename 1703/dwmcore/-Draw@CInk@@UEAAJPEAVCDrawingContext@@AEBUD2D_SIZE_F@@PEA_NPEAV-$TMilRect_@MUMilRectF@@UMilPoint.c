/*
 * XREFs of ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016F8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18014B7D0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18016F944 (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::Draw(__int64 a1, struct ID2DContext **a2)
{
  int D2DInk; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct ID2D1InkStyle *v8; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  D2DInk = CInk::GetD2DInk((CInk *)a1, a2[49], &v9, &v8);
  v5 = D2DInk;
  if ( D2DInk < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DInk, 0xFEu);
  }
  else
  {
    v6 = CDrawingContext::DrawInk((CDrawingContext *)a2, v9, (const struct _D3DCOLORVALUE *)(a1 + 136), v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x100u);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v9);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v8);
  return v5;
}
