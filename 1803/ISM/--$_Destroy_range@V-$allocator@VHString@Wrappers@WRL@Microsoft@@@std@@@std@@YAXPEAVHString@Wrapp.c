/*
 * XREFs of ??$_Destroy_range@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrappers@WRL@Microsoft@@0AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800AAA60
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::Wrappers::HString_____ptr64_Microsoft::WRL::Wrappers::HString_____ptr64_std::allocator_Microsoft::WRL::Wrappers::HString____::_1_::catch$2 @ 0x1800E9296 (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--Wrappers--HString_____ptr64_Microsoft--WR.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>>(HSTRING *a1, HSTRING *a2)
{
  HSTRING *v3; // rbx
  HRESULT result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = WindowsDeleteString(*v3);
      *v3++ = 0LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
