/*
 * XREFs of ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x1801CD300
 * Callers:
 *     <none>
 * Callees:
 *     ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x1801DDF70 (-Shutdown@ViewManagerBridge@@UEAAXXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::Shutdown(ViewManagerBridge **this)
{
  ViewManagerBridge::Shutdown(this[57]);
  return 0LL;
}
