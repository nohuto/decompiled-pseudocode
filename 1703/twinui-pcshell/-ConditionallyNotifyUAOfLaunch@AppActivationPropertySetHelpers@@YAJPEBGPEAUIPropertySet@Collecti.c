/*
 * XREFs of ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800068FC
 * Callers:
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180012070 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800179F8 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___ @ 0x18001AC40 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  HRESULT v9; // eax
  __int64 v10; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v12; // rcx
  int v14; // [rsp+28h] [rbp-19h]
  int v15; // [rsp+28h] [rbp-19h]
  _BYTE v16[8]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v17; // [rsp+40h] [rbp-1h] BYREF
  LPWSTR ppwsz; // [rsp+48h] [rbp+7h] BYREF
  const unsigned __int16 *v19; // [rsp+50h] [rbp+Fh] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+27h] BYREF
  HSTRING string; // [rsp+80h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v20[1] = -2LL;
  LODWORD(v17) = 0;
  v4 = 0;
  v19 = a2;
  if ( a2 )
    (*(void (__fastcall **)(const unsigned __int16 *))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppActivation.ShouldNotifyUAOfLaunch", 0x24u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
  LODWORD(v17) = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(&v19, string, v7, v16) >= 0
    && v16[0] )
  {
    v9 = SHStrDupW(psz, &ppwsz);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v20[0] = ppwsz;
      v10 = *(_QWORD *)Windows::Internal::ComTaskPool::WrapWithTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___(
                         &v17,
                         v20);
      CurrentThreadId = GetCurrentThreadId();
      v15 = v10;
      v4 = Windows::Internal::ComTaskPool::RunTask(1LL, 0LL, CurrentThreadId, 0LL);
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v4 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x32,
          (unsigned int)"internal\\shell\\private\\inc\\appactivation_propertyset.h",
          (const char *)(unsigned int)v4,
          v15);
        CoTaskMemFree(ppwsz);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28,
        (unsigned int)"internal\\shell\\private\\inc\\appactivation_propertyset.h",
        (const char *)(unsigned int)v9,
        v14);
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(const unsigned __int16 *))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v4;
}
