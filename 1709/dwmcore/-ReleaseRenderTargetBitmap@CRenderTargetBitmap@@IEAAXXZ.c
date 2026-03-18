/*
 * XREFs of ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008B158
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18008B5D4 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18008B778 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008B8B4 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150210 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150370 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1801D4320 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x180088900 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?RemoveResourceNotifier@CHwTextureRenderTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18008FA80 (-RemoveResourceNotifier@CHwTextureRenderTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::ReleaseRenderTargetBitmap(CRenderTargetBitmap *this)
{
  const struct IDeviceResourceNotify *v2; // rdx
  __int64 (__fastcall *v3)(CHwTextureRenderTarget *__hidden, const struct IDeviceResourceNotify *); // rax
  CHwTextureRenderTarget *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 21);
  if ( *((_QWORD *)this + 20) )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>((_QWORD *)this + 20, (__int64 *)&v4);
    v2 = (CRenderTargetBitmap *)((char *)this + 24);
    v3 = *(__int64 (__fastcall **)(CHwTextureRenderTarget *__hidden, const struct IDeviceResourceNotify *))(*(_QWORD *)v4 + 32LL);
    if ( v3 == CHwTextureRenderTarget::RemoveResourceNotifier )
      CHwTextureRenderTarget::RemoveResourceNotifier(v4, v2);
    else
      v3(v4, v2);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v4);
  }
  if ( !*((_BYTE *)this + 176) )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 0LL);
}
