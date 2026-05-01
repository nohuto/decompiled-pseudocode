/*
 * XREFs of ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x18013B330
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x1800F46C4 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::FlushChangeNotifications(NotificationDispatcher **this)
{
  NotificationDispatcher::DispatchNotifications(this[64]);
  return 0LL;
}
