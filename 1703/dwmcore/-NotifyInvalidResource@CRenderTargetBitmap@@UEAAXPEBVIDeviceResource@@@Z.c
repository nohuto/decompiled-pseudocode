/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800474A8 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18007A6C0 (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ??$As@VIDeviceResource@@@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIDeviceResource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C25E8 (--$As@VIDeviceResource@@@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(CRenderTargetBitmap *this, const struct IDeviceResource *a2)
{
  char *v4; // rbx
  CRenderTargetBitmap *v5; // rcx
  int v6; // esi
  void (__fastcall ***v7)(_QWORD, const struct IDeviceResource *); // rcx
  const struct IDeviceResource *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 176) )
  {
    v4 = (char *)this - 24;
    CRenderTargetBitmap::ReleaseRenderTargetBitmap((CRenderTargetBitmap *)((char *)this - 24));
  }
  else
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::As<IDeviceResource>((_QWORD *)this + 13, (__int64 *)&v8);
    v4 = (char *)this - 24;
    v5 = (CRenderTargetBitmap *)((char *)this - 24);
    if ( v8 == a2 )
      CRenderTargetBitmap::ReleaseRenderTargetBitmap(v5);
    else
      CD2DBitmapCache::ClearCache(v5);
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v8);
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = *((_DWORD *)this + 38);
  while ( v6 )
  {
    v7 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 16)
                                                                         + 8LL * (unsigned int)--v6);
    (**v7)(v7, a2);
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
}
