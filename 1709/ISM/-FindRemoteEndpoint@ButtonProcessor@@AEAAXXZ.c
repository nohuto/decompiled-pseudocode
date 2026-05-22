/*
 * XREFs of ?FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ @ 0x18003A5FC
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003A6D0 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003A910 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180011CEC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ButtonProcessor::FindRemoteEndpoint(ButtonProcessor *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), &v5) >= 0 )
  {
    v2 = v5;
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (_QWORD *)this + 7,
      *((_QWORD *)this + 7));
    if ( (*(int (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)v2 + 24LL))(
           v2,
           L"System\\RawShellButtonRouterInput",
           0LL,
           (char *)this + 64) < 0 )
    {
      v3 = v5;
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (_QWORD *)this + 7,
        *((_QWORD *)this + 7));
      (*(void (__fastcall **)(__int64, const wchar_t *, __int64, char *))(*(_QWORD *)v3 + 24LL))(
        v3,
        L"System\\RawShellButtonRouterInput",
        1LL,
        (char *)this + 64);
    }
  }
  v4 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
