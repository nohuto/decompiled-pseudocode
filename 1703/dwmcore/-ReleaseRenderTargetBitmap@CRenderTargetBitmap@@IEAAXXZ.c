/*
 * XREFs of ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800474A8
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180016590 (-GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11S.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180047028 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x180047224 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180047358 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015AA60 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015ABD0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1801B75D8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveResourceNotifier@CHwTextureRenderTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800493B0 (-RemoveResourceNotifier@CHwTextureRenderTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C25E8 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::ReleaseRenderTargetBitmap(CRenderTargetBitmap *this)
{
  __int64 v2; // rcx
  const struct IDeviceResourceNotify *v3; // rdx
  __int64 (__fastcall *v4)(CHwTextureRenderTarget *__hidden, const struct IDeviceResourceNotify *); // rax
  CHwTextureRenderTarget *v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 120);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 136);
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( *((_QWORD *)this + 16) )
  {
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>((char *)this + 128, &v5);
    v3 = (CRenderTargetBitmap *)((char *)this + 24);
    v4 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, const struct IDeviceResourceNotify *))(*(_QWORD *)v5 + 32LL);
    if ( v4 == CHwTextureRenderTarget::RemoveResourceNotifier )
      CHwTextureRenderTarget::RemoveResourceNotifier(v5, v3);
    else
      v4(v5, v3);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 128);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v5);
  }
  if ( !*((_BYTE *)this + 200) )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 0LL);
}
