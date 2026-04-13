/*
 * XREFs of ?ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006B330
 * Callers:
 *     ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005F600 (-RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerIntern.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18005FE58 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerSetupHandler(_QWORD *a1, int a2)
{
  _DWORD *v3; // rax
  char *v4; // rdx
  __int64 v5; // rax
  char *v6; // rcx
  _QWORD *v7; // rdx

  v3 = &unk_18017A4E0;
  while ( *v3 != a2 )
  {
    v3 += 18;
    if ( v3 == (_DWORD *)&unk_18017A528 )
    {
      *a1 = &std::_Func_impl<std::_Callable_fun<long (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      a1[1] = Windows::Services::TargetedContent::Internal::NoopTriggerHandler;
      a1[3] = a1;
      return a1;
    }
  }
  v4 = (char *)(v3 + 2);
  v5 = 0LL;
  a1[3] = 0LL;
  v6 = (char *)*((_QWORD *)v4 + 3);
  if ( v6 )
  {
    if ( v6 == v4 )
      v7 = a1;
    else
      v7 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(char *, _QWORD *))v6)(v6, v7);
  }
  a1[3] = v5;
  return a1;
}
