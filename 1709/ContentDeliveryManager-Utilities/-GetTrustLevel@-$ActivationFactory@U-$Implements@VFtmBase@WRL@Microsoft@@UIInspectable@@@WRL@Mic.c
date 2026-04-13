/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180025920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetTrustLevel(
           a1 - 48,
           a2);
}
