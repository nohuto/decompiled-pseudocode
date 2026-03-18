/*
 * XREFs of ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800B8E94
 * Callers:
 *     ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800B8D90 (--_ECWindowBackgroundTreatment@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800B8E0C (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800B8FB8 (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?clear@?$list@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x1800B949C (-clear@-$list@U-$pair@QEAVIRenderTarget@@V-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@s.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9558 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::~CWindowBackgroundTreatment(CWindowBackgroundTreatment *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  CPtrArrayBase::Remove((CPtrArrayBase *)(*((_QWORD *)this + 8) + 24LL), (unsigned __int64)this);
  CWindowBackgroundTreatment::ClearRenderTargetMaps(this);
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(this);
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 + 96) + 32LL))(v2 + 96, (char *)this + 56);
  v3 = (void *)*((_QWORD *)this + 48);
  if ( v3 )
  {
    std::_Deallocate(v3, (__int64)(*((_QWORD *)this + 50) - (_QWORD)v3) >> 3, 8uLL);
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease((char *)this + 136);
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    std::_Deallocate(v4, (__int64)(*((_QWORD *)this + 14) - (_QWORD)v4) >> 3, 8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  std::list<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>::clear((char *)this + 80);
  std::_Deallocate(*((void **)this + 10), 1uLL, 0x20uLL);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CResource::~CResource(this);
}
