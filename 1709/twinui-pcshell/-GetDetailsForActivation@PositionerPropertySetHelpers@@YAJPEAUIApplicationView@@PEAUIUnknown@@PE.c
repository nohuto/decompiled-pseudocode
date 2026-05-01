/*
 * XREFs of ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800FA52C
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800FB720 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FB940 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180018AF4 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800FA0C8 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z @ 0x1800FA3F8 (-GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Colle.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801C0F4C (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x1801C27E4 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 *     ?IsComponentUiHostWindowForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@@Z @ 0x1801C2938 (-IsComponentUiHostWindowForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
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
  __int64 v13; // rax
  struct Windows::Foundation::IPropertyValue *v14; // r8
  HRESULT v15; // eax
  struct Windows::Foundation::IPropertyValue *v16; // r8
  HRESULT v17; // eax
  struct Windows::Foundation::IPropertyValue *v18; // r8
  HWND *v19; // r9
  unsigned __int16 **v20; // r8
  PVOID Reserved1; // rdi
  HWND v22; // rdx
  const unsigned __int16 *v23; // rdx
  ViewSizePreferenceHelpers *v24; // rcx
  char v25; // [rsp+20h] [rbp-60h] BYREF
  char v26; // [rsp+21h] [rbp-5Fh] BYREF
  _BYTE v27[6]; // [rsp+22h] [rbp-5Eh] BYREF
  ViewSizePreferenceHelpers *v28; // [rsp+28h] [rbp-58h] BYREF
  ViewSizePreferenceHelpers *v29; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-48h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v32[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v33 = -2LL;
  LODWORD(a3->lpVtbl) = 0;
  if ( !a2 )
    return 0LL;
  v29 = 0LL;
  v7 = *a2;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v29);
  v9 = (*v7)((struct IApplicationView *)a2, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = 0;
    v28 = v29;
    if ( v29 )
      (*(void (__fastcall **)(ViewSizePreferenceHelpers *))(*(_QWORD *)v29 + 8LL))(v29);
    string = 0LL;
    v12 = WindowsCreateStringReference(L"AAMShim.ActivateOptionsInternal", 0x1Fu, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
                string,
                &v30) >= 0
      && (v30 & 0x1000000) != 0 )
    {
      v11 = 1;
    }
    v26 = 0;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)off_180214A00);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
                *(HSTRING *)(v13 + 24),
                v14,
                (__int64)&v26) >= 0
      && v26 )
    {
      v11 |= 0x10u;
    }
    v27[0] = 0;
    string = 0LL;
    v15 = WindowsCreateStringReference(L"ApplicationMultiviewActivationPolicy", 0x24u, &hstringHeader, &string);
    if ( v15 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
                string,
                v16,
                (__int64)v27) >= 0
      && v27[0] )
    {
      v11 |= 4u;
    }
    v25 = 0;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"AppActivationResponse", 0x15u, &hstringHeader, &string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v28,
                string,
                v18,
                (__int64)&v25) < 0 )
    {
      v25 = 0;
    }
    else if ( v25 )
    {
      v11 |= 8u;
    }
    if ( (int)ViewSizePreferenceHelpers::GetSourceViewSizePreferenceFromPropertySet(
                v29,
                (struct Windows::Foundation::Collections::IPropertySet *)v32,
                (enum APPLICATION_VIEW_SIZE_PREFERENCE *)&hWnd,
                v19) >= 0 )
    {
      Reserved1 = 0LL;
      memset(&hstringHeader, 0, sizeof(hstringHeader));
      if ( !v25 )
      {
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
        if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(hWnd, (HWND)&hstringHeader, v20) < 0
          || (int)CallerIdentity::ApiPolicyChecker::IsComponentUiHostWindowForeground(
                    (CallerIdentity::ApiPolicyChecker *)hWnd,
                    v22) >= 0 )
        {
          Reserved1 = hstringHeader.Reserved.Reserved1;
        }
        else
        {
          Reserved1 = hstringHeader.Reserved.Reserved1;
          if ( (int)CallerIdentity::ApiPolicyChecker::ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground(
                      (LPCWCH)hstringHeader.Reserved.Reserved1,
                      v23) < 0 )
            v11 |= 2u;
        }
      }
      if ( Reserved1 )
        CoTaskMemFree(Reserved1);
    }
    LODWORD(a3->lpVtbl) = v11;
    v10 = 0;
    if ( v28 )
      (*(void (__fastcall **)(ViewSizePreferenceHelpers *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"internal\\shell\\private\\inc\\positionerpropertysethelpers.h",
      (const char *)(unsigned int)v9);
  }
  v24 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(ViewSizePreferenceHelpers *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v10;
}
