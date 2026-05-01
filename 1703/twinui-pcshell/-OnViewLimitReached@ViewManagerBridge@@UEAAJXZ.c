/*
 * XREFs of ?OnViewLimitReached@ViewManagerBridge@@UEAAJXZ @ 0x18010BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ @ 0x180102144 (-ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::OnViewLimitReached(ViewManagerBridge *this)
{
  ViewManagerInteropTelemetry::ViewManagerViewLimitReached();
  return 0LL;
}
