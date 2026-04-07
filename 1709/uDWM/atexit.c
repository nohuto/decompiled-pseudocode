/*
 * XREFs of atexit @ 0x180045494
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001070 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001080 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800010B0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800010D0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__ColorCache::_cachedColors__ @ 0x180001140 (_dynamic_initializer_for__ColorCache--_cachedColors__.c)
 *     _dynamic_initializer_for__ColorCache::_lock__ @ 0x180001180 (_dynamic_initializer_for__ColorCache--_lock__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x1800011B0 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x1800011E0 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x180001200 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180001250 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000A61C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800368F8 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800449C8 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180044BCC (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800454C0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit_0 @ 0x180045404 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
