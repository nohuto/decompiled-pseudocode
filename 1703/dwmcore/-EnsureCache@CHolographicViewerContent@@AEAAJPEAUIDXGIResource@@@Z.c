/*
 * XREFs of ?EnsureCache@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A533C
 * Callers:
 *     ?Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5190 (-Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800793BC (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicViewerContent::EnsureCache(CD3DDeviceLevel1 **this, struct IDXGIResource *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-29h] BYREF
  struct ID3D11Texture2D *v11; // [rsp+38h] [rbp-21h] BYREF
  __int128 v12; // [rsp+40h] [rbp-19h]
  _BYTE v13[48]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v14; // [rsp+80h] [rbp+27h]

  v2 = 0;
  v3 = (__int64 *)(this + 11);
  if ( !this[11] )
  {
    v11 = 0LL;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v10);
    v6 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v10);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA2u);
    }
    else
    {
      *(_QWORD *)&v12 = "DWM Holographic Viewer Content";
      DWORD2(v12) = 30;
      v14 = v12;
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 80LL))(v10, v13);
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v11);
      v7 = CD3DDeviceLevel1::CreateTexture(this[8], (const struct DWM_TEXTURE2D_DESC *)v13, 0LL, &v11);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA7u);
      }
      else
      {
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(v3);
        v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))v11->lpVtbl->QueryInterface)(
               v11,
               &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
               v3);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xA8u);
      }
    }
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v11);
  }
  return v2;
}
