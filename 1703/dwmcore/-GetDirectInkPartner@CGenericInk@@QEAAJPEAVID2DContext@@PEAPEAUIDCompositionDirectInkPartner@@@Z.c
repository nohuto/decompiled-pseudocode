/*
 * XREFs of ?GetDirectInkPartner@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x180170618
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180170250 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801702E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 *     ?GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x18017071C (-GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::GetDirectInkPartner(
        CGenericInk *this,
        struct ID2DContext *a2,
        struct IDCompositionDirectInkPartner **a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int IDirectInkPartner; // eax
  struct IDCompositionDirectInkPartner *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  struct IDCompositionDirectInkPartner *v11; // [rsp+40h] [rbp+8h] BYREF
  CD2DGenericInk *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  *a3 = 0LL;
  v5 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v5;
  if ( (v5 & 6) == 2 )
  {
    IDirectInkPartner = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
                          (CGenericInk *)((char *)this + 64),
                          a2,
                          &v12);
    v6 = IDirectInkPartner;
    if ( IDirectInkPartner < 0 )
    {
      v10 = 295;
    }
    else
    {
      IDirectInkPartner = CD2DGenericInk::GetIDirectInkPartner(v12, &v11);
      v6 = IDirectInkPartner;
      if ( IDirectInkPartner >= 0 )
      {
        v8 = v11;
        v11 = 0LL;
        *a3 = v8;
        goto LABEL_9;
      }
      v10 = 296;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, IDirectInkPartner, v10);
    goto LABEL_9;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x124u);
LABEL_9:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v11);
  return v6;
}
