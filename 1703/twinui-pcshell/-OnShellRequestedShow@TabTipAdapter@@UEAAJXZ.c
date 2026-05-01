/*
 * XREFs of ?OnShellRequestedShow@TabTipAdapter@@UEAAJXZ @ 0x18016ED80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality_const_&___ptr64_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::permission_ @ 0x18016FF50 (Microsoft--WRL--Details--Make_Windows--Foundation--Collections--Internal--Vector_Windows--UI--In.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabTipAdapter::OnShellRequestedShow(TabTipAdapter *this)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // edi
  __int64 v7; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v11 = 0LL;
  v9[0] = 2LL;
  v8[0] = 0x200000001LL;
  v8[1] = 0x3200000012CLL;
  v9[1] = 0x12C00000032LL;
  Microsoft::WRL::Details::Make_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality_const_____ptr64_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::permission_(&v12);
  v2 = v12;
  if ( !v12 )
  {
    v3 = -2147024882;
    v4 = 429LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 104LL))(v12, v8);
  if ( v6 < 0 )
  {
    v7 = 430LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 104LL))(v2, v9);
  if ( v6 < 0 )
  {
    v7 = 431LL;
    goto LABEL_6;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 64LL))(v2, &v11);
  if ( v3 < 0 )
  {
    v4 = 432LL;
    goto LABEL_3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 240LL))(*((_QWORD *)this + 2), v11);
  if ( v3 < 0 )
  {
    v4 = 435LL;
    goto LABEL_3;
  }
  return 0LL;
}
