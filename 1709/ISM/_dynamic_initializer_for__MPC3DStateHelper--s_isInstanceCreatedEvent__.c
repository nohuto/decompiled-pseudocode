/*
 * XREFs of _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x1800012A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004BF0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800077F0 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     atexit @ 0x1800CA61C (atexit.c)
 */

// Hidden C++ exception states: #wind=1
void dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__()
{
  void *v0; // rdx
  HANDLE Event; // rbx
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &MPC3DStateHelper::s_isInstanceCreatedEvent,
      Event);
    atexit(dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__);
  }
  else
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v0, v2, v3);
  }
}
