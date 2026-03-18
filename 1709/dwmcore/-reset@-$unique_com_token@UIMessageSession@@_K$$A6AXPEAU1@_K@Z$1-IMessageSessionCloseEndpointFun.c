/*
 * XREFs of ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180195160
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x1801949E0 (--1CInputManager@@MEAA@XZ.c)
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ @ 0x180194D28 (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@AEAAJXZ.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ @ 0x180194DF8 (-EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi

  if ( a1[1] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1);
  a1[1] = 0LL;
  v5 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    if ( a2 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v5 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
