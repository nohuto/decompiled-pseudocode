/*
 * XREFs of ??$MarshallingEventHandlerWrapperHelper@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@$$ZV?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@W4723456@@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@PEAUICoreDispatcher@Core@UI@2@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@W4SwitchItemProperty@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180164D08
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_65d205de72712ec95d83c1b5e9d87c76__2__1_::Invoke @ 0x180164ED0 (Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_Microsoft--WRL--Ru_ea_180164ED0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_716cffebc34cd4f96d4c619749227c89___ @ 0x180164CCC (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFla_ea_180164CCC.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ___MarshallingEventHandlerWrapperHelper_PEAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__W4SwitchItemProperty_23456___ZV__ComPtr_UISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___WRL_Microsoft__W4723456___YAJPEAU__ITypedEventHandler_PEAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__W4SwitchItemProperty_23456__Foundation_Windows__PEAUICoreDispatcher_Core_UI_2_V__ComPtr_UISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___WRL_Microsoft__W4SwitchItemProperty_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Z(
        volatile signed __int32 *a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16[3]; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v21; // [rsp+80h] [rbp+20h] BYREF
  _QWORD *v22; // [rsp+90h] [rbp+30h]

  v22 = a3;
  v16[1] = (volatile signed __int32 *)-2LL;
  v16[2] = a1;
  if ( a1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  v17 = a1;
  if ( a1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  v8 = *a3;
  v18 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v19 = a4;
  Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_716cffebc34cd4f96d4c619749227c89___(
    v16,
    &v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
  v9 = v16[0];
  if ( v16[0] )
  {
    v21 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, volatile signed __int32 *, __int64 *))(*(_QWORD *)a2 + 64LL))(
            a2,
            0LL,
            v16[0],
            &v21);
    v13 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"internal\\shellcommoncomposable\\inc\\MarshallingEventHandler.h",
        (const char *)(unsigned int)v12);
    v14 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
    v15 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"internal\\shellcommoncomposable\\inc\\MarshallingEventHandler.h",
      (const char *)0x8007000ELL);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
    v10 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 2147942414LL;
  }
}
