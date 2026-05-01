/*
 * XREFs of Windows::Foundation::Collections::Internal::SimpleVectorView_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_XWinRT::IntVersionTag_0_::GetMany @ 0x180171B50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_XWinRT::IntVersionTag_0_::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  int v9; // ebx
  _DWORD *v10; // r15
  int v11; // eax
  unsigned int i; // ecx
  __int64 v13; // rax

  if ( a3 )
    memset(a4, 0, 16LL * a3);
  *a5 = 0;
  v9 = *(_DWORD *)(a1 + 48);
  v10 = *(_DWORD **)(a1 + 40);
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, void *, unsigned int *))(*(_QWORD *)v10 + 128LL))(
            v10,
            a2,
            a3,
            a4,
            a5);
    v9 = v11;
    if ( *(_DWORD *)(a1 + 52) != v10[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( i = 0; i < *a5; *((_QWORD *)a4 + v13 + 1) = 0LL )
        {
          v13 = 2LL * i++;
          *((_QWORD *)a4 + v13) = 0LL;
        }
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v9, 0LL);
  }
  return (unsigned int)v9;
}
