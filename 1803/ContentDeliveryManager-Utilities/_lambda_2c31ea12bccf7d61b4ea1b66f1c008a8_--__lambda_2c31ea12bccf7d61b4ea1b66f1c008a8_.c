/*
 * XREFs of _lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_ @ 0x180043B50
 * Callers:
 *     __lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()_::_1_::dtor$1 @ 0x1800C3716 (__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@U?$CloakedIid@UIPartialTrustSubscriptionFactory@Internal@TargetedContent@ContentManagement@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180045F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISubscriptionMana.c)
 */

int __fastcall lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl **a1)
{
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return (int)v1;
}
