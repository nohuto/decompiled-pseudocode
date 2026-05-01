/*
 * XREFs of Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::ResizeStorage @ 0x180171D7C
 * Callers:
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::InsertAtInternal @ 0x180170B4C (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_180170B4C.c)
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::RemoveAtInternal @ 0x180170D00 (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_180170D00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::ResizeStorage(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  void *v6; // r8
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    v5 = (void *)_o_realloc(v4, 16LL * a2);
  else
    v5 = malloc(16LL * a2);
  v6 = v5;
  result = v5 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 56) = v6;
    *(_DWORD *)(a1 + 44) = a2;
  }
  return result;
}
