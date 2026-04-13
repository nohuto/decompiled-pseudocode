/*
 * XREFs of _Windows::Services::TargetedContent::Internal::ResolvePredicateHandler_::_1_::dtor$0 @ 0x1800B87A8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18002F428 (--1-$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandler_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 36) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 36) &= ~1u;
    return std::function<long (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<long (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(
             *(_QWORD *)(a2 + 48),
             a2);
  }
  return result;
}
