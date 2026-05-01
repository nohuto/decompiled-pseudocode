/*
 * XREFs of Windows::Foundation::Collections::Internal::SimpleVectorView_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_XWinRT::IntVersionTag_0_::IndexOf @ 0x180171AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_XWinRT::IntVersionTag_0_::IndexOf(
        __int64 a1,
        _OWORD *a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v6; // ebx
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  _OWORD v13[3]; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 0;
  *a4 = 0;
  v6 = *(_DWORD *)(a1 + 48);
  v8 = *(__int64 **)(a1 + 40);
  if ( v6 >= 0 )
  {
    v9 = *v8;
    v10 = *(_QWORD *)(a1 + 40);
    v13[0] = *a2;
    v11 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(v9 + 72))(v10, v13);
    v6 = v11;
    if ( *(_DWORD *)(a1 + 52) != *((_DWORD *)v8 + 22) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a3 = 0;
        *a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
