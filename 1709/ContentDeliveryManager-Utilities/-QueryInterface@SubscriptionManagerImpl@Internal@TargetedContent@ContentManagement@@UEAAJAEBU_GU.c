/*
 * XREFs of ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003DD20
 * Callers:
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044EA0 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAJAEBU.c)
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044F30 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAJAEBU_G.c)
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044FB0 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJAEBU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::QueryInterface(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
