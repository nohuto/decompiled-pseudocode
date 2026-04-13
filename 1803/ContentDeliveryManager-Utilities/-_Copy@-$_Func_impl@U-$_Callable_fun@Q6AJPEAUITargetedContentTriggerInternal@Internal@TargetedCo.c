/*
 * XREFs of ?_Copy@?$_Func_impl@U?$_Callable_fun@Q6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z$0A@@std@@V?$allocator@V?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@@2@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@U_Nil@2@@std@@UEAAPEAV?$_Func_base@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@2@PEAX@Z @ 0x18006B960
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800A4410 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A45D0 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl<std::_Callable_fun<long (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  if ( !a2 )
  {
    a2 = operator new(0x18uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  *a2 = &std::_Func_impl<std::_Callable_fun<long (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  return a2;
}
