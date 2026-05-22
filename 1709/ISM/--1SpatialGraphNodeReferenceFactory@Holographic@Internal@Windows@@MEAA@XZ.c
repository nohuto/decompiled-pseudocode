/*
 * XREFs of ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x1800B885C
 * Callers:
 *     ??_GSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAAPEAXI@Z @ 0x1800B88E0 (--_GSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAAPEAXI@Z.c)
 *     ??1?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@EEAA@XZ @ 0x1800BC660 (--1-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Micros.c)
 * Callees:
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?SpatialGraphNodeReferenceFactoryDestroyed_@HolographicDriverClientTrace@@QEAAXPEBX@Z @ 0x1800B1474 (-SpatialGraphNodeReferenceFactoryDestroyed_@HolographicDriverClientTrace@@QEAAXPEBX@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x1800B9650 (--1-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDriverHandl.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::~SpatialGraphNodeReferenceFactory(
        Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory *this)
{
  _DWORD *v2; // rcx
  HolographicDriverClientTrace *v3; // rcx

  *(_QWORD *)this = &Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  v2 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v2 && *v2 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::SpatialGraphNodeReferenceFactoryDestroyed_(v3, this);
  }
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::~_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>((char *)this + 128);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>((__int64)this);
}
