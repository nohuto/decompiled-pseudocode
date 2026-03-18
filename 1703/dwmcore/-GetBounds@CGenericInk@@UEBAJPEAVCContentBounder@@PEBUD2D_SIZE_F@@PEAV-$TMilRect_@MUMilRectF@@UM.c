/*
 * XREFs of ?GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180170540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801702E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 *     ?GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x18017071C (-GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int IDirectInkPartner; // eax
  int v8; // eax
  struct IDCompositionDirectInkPartner *v10; // [rsp+30h] [rbp-30h] BYREF
  CD2DGenericInk *v11; // [rsp+38h] [rbp-28h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v12 = 0uLL;
  v5 = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
         (struct IDeviceResourceNotify *)(a1 + 64),
         0LL,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB8u);
  }
  else
  {
    IDirectInkPartner = CD2DGenericInk::GetIDirectInkPartner(v11, &v10);
    v6 = IDirectInkPartner;
    if ( IDirectInkPartner < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IDirectInkPartner, 0xB9u);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *, __int128 *))(*(_QWORD *)v10 + 32LL))(
             v10,
             &v12);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBAu);
      else
        *a4 = v12;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v10);
  return v6;
}
