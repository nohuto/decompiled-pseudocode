/*
 * XREFs of ?GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x180139A18
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180066FC4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180140E68 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180081A04 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x180081D04 (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaneCaptureRenderTargetEngine::GetDXGIResourceAndSubResourceIndex(
        CPlaneCaptureRenderTargetEngine *this,
        struct IDXGIResource **a2,
        unsigned int *a3)
{
  signed int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  signed int v9; // eax
  signed int DXGIResource; // eax
  CD3DTexture *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(CPlaneCaptureRenderTargetEngine *))(*(_QWORD *)this + 264LL))(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x95u);
  }
  else
  {
    v8 = **((_QWORD **)this + 27);
    Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v12);
    v9 = (*(__int64 (__fastcall **)(__int64, CD3DTexture **))(*(_QWORD *)v8 + 200LL))(v8, &v12);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x97u);
    }
    else
    {
      DXGIResource = CD3DTexture::GetDXGIResource(v12, a2);
      v7 = DXGIResource;
      if ( DXGIResource < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DXGIResource, 0x98u);
      else
        *a3 = *((_DWORD *)v12 + 43);
    }
  }
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v12);
  return v7;
}
