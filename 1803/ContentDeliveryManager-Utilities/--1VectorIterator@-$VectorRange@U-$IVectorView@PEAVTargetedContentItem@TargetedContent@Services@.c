/*
 * XREFs of ??1VectorIterator@?$VectorRange@U?$IVectorView@PEAVTargetedContentItem@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004ACEC
 * Callers:
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$1 @ 0x1800C3EA7 (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$1.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$2 @ 0x1800C3EB3 (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$1 @ 0x1800C9719 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800C9719.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$2 @ 0x1800C9725 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800C9725.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$7 @ 0x1800C97B0 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800C97B0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$8 @ 0x1800C97BC (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800C97BC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem *>,wil::err_exception_policy>::VectorIterator::~VectorIterator(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(result + 16) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
