/*
 * XREFs of ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800EBAA8
 * Callers:
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1800E851C (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800EE028 (-RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@S.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMRecentItem,IDiscoverRecentItem,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>(
        _QWORD *a1,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **a2)
{
  Microsoft::WRL::FtmBase *v4; // rax
  Microsoft::WRL::FtmBase *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (Microsoft::WRL::FtmBase *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v4);
    *((_DWORD *)v5 + 13) = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v5 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDiscoverRecentItem>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v5 + 7) = 0LL;
    *(_QWORD *)v5 = &PenWorkspace::Discover::UTMRecentItem::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v5 + 5) = &PenWorkspace::Discover::UTMRecentItem::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDiscoverRecentItem>'};
    *((_QWORD *)v5 + 8) = 0LL;
    v6 = PenWorkspace::Discover::UTMRecentItem::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_dd910131_9c55_48a4_8fa7_f00d062b10f2,
             a1);
    if ( v5 )
      (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
