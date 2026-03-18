/*
 * XREFs of ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801B02F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800B8E0C (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800B8FB8 (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  CWindowBackgroundTreatment *v2; // rbx
  __int64 v4; // rcx

  v2 = (CWindowBackgroundTreatment *)(this - 56);
  CWindowBackgroundTreatment::ClearRenderTargetMaps((CWindowBackgroundTreatment *)(this - 56));
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(v2);
  v4 = *(_QWORD *)(this + 80);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v4 + 96) + 32LL))(
      v4 + 96,
      this & -(__int64)(v2 != 0LL));
    Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease((CRenderTargetImageSource **)(this + 80));
  }
}
