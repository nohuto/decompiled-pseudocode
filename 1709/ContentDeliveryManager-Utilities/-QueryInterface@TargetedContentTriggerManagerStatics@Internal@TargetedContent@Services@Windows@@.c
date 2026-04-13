/*
 * XREFs of ?QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022910
 * Callers:
 *     ?QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025860 (-QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Servi_ea_180025860.c)
 *     ?QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E10 (-QueryInterface@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Servi_ea_180025E10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::QueryInterface(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
