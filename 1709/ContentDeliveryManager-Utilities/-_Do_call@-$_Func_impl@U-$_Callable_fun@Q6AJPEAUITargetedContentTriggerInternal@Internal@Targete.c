/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_fun@Q6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z$0A@@std@@V?$allocator@V?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@@2@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@@std@@UEAAJ$$QEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$$QEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@2@@Z @ 0x1800616B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl<std::_Callable_fun<long (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Do_call(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( &v6 != (__int128 *)a3 )
  {
    v3 = a3[1];
    a3[1] = 0LL;
    *((_QWORD *)&v6 + 1) = v3;
    v4 = *a3;
    *a3 = 0LL;
    *(_QWORD *)&v6 = v4;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int128 *))(a1 + 8))(*a2, &v6);
}
