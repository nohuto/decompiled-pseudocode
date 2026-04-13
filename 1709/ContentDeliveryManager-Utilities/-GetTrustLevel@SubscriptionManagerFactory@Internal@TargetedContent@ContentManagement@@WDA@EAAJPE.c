/*
 * XREFs of ?GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180025AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return ContentManagement::IdentityManager::GetTrustLevel((ContentManagement::IdentityManager *)(a1 - 48), a2);
}
