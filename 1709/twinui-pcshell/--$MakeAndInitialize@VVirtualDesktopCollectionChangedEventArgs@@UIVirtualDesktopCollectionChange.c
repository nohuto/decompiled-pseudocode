/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAW4VirtualDesktopCollectionChangedEventType@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIVirtualDesktop@5678@@Z @ 0x1801B64A8
 * Callers:
 *     ?VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1801B5690 (-VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1801B5800 (-VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewSizePreferencesChangedEventArgs@Holographic@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180109AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewSizePreferen.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B5C60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVirtualDe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
        void **a1,
        _DWORD *a2,
        __int64 *a3)
{
  void *v5; // rcx
  char *v7; // rax
  char *v8; // rbx
  unsigned int Interface; // edi
  _QWORD *v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rcx

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *a1 = 0LL;
  v7 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v10 = v7 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 16));
    *((_QWORD *)v8 + 8) = 1LL;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = &VirtualDesktopCollectionChangedEventArgs::`vftable';
    *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v8 + 10) = 0LL;
    v11 = *a3;
    *((_DWORD *)v8 + 18) = *a2;
    if ( *((_QWORD *)v8 + 10) != v11 )
    {
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v12 = *((_QWORD *)v8 + 10);
      *((_QWORD *)v8 + 10) = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
                  v8,
                  (__int64)&GUID_d4ae0bbe_851b_4613_af6d_994543c27f93,
                  a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
