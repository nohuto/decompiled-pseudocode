/*
 * XREFs of _lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator() @ 0x180043B2C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___::Run @ 0x180048450 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___--Run.c)
 * Callees:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180044A44 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator()(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(*a1);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x32,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v1);
  }
  return 0LL;
}
