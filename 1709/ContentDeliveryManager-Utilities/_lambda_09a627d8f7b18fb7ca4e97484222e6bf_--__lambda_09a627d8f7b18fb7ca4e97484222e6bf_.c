/*
 * XREFs of _lambda_09a627d8f7b18fb7ca4e97484222e6bf_::__lambda_09a627d8f7b18fb7ca4e97484222e6bf_ @ 0x180063910
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::GetTriggeredRegistration_::_1_::dtor$2 @ 0x1800B8E10 (_Windows--Services--TargetedContent--Internal--GetTriggeredRegistration_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013DE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVTar.c)
 */

volatile signed __int64 *__fastcall lambda_09a627d8f7b18fb7ca4e97484222e6bf_::__lambda_09a627d8f7b18fb7ca4e97484222e6bf_(
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
