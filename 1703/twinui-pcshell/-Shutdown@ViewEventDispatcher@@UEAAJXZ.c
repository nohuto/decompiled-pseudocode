/*
 * XREFs of ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x1800F6DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x18010A860 (-Shutdown@ViewManagerBridge@@UEAAXXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::Shutdown(ViewManagerBridge **this)
{
  ViewManagerBridge::Shutdown(this[51]);
  return 0LL;
}
