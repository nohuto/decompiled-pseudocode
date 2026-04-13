/*
 * XREFs of ?AddRef@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180024590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::AddRef(__int64 a1)
{
  return ContentManagement::MobilityExperienceSettings::AddRef((ContentManagement::MobilityExperienceSettings *)(a1 - 8));
}
