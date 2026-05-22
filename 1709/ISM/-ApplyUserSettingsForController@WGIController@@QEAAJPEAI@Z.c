/*
 * XREFs of ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A0444
 * Callers:
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x18009DD64 (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x18009FEF8 (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64___::_)(Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_f89cb9a40605f8ff6ff40ea7b05260f7___1_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64_::Invoke @ 0x1800A2800 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A2800.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18009F2AC (-GetAccessibilitySettings@@YAJ_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIController::ApplyUserSettingsForController(WGIController *this, unsigned int *a2)
{
  signed int LastError; // ebx
  int ActivationFactory; // eax
  __int64 v6; // rcx
  int v7; // r9d
  HRESULT v8; // eax
  int AccessibilitySettings; // eax
  __int64 v10; // rcx
  int v11; // r9d
  __int64 v12; // r8
  bool v13; // r15
  __int64 v14; // rdi
  char *v15; // rcx
  char *v16; // r14
  HANDLE FileW; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  signed int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  signed int v26; // eax
  unsigned __int64 v27; // rcx
  signed int v28; // eax
  unsigned __int64 v29; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  bool v37; // [rsp+48h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v38; // [rsp+50h] [rbp-51h] BYREF
  __int64 v39; // [rsp+58h] [rbp-49h] BYREF
  int v40; // [rsp+60h] [rbp-41h] BYREF
  __int64 v41; // [rsp+68h] [rbp-39h] BYREF
  __int64 v42; // [rsp+70h] [rbp-31h] BYREF
  __int64 v43; // [rsp+78h] [rbp-29h] BYREF
  __int64 v44; // [rsp+80h] [rbp-21h] BYREF
  DWORD BytesReturned; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int64 v46[2]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE InBuffer[8]; // [rsp+A0h] [rbp-1h] BYREF
  char v48; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+C8h] [rbp+27h] BYREF

  v46[1] = -2LL;
  v44 = 0LL;
  v39 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v40 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
  {
    LastError = 0;
    goto LABEL_95;
  }
  ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 8))(
                        *((_QWORD *)this + 8),
                        &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb,
                        &v43);
  LastError = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_95;
    v7 = 457;
    goto LABEL_6;
  }
  ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 9))(
                        *((_QWORD *)this + 9),
                        &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
                        &v39);
  LastError = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 459;
LABEL_6:
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, v7, ActivationFactory);
      goto LABEL_95;
    }
    goto LABEL_95;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 112LL))(v39, &v42);
  LastError = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    if ( !v42 )
    {
      LastError = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 461, 87);
      goto LABEL_95;
    }
    string = 0LL;
    v8 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      __debugbreak();
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_100eb64b_b24c_4c38_8964_720d926d05a4, &v44);
    LastError = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 466;
        goto LABEL_6;
      }
      goto LABEL_95;
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v44 + 168LL))(
                          v44,
                          v42,
                          &v41);
    LastError = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 467;
        goto LABEL_6;
      }
      goto LABEL_95;
    }
    if ( a2 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 48LL))(v41, &v40);
      LastError = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v7 = 471;
          goto LABEL_6;
        }
        goto LABEL_95;
      }
      if ( v40 != *a2 )
        goto LABEL_95;
    }
    v37 = 0;
    hstringHeader.Reserved.Reserved1 = (PVOID)*((_QWORD *)this + 17);
    v38 = 0LL;
    AccessibilitySettings = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v41 + 88LL))(
                              v41,
                              &v38);
    LastError = AccessibilitySettings;
    if ( AccessibilitySettings < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_93;
      v11 = 486;
      goto LABEL_32;
    }
    AccessibilitySettings = GetAccessibilitySettings(
                              *((_QWORD *)this + 17),
                              v38,
                              v46,
                              (unsigned __int64 *)&hstringHeader.Reserved.Reserved2[8],
                              (unsigned __int8 *)&hstringHeader.Reserved.Reserved2[16],
                              &v37);
    LastError = AccessibilitySettings;
    if ( AccessibilitySettings >= 0 )
    {
      v13 = AccessibilitySettings == 1;
      LOBYTE(v12) = v37;
      AccessibilitySettings = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v43 + 192LL))(
                                v43,
                                1LL,
                                v12);
      LastError = AccessibilitySettings;
      if ( AccessibilitySettings >= 0 )
      {
        v14 = -1LL;
        v15 = &v48;
        if ( !v13 )
          v15 = InBuffer;
        v16 = InBuffer;
        if ( !v13 )
          v16 = &v48;
        *(_QWORD *)v15 = *((_QWORD *)this + 17);
        *(_QWORD *)v16 = 0LL;
        FileW = CreateFileW(L"\\\\.\\XboxGIP", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
        if ( FileW == (HANDLE)-1LL )
        {
          if ( (int)GetLastError() > 0 )
            LastError = (unsigned __int16)GetLastError() | 0x80070000;
          else
            LastError = GetLastError();
          if ( LastError < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 521, LastError);
            goto LABEL_93;
          }
        }
        else
        {
          v14 = (__int64)FileW;
        }
        if ( DeviceIoControl((HANDLE)v14, 0x40001CE8u, &hstringHeader, 0x18u, 0LL, 0, 0LL, 0LL)
          || ((int)GetLastError() > 0
            ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
            : (LastError = GetLastError()),
              LastError >= 0) )
        {
          if ( DeviceIoControl((HANDLE)v14, 0x40001D14u, InBuffer, 0x10u, InBuffer, 0x10u, &BytesReturned, 0LL)
            || ((int)GetLastError() > 0
              ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
              : (LastError = GetLastError()),
                LastError >= 0) )
          {
            if ( *(_QWORD *)v16 == v46[0]
              || (*(_QWORD *)v16 = v46[0], DeviceIoControl((HANDLE)v14, 0x40001D10u, InBuffer, 0x10u, 0LL, 0, 0LL, 0LL))
              || ((int)GetLastError() > 0
                ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
                : (LastError = GetLastError()),
                  LastError >= 0) )
            {
              if ( v14 != -1 && !CloseHandle((HANDLE)v14) )
              {
                v28 = GetLastError();
                v29 = (unsigned __int16)v28 | 0x80070000;
                if ( v28 <= 0 )
                  v29 = (unsigned int)v28;
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v29);
              }
            }
            else
            {
              if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
                McTemplateU0qqq(v25, &MinInput_Warning_CheckResult, 0, 565, LastError);
              if ( v14 != -1 && !CloseHandle((HANDLE)v14) )
              {
                v26 = GetLastError();
                v27 = (unsigned __int16)v26 | 0x80070000;
                if ( v26 <= 0 )
                  v27 = (unsigned int)v26;
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v27);
                __debugbreak();
              }
            }
          }
          else
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v22, &MinInput_Warning_CheckResult, 0, 547, LastError);
            if ( v14 != -1 && !CloseHandle((HANDLE)v14) )
            {
              v23 = GetLastError();
              v24 = (unsigned __int16)v23 | 0x80070000;
              if ( v23 <= 0 )
                v24 = (unsigned int)v23;
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v24);
              __debugbreak();
            }
          }
        }
        else
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 534, LastError);
          if ( v14 != -1 && !CloseHandle((HANDLE)v14) )
          {
            v20 = GetLastError();
            v21 = (unsigned __int16)v20 | 0x80070000;
            if ( v20 <= 0 )
              v21 = (unsigned int)v20;
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v21);
            __debugbreak();
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 498;
        goto LABEL_32;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 494;
LABEL_32:
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, v11, AccessibilitySettings);
    }
LABEL_93:
    v30 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    goto LABEL_95;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 460;
    goto LABEL_6;
  }
LABEL_95:
  v31 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return (unsigned int)LastError;
}
