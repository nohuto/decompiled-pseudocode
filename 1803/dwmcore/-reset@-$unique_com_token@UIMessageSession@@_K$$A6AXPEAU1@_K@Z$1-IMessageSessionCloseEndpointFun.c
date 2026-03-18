/*
 * XREFs of ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800C9E78
 * Callers:
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ @ 0x1800C8618 (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x1801CDA44 (--1CInputManager@@MEAA@XZ.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ @ 0x1801CDCB8 (-EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 result; // rax

  if ( a1[1] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1);
  a1[1] = 0LL;
  v4 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    if ( a2 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v4 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
