/*
 * XREFs of ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x1801FE9B0
 * Callers:
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801FE910 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800BC600 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CHolographicInteropTaskQueue::Initialize(wil::details **this)
{
  wil::details *Event; // rbx
  const char *v3; // r9
  int LastError; // ebx
  bool v5; // sf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      this + 6,
      Event);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1621,
                  (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v3);
  }
  v5 = LastError < 0;
  if ( LastError > 0 )
  {
    LastError = (unsigned __int16)LastError | 0x80070000;
    v5 = LastError < 0;
  }
  if ( v5 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, 0x34u);
  return (unsigned int)LastError;
}
