/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016EF90
 * Callers:
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::QueryInterface @ 0x18016F0C0 (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Core--CoreKeyboa.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180171F20 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVector@UCoreKeyboardPositionAnd_ea_180171F20.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180171F80 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVector@UCoreKeyboardPositionAnd_ea_180171F80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *a2 == -969625623
      && a2[1] == *(_DWORD *)&GUID_c634afe9_faf5_5a6a_a3f9_c5cc5114e453.Data2
      && a2[2] == *(_DWORD *)GUID_c634afe9_faf5_5a6a_a3f9_c5cc5114e453.Data4
      && a2[3] == *(_DWORD *)&GUID_c634afe9_faf5_5a6a_a3f9_c5cc5114e453.Data4[4]
      || (a1 += 8LL, *a2 == 56)
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      if ( *a2 == 783707487
        && a2[1] == *(_DWORD *)&GUID_2eb66d5f_91b0_583f_bac5_365f52dc3bfa.Data2
        && a2[2] == *(_DWORD *)GUID_2eb66d5f_91b0_583f_bac5_365f52dc3bfa.Data4
        && a2[3] == *(_DWORD *)&GUID_2eb66d5f_91b0_583f_bac5_365f52dc3bfa.Data4[4] )
      {
        v4 = 0;
        *a3 = a1 + 8;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
