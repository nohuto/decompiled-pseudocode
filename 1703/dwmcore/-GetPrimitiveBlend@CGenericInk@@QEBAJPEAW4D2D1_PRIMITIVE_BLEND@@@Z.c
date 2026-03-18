/*
 * XREFs of ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18017073C
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801702E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 *     ?GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x18017071C (-GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::GetPrimitiveBlend(CGenericInk *this, enum D2D1_PRIMITIVE_BLEND *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int IDirectInkPartner; // eax
  struct IDCompositionDirectInkPartner *v7; // [rsp+40h] [rbp+8h] BYREF
  CD2DGenericInk *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  v3 = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
         (CGenericInk *)((char *)this + 64),
         0LL,
         &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x138u);
  }
  else
  {
    IDirectInkPartner = CD2DGenericInk::GetIDirectInkPartner(v8, &v7);
    v4 = IDirectInkPartner;
    if ( IDirectInkPartner < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IDirectInkPartner, 0x13Au);
    else
      *a2 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *))(*(_QWORD *)v7 + 24LL))(v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v7);
  return v4;
}
