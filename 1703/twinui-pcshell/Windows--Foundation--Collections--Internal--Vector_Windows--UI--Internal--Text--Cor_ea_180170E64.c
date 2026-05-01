/*
 * XREFs of Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::IndexOfInternal @ 0x180170E64
 * Callers:
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::IndexOf @ 0x18016F8A0 (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_18016F8A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::IndexOfInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // ecx
  __m256i v9; // [rsp+0h] [rbp-28h]

  v6 = 0;
  if ( a3 )
  {
    *(_OWORD *)v9.m256i_i8 = *a4;
    while ( 1 )
    {
      *(_OWORD *)&v9.m256i_u64[2] = *(_OWORD *)a2;
      if ( __PAIR64__(HIDWORD(*(_QWORD *)a4), v9.m256i_u32[2]) == __PAIR64__(
                                                                    HIDWORD(*(_QWORD *)a2),
                                                                    *(_QWORD *)(a2 + 8))
        && __PAIR64__(v9.m256i_u32[0], v9.m256i_u32[7]) == *(__int64 *)((char *)&v9.m256i_i64[1] + 4) )
      {
        break;
      }
      ++v6;
      a2 += 16LL;
      if ( v6 >= a3 )
        return 0LL;
    }
    *a6 = 1;
    *a5 = v6;
  }
  return 0LL;
}
