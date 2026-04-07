/*
 * XREFs of ??1?$wnf_subscription_state@K@details@wil@@UEAA@XZ @ 0x180072D74
 * Callers:
 *     ??_G?$wnf_subscription_state@K@details@wil@@UEAAPEAXI@Z @ 0x180073290 (--_G-$wnf_subscription_state@K@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x1800493C0 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x18004A7C4 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

void **__fastcall wil::details::wnf_subscription_state<unsigned long>::~wnf_subscription_state<unsigned long>(
        _QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  void **result; // rax
  __int64 v5; // rcx

  *a1 = &wil::details::wnf_subscription_state<unsigned long>::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
    a1 + 1,
    0LL);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)(a1 + 2),
    v2);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)(a1 + 2),
    v3);
  result = &wil::details::wnf_subscription_state_base::`vftable';
  *a1 = &wil::details::wnf_subscription_state_base::`vftable';
  v5 = a1[1];
  if ( v5 )
    return (void **)RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
  return result;
}
