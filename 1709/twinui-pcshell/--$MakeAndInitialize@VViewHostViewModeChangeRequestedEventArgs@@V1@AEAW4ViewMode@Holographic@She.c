/*
 * XREFs of ??$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@@012@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x18010A270
 * Callers:
 *     ?EnterFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x1801088A0 (-EnterFullScreen@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x180108950 (-ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?EnterFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x18010EDA0 (-EnterFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x18010EE50 (-ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostViewModeChangeRequestedEventArgs,ViewHostViewModeChangeRequestedEventArgs,enum Windows::Internal::Shell::Holographic::ViewMode &>(
        volatile signed __int64 **a1,
        _DWORD *a2)
{
  unsigned int v3; // esi
  volatile signed __int64 *v4; // rcx
  char *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  v3 = 0;
  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v4);
  }
  *a1 = 0LL;
  v6 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v8 = v6 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
    v7[8] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    v7[1] = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `IWeakReferenceSource'};
    *v8 = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &ViewHostViewModeChangeRequestedEventArgs::`vftable';
    v7[1] = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `IWeakReferenceSource'};
    *v8 = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    *((_DWORD *)v7 + 18) = *a2;
    v9 = v7[8];
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(v7 + 8, v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
LABEL_11:
    *a1 = v7;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
