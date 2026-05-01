/*
 * XREFs of atexit @ 0x18002916C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001180 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001190 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x1800011F0 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x180001200 (_dynamic_initializer_for__Microsoft--WRL--Module_1_Microsoft--WRL--Details--DefaultModule_1___--.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001280 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800012E0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock__ @ 0x180001340 (_dynamic_initializer_for__TileDataLayerItemWrappers--MRTCacheManagerInternal--s_MRTCacheLock__.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800051E0 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012F0C (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180023278 (-Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __scrt_initialize_thread_safe_statics @ 0x1800291E0 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x18002911C (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
