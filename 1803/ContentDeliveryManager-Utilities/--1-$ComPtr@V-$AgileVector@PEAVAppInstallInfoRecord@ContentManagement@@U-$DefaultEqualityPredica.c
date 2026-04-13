/*
 * XREFs of ??1?$ComPtr@V?$AgileVector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800161AC
 * Callers:
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$0 @ 0x1800C204E (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$0.c)
 *     __lambda_3b51b811795083c8866600a62beaf61a_::operator()_::_1_::dtor$6 @ 0x1800C4ECA (__lambda_3b51b811795083c8866600a62beaf61a_--operator()_--_1_--dtor$6.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::dtor$1 @ 0x1800C5D8C (_Windows--Services--TargetedContent--Internal--GetTriggerStateTransitionsFromSettin_ea_1800C5D8C.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggeredRegistration_::_1_::dtor$1 @ 0x1800C5EA0 (_Windows--Services--TargetedContent--Internal--GetTriggeredRegistration_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180015FF0.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,0>>::~ComPtr<Windows::Foundation::Collections::Internal::AgileVector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,0>>(
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
