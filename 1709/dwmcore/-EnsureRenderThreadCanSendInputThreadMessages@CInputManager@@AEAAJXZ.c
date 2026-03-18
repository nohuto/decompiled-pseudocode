/*
 * XREFs of ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ @ 0x180194DF8
 * Callers:
 *     ?UpdateInputThreadEdgyConfiguration@CInputManager@@QEAAJAEBUEdgyInputSource@@@Z @ 0x1801950D4 (-UpdateInputThreadEdgyConfiguration@CInputManager@@QEAAJAEBUEdgyInputSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180195160 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanSendInputThreadMessages(CInputManager *this)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  signed int v5; // eax
  unsigned int v6; // ebx

  if ( *((_QWORD *)this + 33) )
    return 0LL;
  v3 = (_QWORD *)((char *)this + 256);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 256,
    *((_QWORD *)this + 30));
  v4 = *((_QWORD *)this + 31);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v3,
    *v3);
  v5 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, _QWORD *))(*(_QWORD *)v4 + 24LL))(
         v4,
         L"EdgyConfigurationEndpoint",
         0LL,
         v3 + 1);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x2DBu);
  return v6;
}
