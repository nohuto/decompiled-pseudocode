/*
 * XREFs of ??$Make@U?$AgileInvokeHelper@U?$ITypedEventHandler@PEAUIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUIThumbnailSourceEventArgs@23456@@Foundation@Windows@@$01@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$AgileInvokeHelper@U?$ITypedEventHandler@PEAUIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUIThumbnailSourceEventArgs@23456@@Foundation@Windows@@$01@Details@WRL@Microsoft@@@12@XZ @ 0x1801688FC
 * Callers:
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUIThumbnailSourceEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUIThumbnailSourceEventArgs@23456@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1801684E0 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIThumbnailFactory@Common@Multitasking@Experiences.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::AgileInvokeHelper<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs *>,2>>(
        _QWORD *a1)
{
  _DWORD *v2; // rbx

  *a1 = 0LL;
  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *(_QWORD *)v2 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 2));
    v2[9] = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs *>'};
    *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v2 = &Microsoft::WRL::Details::AgileInvokeHelper<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs *>,2>::`vftable'{for `Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs *>'};
    *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailFactory *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IThumbnailSourceEventArgs *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v2 + 5) = 0LL;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v2;
  }
  return a1;
}
