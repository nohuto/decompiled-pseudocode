/*
 * XREFs of _std::make_shared_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_unsigned_short_const_____ptr64__FILETIME__::_1_::dtor$1 @ 0x1800B6FCC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800133A0 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::make_shared_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_unsigned_short_const_____ptr64__FILETIME__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 96));
  }
  return result;
}
