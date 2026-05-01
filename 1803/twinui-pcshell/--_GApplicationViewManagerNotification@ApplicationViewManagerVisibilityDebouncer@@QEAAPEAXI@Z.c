/*
 * XREFs of ??_GApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAAPEAXI@Z @ 0x1800F9D1C
 * Callers:
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x18013D91C (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CWinRTApplicationView **__fastcall ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::`scalar deleting destructor'(
        CWinRTApplicationView **this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 2);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(this);
  return this;
}
