/*
 * XREFs of ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180194444
 * Callers:
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1801955E8 (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0UTMRecentItem@Discover@PenWorkspace@@QEAA@XZ @ 0x18019538C (--0UTMRecentItem@Discover@PenWorkspace@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180199A60 (-RuntimeClassInitialize@UTMRecentItem@Discover@PenWorkspace@@QEAAJPEAUIUnifiedTile@UnifiedTile@S.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMRecentItem,IDiscoverRecentItem,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>(
        _QWORD *a1,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **a2)
{
  PenWorkspace::Discover::UTMRecentItem *v4; // rax
  int v5; // edi
  PenWorkspace::Discover::UTMRecentItem *v6; // rbx

  *a1 = 0LL;
  v4 = (PenWorkspace::Discover::UTMRecentItem *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (PenWorkspace::Discover::UTMRecentItem *)PenWorkspace::Discover::UTMRecentItem::UTMRecentItem(v4);
    v5 = PenWorkspace::Discover::UTMRecentItem::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(PenWorkspace::Discover::UTMRecentItem *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_dd910131_9c55_48a4_8fa7_f00d062b10f2,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(PenWorkspace::Discover::UTMRecentItem *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
