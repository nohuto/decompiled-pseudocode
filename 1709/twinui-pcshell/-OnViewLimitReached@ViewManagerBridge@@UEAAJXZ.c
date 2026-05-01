/*
 * XREFs of ?OnViewLimitReached@ViewManagerBridge@@UEAAJXZ @ 0x180136FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ @ 0x18012C8F8 (-ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::OnViewLimitReached(ViewManagerBridge *this)
{
  ViewManagerInteropTelemetry::ViewManagerViewLimitReached();
  return 0LL;
}
