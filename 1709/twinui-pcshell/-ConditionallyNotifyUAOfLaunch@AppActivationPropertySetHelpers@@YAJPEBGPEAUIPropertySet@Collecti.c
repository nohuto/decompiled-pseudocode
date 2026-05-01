/*
 * XREFs of ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000693C
 * Callers:
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180012768 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180018AF4 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
        LPCWSTR psz,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v4; // ebx
  HRESULT v5; // eax
  int v6; // edx
  __int64 v7; // r8
  bool v8; // al
  HRESULT v9; // eax
  LPWSTR v10; // rsi
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  DWORD CurrentThreadId; // eax
  int v16; // [rsp+28h] [rbp-19h]
  _BYTE v17[4]; // [rsp+38h] [rbp-9h] BYREF
  int v18; // [rsp+3Ch] [rbp-5h]
  LPWSTR ppwsz; // [rsp+40h] [rbp-1h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+27h] BYREF
  HSTRING string; // [rsp+80h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v20[1] = -2LL;
  v18 = 0;
  v4 = 0;
  v20[0] = a2;
  if ( a2 )
    (*(void (__fastcall **)(const unsigned __int16 *))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppActivation.ShouldNotifyUAOfLaunch", 0x24u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
  v18 = 1;
  v8 = (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(v20, string, v7, v17) >= 0
    && v17[0];
  v18 = 0;
  string = 0LL;
  if ( v8 )
  {
    v9 = SHStrDupW(psz, &ppwsz);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v10 = ppwsz;
      v11 = 0LL;
      v20[2] = 0LL;
      v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = v12;
      if ( v12 )
      {
        *v12 = &IAppViewDataSourceAdapter::`vftable';
        *((_DWORD *)v12 + 3) = 1;
        *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *v13 = off_1801F96D0;
        v13[2] = v10;
        v11 = v13;
      }
      v20[3] = v11;
      CurrentThreadId = GetCurrentThreadId();
      v4 = Windows::Internal::ComTaskPool::RunTask(1LL, 0LL, CurrentThreadId, 0LL);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      if ( v4 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x32,
          (unsigned int)"internal\\onecoreuapshell\\private\\inc\\appactivation_propertyset.h",
          (const char *)(unsigned int)v4,
          (int)v11);
        CoTaskMemFree(ppwsz);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\appactivation_propertyset.h",
        (const char *)(unsigned int)v9,
        v16);
    }
  }
  if ( v20[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
  return (unsigned int)v4;
}
