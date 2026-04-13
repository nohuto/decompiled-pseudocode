/*
 * XREFs of ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x18004845C
 * Callers:
 *     ??_E?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z @ 0x180048610 (--_E-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::~wnf_subscription_state<wil::details::empty_wnf_state>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  DWORD LastError; // ebx
  _QWORD *v5; // rcx
  void **result; // rax
  __int64 v7; // rcx

  *a1 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
  v3 = a1[1];
  if ( v3 )
  {
    LastError = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v3);
    SetLastError(LastError);
  }
  a1[1] = 0LL;
  v5 = (_QWORD *)a1[15];
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1 + 2;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 24LL))(v5, a2);
    a1[15] = 0LL;
  }
  result = &wil::details::wnf_subscription_state_base::`vftable';
  *a1 = &wil::details::wnf_subscription_state_base::`vftable';
  v7 = a1[1];
  if ( v7 )
    return (void **)RtlUnsubscribeWnfNotificationWaitForCompletion(v7);
  return result;
}
