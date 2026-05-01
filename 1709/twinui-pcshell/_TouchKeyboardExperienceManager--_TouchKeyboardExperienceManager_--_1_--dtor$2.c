/*
 * XREFs of _TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor$2 @ 0x1801F6228
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
           (wil::details::event_watcher_state **)(*(_QWORD *)(a2 + 64) + 256LL),
           a2);
}
