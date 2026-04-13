/*
 * XREFs of ?GetTrustLevel@IdentityManager@ContentManagement@@UEAAJPEAW4TrustLevel@@@Z @ 0x180006D60
 * Callers:
 *     ?GetTrustLevel@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800212E0 (-GetTrustLevel@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WDI@.c)
 *     ?GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180025AF0 (-GetTrustLevel@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@WDA@EAAJPE.c)
 *     ?GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180044EE0 (-GetTrustLevel@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAW4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::IdentityManager::GetTrustLevel(
        ContentManagement::IdentityManager *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
