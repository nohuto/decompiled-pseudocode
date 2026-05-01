/*
 * XREFs of ??$MakeMarshallingEventHandlerWrapper@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@V?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@V?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180165120
 * Callers:
 *     ?add_SwitchItemChanged@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAU?$ITypedEventHandler@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180165650 (-add_SwitchItemChanged@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_65d205de72712ec95d83c1b5e9d87c76___ @ 0x1801650E4 (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFla_ea_1801650E4.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MakeMarshallingEventHandlerWrapper<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty>>>>(
        void *a1,
        volatile signed __int32 **a2)
{
  HRESULT v4; // eax
  int ActivationFactory; // eax
  unsigned int v6; // r14d
  int v7; // eax
  int v8; // eax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v18[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v18[1] = (volatile signed __int32 *)-2LL;
  v15 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.UI.Core.CoreWindow", 0x1Au, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_4d239005_3c2a_41b1_9022_536bb9cf93b1, &v15);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v17 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 48LL))(v15, &v17);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v16 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 72LL))(v17, &v16);
      v6 = v8;
      if ( v8 >= 0 )
      {
        if ( a1 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 8LL))(a1);
        hstringHeader.Reserved.Reserved1 = a1;
        if ( a1 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 8LL))(a1);
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v16;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_65d205de72712ec95d83c1b5e9d87c76___(
          v18,
          &hstringHeader);
        if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&hstringHeader.Reserved.Reserved2[8] + 16LL))(*(_QWORD *)&hstringHeader.Reserved.Reserved2[8]);
        if ( hstringHeader.Reserved.Reserved1 )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)hstringHeader.Reserved.Reserved1 + 16LL))(hstringHeader.Reserved.Reserved1);
        v9 = v18[0];
        if ( v18[0] )
        {
          v10 = *a2;
          if ( *a2 )
          {
            *a2 = 0LL;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
          }
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          *a2 = v9;
          v6 = 0;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
        }
        else
        {
          v6 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x54,
            (__int64)"internal\\shellcommoncomposable\\inc\\MarshallingEventHandler.h",
            (const char *)0x8007000ELL);
        }
        if ( a1 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 16LL))(a1);
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x47,
          (__int64)"internal\\shellcommoncomposable\\inc\\MarshallingEventHandler.h",
          (const char *)(unsigned int)v8);
      }
      v11 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x44,
        (__int64)"internal\\shellcommoncomposable\\inc\\MarshallingEventHandler.h",
        (const char *)(unsigned int)v7);
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x41,
      (__int64)"internal\\shellcommoncomposable\\inc\\MarshallingEventHandler.h",
      (const char *)(unsigned int)ActivationFactory);
  }
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v6;
}
