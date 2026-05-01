/*
 * XREFs of ?SetInputCallback@DragInputHandler@@UEAAJPEAUITabletModeInputCallback@@@Z @ 0x18029E550
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

__int64 __fastcall DragInputHandler::SetInputCallback(DragInputHandler *this, struct ITabletModeInputCallback *a2)
{
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
    (__int64 *)this + 4,
    (__int64)a2);
  return 0LL;
}
