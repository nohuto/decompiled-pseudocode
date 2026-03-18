/*
 * XREFs of ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800B8E0C
 * Callers:
 *     ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x18000BD14 (-InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000BDD0 (-OnChanged@CWindowBackgroundTreatment@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800B8E94 (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801B02F0 (-NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::ClearRenderTargetMaps(CWindowBackgroundTreatment *this)
{
  __int64 ***v1; // r14
  __int64 **i; // rbx
  __int64 *v4; // rcx

  v1 = (__int64 ***)*((_QWORD *)this + 10);
  for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
  {
    v4 = i[3];
    if ( v4 )
      (*(void (__fastcall **)(__int64 *, _QWORD))(v4[12] + 32))(
        v4 + 12,
        ((unsigned __int64)this + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    (*(void (__fastcall **)(__int64 *, CWindowBackgroundTreatment *))(*i[2] + 216))(i[2], this);
  }
  std::_Hash<std::_Umap_traits<IRenderTarget *,Microsoft::WRL::ComPtr<CRenderTargetImageSource>,std::_Uhash_compare<IRenderTarget *,std::hash<IRenderTarget *>,std::equal_to<IRenderTarget *>>,std::allocator<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>,0>>::clear((char *)this + 72);
}
