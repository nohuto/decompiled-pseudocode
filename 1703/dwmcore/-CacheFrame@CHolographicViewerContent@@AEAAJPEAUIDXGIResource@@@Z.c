/*
 * XREFs of ?CacheFrame@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A4F70
 * Callers:
 *     ?Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5190 (-Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@0@Z @ 0x1800CDE40 (-CopyResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicViewerContent::CacheFrame(CHolographicViewerContent *this, struct IDXGIResource *a2)
{
  unsigned int v2; // ebx
  int v6; // eax
  int v7; // eax
  struct ID3D11Resource *v8; // [rsp+58h] [rbp+28h] BYREF
  struct ID3D11Resource *v9; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  if ( !a2 )
    return 2147942487LL;
  if ( *((_QWORD *)this + 8) )
  {
    if ( !*((_QWORD *)this + 11) )
      return 2147500037LL;
    v9 = 0LL;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v8);
    v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
           &v8);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x12Au);
    }
    else
    {
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v9);
      v7 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, struct ID3D11Resource **))a2->lpVtbl->QueryInterface)(
             a2,
             &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
             &v9);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x12Bu);
      else
        CD3DDeviceLevel1::CopyResource(*((CD3DDeviceLevel1 **)this + 8), v8, v9);
    }
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v8);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v9);
  }
  return v2;
}
