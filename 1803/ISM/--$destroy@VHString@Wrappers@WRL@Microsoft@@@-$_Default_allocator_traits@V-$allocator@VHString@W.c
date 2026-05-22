/*
 * XREFs of ??$destroy@VHString@Wrappers@WRL@Microsoft@@@?$_Default_allocator_traits@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@1@QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800AA750
 * Callers:
 *     _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch$100 @ 0x1800E904A (_std--vector_Microsoft--WRL--Wrappers--HString_std--allocator_Microsoft--WRL--Wrappers--HString_.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::_Default_allocator_traits<std::allocator<Microsoft::WRL::Wrappers::HString>>::destroy<Microsoft::WRL::Wrappers::HString>(
        __int64 a1,
        HSTRING *a2)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*a2);
  *a2 = 0LL;
  return result;
}
