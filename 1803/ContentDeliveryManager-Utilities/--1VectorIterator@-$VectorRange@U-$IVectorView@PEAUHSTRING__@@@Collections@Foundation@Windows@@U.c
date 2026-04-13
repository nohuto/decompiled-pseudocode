/*
 * XREFs of ??1VectorIterator@?$VectorRange@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18009A658
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor$4 @ 0x1800C9879 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800C9879.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor$5 @ 0x1800C9885 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800C9885.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor$7 @ 0x1800C98D1 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800C98D1.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor$8 @ 0x1800C98DD (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800C98DD.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::VectorRange<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::VectorIterator::~VectorIterator(
        __int64 a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
