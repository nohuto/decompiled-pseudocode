/*
 * XREFs of ?SubscribeToServices@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E17B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::SubscribeToServices(
        LockScreenDirectorServiceProviderImpl *this,
        struct IServiceProvider *a2)
{
  HANDLE EventW; // rax
  const char *v4; // r9
  char *v5; // rbp
  HANDLE v6; // rsi
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  EventW = CreateEventW(0LL, 1, 0, 0LL);
  v5 = (char *)*((_QWORD *)this + 11);
  v6 = EventW;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v5);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 11) = v6;
  if ( v6 )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1C,
             (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
             v4);
}
