/*
 * XREFs of _MPCHeadUpdateListener::Initialize_::_1_::dtor$6 @ 0x1800E6C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wil::details::event_watcher_state *__fastcall MPCHeadUpdateListener::Initialize_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>(
           (wil::details::event_watcher_state **)(a2 + 32),
           a2);
}
