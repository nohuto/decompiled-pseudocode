/*
 * XREFs of _dynamic_atexit_destructor_for__MPCSixDofProcessor::s_registryWatcher__ @ 0x1800EAC00
 * Callers:
 *     <none>
 * Callees:
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x180045338 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__MPCSixDofProcessor::s_registryWatcher__(
        __int64 a1,
        struct wil::details::registry_watcher_state *a2)
{
  if ( MPCSixDofProcessor::s_registryWatcher )
    wil::details::delete_registry_watcher_state(MPCSixDofProcessor::s_registryWatcher, a2);
}
