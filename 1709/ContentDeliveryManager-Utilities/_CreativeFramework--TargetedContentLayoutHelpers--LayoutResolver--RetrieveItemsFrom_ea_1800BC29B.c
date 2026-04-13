/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor$1 @ 0x1800BC29B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem *>,wil::err_exception_policy>::VectorIterator::~VectorIterator(a2 + 64);
}
