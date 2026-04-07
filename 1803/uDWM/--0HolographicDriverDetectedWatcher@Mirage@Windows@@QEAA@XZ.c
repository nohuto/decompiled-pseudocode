/*
 * XREFs of ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180031DF8
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x1800316A0 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003D0C8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18006E7C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180070208 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

Windows::Mirage::HolographicDriverDetectedWatcher *__fastcall Windows::Mirage::HolographicDriverDetectedWatcher::HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this)
{
  HANDLE Event; // rdi
  const char *v3; // r9
  HANDLE v4; // rdi
  const char *v5; // r9
  int v6; // eax
  int LastError; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      this,
      Event);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1621,
                  (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                  v3);
  }
  if ( LastError < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)(unsigned int)LastError,
      v9);
    __debugbreak();
  }
  v4 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( v4 )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (char *)this + 8,
      v4);
    v6 = 0;
  }
  else
  {
    v6 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x1621,
           (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
           v5);
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)(unsigned int)v6,
      v9);
    __debugbreak();
  }
  return this;
}
