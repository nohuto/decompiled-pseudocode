/*
 * XREFs of _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$1 @ 0x1800B730D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem *>,wil::err_exception_policy>::VectorIterator::~VectorIterator(a2 + 48);
}
