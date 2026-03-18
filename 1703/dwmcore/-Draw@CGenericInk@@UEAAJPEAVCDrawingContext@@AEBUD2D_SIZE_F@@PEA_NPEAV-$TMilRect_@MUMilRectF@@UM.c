/*
 * XREFs of ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180170250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkPartner@@@Z @ 0x18014B600 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkPartner@@@Z.c)
 *     ?GetDirectInkPartner@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x180170618 (-GetDirectInkPartner@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::Draw(CGenericInk *a1, struct ID2DContext **a2)
{
  int DirectInkPartner; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct IDCompositionDirectInkPartner *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  DirectInkPartner = CGenericInk::GetDirectInkPartner(a1, a2[49], &v8);
  v5 = DirectInkPartner;
  if ( DirectInkPartner < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DirectInkPartner, 0xA2u);
  }
  else
  {
    v6 = CDrawingContext::DrawGenericInk((CDrawingContext *)a2, v8);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA3u);
    else
      **((_DWORD **)a1 + 28) = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v8);
  return v5;
}
