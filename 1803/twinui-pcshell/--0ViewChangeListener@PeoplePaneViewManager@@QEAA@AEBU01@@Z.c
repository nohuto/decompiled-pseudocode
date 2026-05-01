/*
 * XREFs of ??0ViewChangeListener@PeoplePaneViewManager@@QEAA@AEBU01@@Z @ 0x1801C0620
 * Callers:
 *     _lambda_4f9db91f7b3ef4e45d712402b4d08f96_::operator() @ 0x1801C0C98 (_lambda_4f9db91f7b3ef4e45d712402b4d08f96_--operator().c)
 *     ?SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@PEAK@Z @ 0x1801C5080 (-SubscribeToViewChangeNotifications@PeoplePaneViewManager@@UEAAJPEAUIPeoplePaneViewUpdateSink@@P.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

PeoplePaneViewManager::ViewChangeListener *__fastcall PeoplePaneViewManager::ViewChangeListener::ViewChangeListener(
        PeoplePaneViewManager::ViewChangeListener *this,
        const struct PeoplePaneViewManager::ViewChangeListener *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  return this;
}
