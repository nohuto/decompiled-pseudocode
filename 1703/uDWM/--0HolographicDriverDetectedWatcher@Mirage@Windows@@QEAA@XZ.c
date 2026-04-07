/*
 * XREFs of ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800494B0
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180018E74 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007203C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074A58 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

Windows::Mirage::HolographicDriverDetectedWatcher *__fastcall Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this)
{
  wil::details *Event; // rdi
  const char *v3; // r9
  int LastError; // eax
  wil::details *v5; // rdi
  const char *v6; // r9
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this,
      Event);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x15B0,
                  (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                  v3);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)(unsigned int)LastError,
      v9);
    __debugbreak();
  }
  v5 = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( v5 )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 1,
      v5);
    v7 = 0;
  }
  else
  {
    v7 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x15B0,
           (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
           v6);
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1A,
      (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)(unsigned int)v7,
      v9);
    __debugbreak();
  }
  return this;
}
