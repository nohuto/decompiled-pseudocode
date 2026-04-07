/*
 * XREFs of atexit @ 0x18004D034
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001060 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001070 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _anonymous_namespace_::_dynamic_initializer_for__s_waitForFodThread__ @ 0x1800010A0 (_anonymous_namespace_--_dynamic_initializer_for__s_waitForFodThread__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x1800010C0 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x1800010F0 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001110 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001130 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x1800011A0 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x1800011F0 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000C34C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18001341C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x180049DE4 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180049F34 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180074B68 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 * Callees:
 *     _onexit_0 @ 0x18004CFA4 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
