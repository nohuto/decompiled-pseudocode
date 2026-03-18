/*
 * XREFs of ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ @ 0x1800C8618
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800C86D0 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800C9E78 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(CInputManager *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  if ( *((_QWORD *)this + 36) )
    return 0LL;
  v2 = (_QWORD *)((char *)this + 280);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 280,
    *((_QWORD *)this + 31));
  v3 = *((_QWORD *)this + 31);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v2,
    *v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), CInputManager *, _QWORD *))(*(_QWORD *)v3 + 88LL))(
         v3,
         CInputManager::s_OnReceiveInputThreadMessage,
         this,
         v2 + 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x221u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(**((_QWORD **)this + 32) + 40LL))(
           *((_QWORD *)this + 32),
           L"EdgyNotificationEndpoint",
           *((_QWORD *)this + 36),
           0LL);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x226u);
  }
  return v5;
}
