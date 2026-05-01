/*
 * XREFs of _lambda_b17e8ea3ce422613d156e832a7d26e56_::operator() @ 0x1800A0360
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_b17e8ea3ce422613d156e832a7d26e56__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::Invoke @ 0x1800A0550 (Platform--Details--__abi_FunctorCapture__lambda_b17e8ea3ce422613d156e832a7d26e56__void_Windows--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801FAEA0 (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180208BD0 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ @ 0x18020B230 (-Show@IWindowPrivate@Xaml@UI@Windows@@UE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_b17e8ea3ce422613d156e832a7d26e56_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  CWinRTApplicationView *v6; // rdi
  CWinRTApplicationView *v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 result; // rax
  const char *v11; // r9
  CWinRTApplicationView *v12[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v14 = a2;
  v12[1] = (CWinRTApplicationView *)-2LL;
  Windows::UI::Xaml::IWindowPrivate::Show(a3, 0LL);
  try
  {
    v5 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a3);
    v14 = v5;
    v6 = (CWinRTApplicationView *)__abi_winrt_ptr_ctor(v5);
    v12[2] = v6;
    __abi_winrt_ptr_dtor(v5);
    AppViewDataSourceHelpers::GetApplicationViewForItem(v12, v6);
    v7 = v12[0];
    if ( v12[0] )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
      if ( (*(int (__fastcall **)(CWinRTApplicationView *, __int64 *))(*(_QWORD *)v7 + 80LL))(v7, &v15) < 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v12);
        return __abi_winrt_ptr_dtor(v6);
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*a1 + 96LL))(*a1, v15, &v14);
      v9 = retaddr;
      if ( v8 >= 0 )
      {
        if ( !(_DWORD)v14 )
          Windows::UI::Xaml::IWindowPrivate::Show(a3, 1LL);
        goto LABEL_7;
      }
    }
    else
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7C,
        (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
        (const char *)0x8000FFFFLL,
        0);
    }
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x84,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
      (const char *)(unsigned int)v8,
      (int)v12[0]);
    JUMPOUT(0x1800A0490LL);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x8B,
             (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
             v11);
  }
  return result;
}
