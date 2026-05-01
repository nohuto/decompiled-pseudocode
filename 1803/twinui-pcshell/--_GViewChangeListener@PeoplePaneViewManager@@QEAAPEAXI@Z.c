/*
 * XREFs of ??_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z @ 0x1801C1088
 * Callers:
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1801C0960 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x1801C51C0 (-UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

PeoplePaneViewManager::ViewChangeListener *__fastcall PeoplePaneViewManager::ViewChangeListener::`scalar deleting destructor'(
        PeoplePaneViewManager::ViewChangeListener *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return this;
}
