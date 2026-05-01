/*
 * XREFs of ??1?$unique_any_t@V?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1801A14F8
 * Callers:
 *     _TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor$2 @ 0x1801F6228 (_TouchKeyboardExperienceManager--_TouchKeyboardExperienceManager_--_1_--dtor$2.c)
 * Callees:
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1801A1510 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

void *__fastcall wil::unique_any_t<wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
        wil::details::event_watcher_state **a1,
        unsigned int a2)
{
  wil::details::event_watcher_state *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return wil::details::event_watcher_state::`scalar deleting destructor'(v2, a2);
  return result;
}
