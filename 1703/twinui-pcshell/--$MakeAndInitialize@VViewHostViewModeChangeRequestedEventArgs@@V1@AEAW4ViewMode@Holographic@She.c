/*
 * XREFs of ??$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@@012@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x1800E4054
 * Callers:
 *     ?EnterFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x1800E30D0 (-EnterFullScreen@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x1800E3180 (-ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?EnterFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E6DE0 (-EnterFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E6E90 (-ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E830 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@S.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostViewModeChangeRequestedEventArgs,ViewHostViewModeChangeRequestedEventArgs,enum Windows::Internal::Shell::Holographic::ViewMode &>(
        volatile signed __int64 **a1,
        _DWORD *a2)
{
  unsigned int v3; // esi
  volatile signed __int64 *v4; // rcx
  char *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // r14

  v3 = 0;
  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v4);
  }
  *a1 = 0LL;
  v6 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v8 = v6 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
    *(_QWORD *)(v7 + 48) = 1LL;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *(_QWORD *)(v7 + 8) = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v7 = &ViewHostViewModeChangeRequestedEventArgs::`vftable';
    *(_QWORD *)(v7 + 8) = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *(_DWORD *)(v7 + 56) = *a2;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(v7);
    *a1 = (volatile signed __int64 *)v7;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
