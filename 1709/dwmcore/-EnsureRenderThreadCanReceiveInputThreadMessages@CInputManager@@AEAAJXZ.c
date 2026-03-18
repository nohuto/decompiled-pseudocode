/*
 * XREFs of ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ @ 0x180194D28
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180194F14 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180195160 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(CInputManager *this)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  signed int v5; // eax
  unsigned int v6; // ebx
  signed int v7; // eax

  if ( *((_QWORD *)this + 35) )
    return 0LL;
  v3 = (_QWORD *)((char *)this + 272);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 272,
    *((_QWORD *)this + 30));
  v4 = *((_QWORD *)this + 30);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v3,
    *v3);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, const void *, int), CInputManager *, _QWORD *))(*(_QWORD *)v4 + 88LL))(
         v4,
         CInputManager::s_OnReceiveInputThreadMessage,
         this,
         v3 + 1);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x28Du);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(**((_QWORD **)this + 31) + 40LL))(
           *((_QWORD *)this + 31),
           L"EdgyNotificationEndpoint",
           *((_QWORD *)this + 35),
           0LL);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x292u);
  }
  return v6;
}
