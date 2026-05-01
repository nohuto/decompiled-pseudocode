/*
 * XREFs of ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800D7154
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800D83F0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8600 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800179F8 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800D6CF0 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z @ 0x1800D7020 (-GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Colle.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801757E4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x180176CAC (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PositionerPropertySetHelpers::GetDetailsForActivation(
        PositionerPropertySetHelpers *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct IUnknown *a3,
        enum PositionerPropertySetHelpers::ActivationPropertyFlags *a4)
{
  __int64 (__fastcall **v7)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // ebx
  HRESULT v12; // eax
  HRESULT v13; // eax
  struct Windows::Foundation::IPropertyValue *v14; // r8
  HRESULT v15; // eax
  struct Windows::Foundation::IPropertyValue *v16; // r8
  HWND *v17; // r9
  unsigned __int16 **v18; // r8
  PVOID Reserved1; // rdi
  int ImmersiveAppIdFromWindow; // eax
  const unsigned __int16 *v21; // rdx
  ViewSizePreferenceHelpers *v22; // rcx
  char v23; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v24[7]; // [rsp+21h] [rbp-5Fh] BYREF
  ViewSizePreferenceHelpers *v25; // [rsp+28h] [rbp-58h] BYREF
  ViewSizePreferenceHelpers *v26; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v28[4]; // [rsp+3Ch] [rbp-44h] BYREF
  HWND hWnd[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  hWnd[1] = (HWND)-2LL;
  LODWORD(a3->lpVtbl) = 0;
  if ( !a2 )
    return 0LL;
  v25 = 0LL;
  v7 = *a2;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v25);
  v9 = (*v7)((struct IApplicationView *)a2, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = 0;
    v26 = v25;
    if ( v25 )
      (*(void (__fastcall **)(ViewSizePreferenceHelpers *))(*(_QWORD *)v25 + 8LL))(v25);
    string = 0LL;
    v12 = WindowsCreateStringReference(L"AAMShim.ActivateOptionsInternal", 0x1Fu, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                string,
                &v27) >= 0
      && (v27 & 0x1000000) != 0 )
    {
      v11 = 1;
    }
    v24[0] = 0;
    string = 0LL;
    v13 = WindowsCreateStringReference(L"ApplicationMultiviewActivationPolicy", 0x24u, &hstringHeader, &string);
    if ( v13 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                string,
                v14,
                (__int64)v24) >= 0
      && v24[0] )
    {
      v11 |= 4u;
    }
    v23 = 0;
    string = 0LL;
    v15 = WindowsCreateStringReference(L"AppActivationResponse", 0x15u, &hstringHeader, &string);
    if ( v15 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
                string,
                v16,
                (__int64)&v23) < 0 )
    {
      v23 = 0;
    }
    else if ( v23 )
    {
      v11 |= 8u;
    }
    if ( (int)ViewSizePreferenceHelpers::GetSourceViewSizePreferenceFromPropertySet(
                v25,
                (struct Windows::Foundation::Collections::IPropertySet *)v28,
                (enum APPLICATION_VIEW_SIZE_PREFERENCE *)hWnd,
                v17) >= 0 )
    {
      Reserved1 = 0LL;
      memset(&hstringHeader, 0, sizeof(hstringHeader));
      if ( !v23 )
      {
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
        ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(hWnd[0], (HWND)&hstringHeader, v18);
        Reserved1 = hstringHeader.Reserved.Reserved1;
        if ( ImmersiveAppIdFromWindow >= 0
          && (int)CallerIdentity::ApiPolicyChecker::ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground(
                    (LPCWCH)hstringHeader.Reserved.Reserved1,
                    v21) < 0 )
        {
          v11 |= 2u;
        }
      }
      if ( Reserved1 )
        CoTaskMemFree(Reserved1);
    }
    LODWORD(a3->lpVtbl) = v11;
    v10 = 0;
    if ( v26 )
      (*(void (__fastcall **)(ViewSizePreferenceHelpers *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x42,
      (__int64)"internal\\shell\\private\\inc\\positionerpropertysethelpers.h",
      (const char *)(unsigned int)v9);
  }
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(ViewSizePreferenceHelpers *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v10;
}
