/*
 * XREFs of ?GetTrustLevel@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800290B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::GetTrustLevel(
           (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)(a1 - 40),
           a2);
}
