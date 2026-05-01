/*
 * XREFs of Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_XWinRT::IntVersionTag_0_::get_HasCurrent @ 0x180171560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_XWinRT::IntVersionTag_0_::get_HasCurrent(
        __int64 a1,
        bool *a2)
{
  int v3; // ebx
  __int64 v4; // rdx

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 >= 0 )
  {
    v3 = 0;
    *a2 = *(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v4 + 88) )
    {
      v3 = -2147483636;
      *(_DWORD *)(a1 + 48) = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
      *a2 = 0;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
