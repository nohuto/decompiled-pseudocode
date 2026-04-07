/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18004CAE8
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__s_waitForFodThread__ @ 0x18004E710 (_anonymous_namespace_--_dynamic_atexit_destructor_for__s_waitForFodThread__.c)
 * Callees:
 *     <none>
 */

void wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,0,std::nullptr_t>>>()
{
  struct _TP_WORK *v0; // rbx

  v0 = pwk;
  if ( pwk )
  {
    WaitForThreadpoolWorkCallbacks(pwk, 1);
    CloseThreadpoolWork(v0);
  }
}
