/*
 * XREFs of _lambda_79bb12814c008e0bafb08f37b083ea74_::__lambda_79bb12814c008e0bafb08f37b083ea74_ @ 0x18006E0E8
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::dtor$2 @ 0x1800C5D98 (_Windows--Services--TargetedContent--Internal--GetTriggerStateTransitionsFromSettin_ea_1800C5D98.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggeredRegistration_::_1_::dtor$2 @ 0x1800C5EAC (_Windows--Services--TargetedContent--Internal--GetTriggeredRegistration_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180015FF0.c)
 */

volatile signed __int64 *__fastcall lambda_79bb12814c008e0bafb08f37b083ea74_::__lambda_79bb12814c008e0bafb08f37b083ea74_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
