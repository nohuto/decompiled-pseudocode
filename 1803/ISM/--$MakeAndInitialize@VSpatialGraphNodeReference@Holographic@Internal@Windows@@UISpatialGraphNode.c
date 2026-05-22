/*
 * XREFs of ??$MakeAndInitialize@VSpatialGraphNodeReference@Holographic@Internal@Windows@@UISpatialGraphNodeReference@234@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@456@AEAW4SPATIAL_TRACKING_STATE@@AEAUSpatialGraphSettings@456@@Z @ 0x1800CCA58
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800C4950 (-CreateDynamicNodeReferenceWithState@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAA.c)
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800C8360 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029500 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1800C6824 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Holographic::SpatialGraphNodeReference,Windows::Internal::Holographic::ISpatialGraphNodeReference,std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper> &,Windows::Internal::Holographic::DynamicNodeInfo const &,enum SPATIAL_TRACKING_STATE &,Windows::Internal::Holographic::SpatialGraphSettings &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        int *a4,
        char *a5)
{
  char *v9; // rax
  __int64 v10; // rbx
  int v11; // edi
  _QWORD *v12; // rdi

  *a1 = 0LL;
  v9 = (char *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v12 = v9 + 24;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 24));
    *(_QWORD *)(v10 + 64) = 1LL;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
    *(_QWORD *)(v10 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReference,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    *(_QWORD *)(v10 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v12 = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v10 = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `IInspectable'};
    *(_QWORD *)(v10 + 8) = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReference,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    *(_QWORD *)(v10 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v12 = &Windows::Internal::Holographic::SpatialGraphNodeReference::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_QWORD *)(v10 + 80) = 0LL;
    *(_QWORD *)(v10 + 112) = 0LL;
    *(_BYTE *)(v10 + 124) = 0;
    v11 = Windows::Internal::Holographic::SpatialGraphNodeReference::RuntimeClassInitialize(v10, a2, a3, *a4, *a5);
    if ( v11 >= 0 )
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v10)(
              v10,
              &GUID_6f1efb69_538f_4335_a3c1_41a4d9e637cf,
              a1);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
