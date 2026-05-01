/*
 * XREFs of ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x1801DDE1C
 * Callers:
 *     ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x1801C71E8 (--$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z @ 0x180091078 (--4-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800F6134 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18012093C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewMana.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CBA88 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ViewManagerBridge::RuntimeClassInitialize(ViewManagerBridge *this, struct ViewEventDispatcher *a2)
{
  unsigned int v3; // ebx
  wil::details *Event; // rsi
  const char *v5; // r9
  int LastError; // esi
  __int64 v7; // rdx
  wil::details *v9; // rsi
  const char *v10; // r9
  volatile int *v11; // rdx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v14; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<ViewEventDispatcher>::operator=((__int64 *)this + 10, (__int64)a2);
  v3 = 0;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 16,
      Event);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1621,
                  (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v5);
  }
  if ( LastError < 0 )
  {
    v7 = 30LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)LastError);
    return (unsigned int)LastError;
  }
  v9 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( v9 )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 17,
      v9);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1621,
                  (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                  v10);
  }
  if ( LastError < 0 )
  {
    v7 = 32LL;
    goto LABEL_6;
  }
  v14 = (volatile int *)this;
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::InternalAddRef(
      (__int64)this,
      v11);
  if ( SHCreateThread(
         (LPTHREAD_START_ROUTINE)lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_,
         this,
         0x1000u,
         0LL) )
  {
    v14 = 0LL;
  }
  else
  {
    v3 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x30,
           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
           v12);
  }
  Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease(&v14);
  return v3;
}
