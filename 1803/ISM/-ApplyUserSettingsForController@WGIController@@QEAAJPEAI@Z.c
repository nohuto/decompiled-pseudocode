/*
 * XREFs of ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x180079144
 * Callers:
 *     ?OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@Z @ 0x180077174 (-OnUserProfileChanged_impl@WGIRawInputProvider@@AEAAJPEAUIUserProfile@Internal@System@Windows@@@.c)
 *     ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x180078C1C (-NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Gaming::Input::IGameController_____ptr64_Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64___::_)(Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::UserChangedEventArgs_____ptr64___lambda_f89cb9a40605f8ff6ff40ea7b05260f7___1_Windows::Gaming::Input::IGameController_____ptr64_Windows::System::IUserChangedEventArgs_____ptr64_::Invoke @ 0x18007AD40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18007AD40.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x180078210 (-GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WGIController::ApplyUserSettingsForController(WGIController *this, unsigned int *a2)
{
  WGIController *v3; // rsi
  signed int ActivationFactory; // ebx
  HRESULT v5; // eax
  bool AccessibilitySettings; // r15
  __int64 v7; // r8
  __int64 v8; // rdi
  char *v9; // rcx
  char *v10; // r14
  HANDLE FileW; // rax
  struct Windows::Foundation::Collections::IPropertySet *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  signed int v19; // eax
  unsigned __int64 v20; // rcx
  signed int v21; // eax
  unsigned __int64 v22; // rcx
  signed int v23; // eax
  unsigned __int64 v24; // rcx
  signed int LastError; // eax
  unsigned __int64 v26; // rcx
  bool v27; // [rsp+48h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v28; // [rsp+50h] [rbp-51h] BYREF
  __int64 v29; // [rsp+58h] [rbp-49h] BYREF
  int v30; // [rsp+60h] [rbp-41h] BYREF
  __int64 v31; // [rsp+68h] [rbp-39h] BYREF
  __int64 v32; // [rsp+70h] [rbp-31h] BYREF
  __int64 *v33; // [rsp+78h] [rbp-29h] BYREF
  __int64 v34; // [rsp+80h] [rbp-21h] BYREF
  DWORD BytesReturned; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int64 v36[2]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE InBuffer[8]; // [rsp+A0h] [rbp-1h] BYREF
  char v38; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+C8h] [rbp+27h] BYREF

  v36[1] = -2LL;
  v3 = this;
  v34 = 0LL;
  v29 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v30 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
  {
    ActivationFactory = 0;
    goto LABEL_55;
  }
  ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 8))(
                        *((_QWORD *)this + 8),
                        &GUID_f6d99cef_3636_46f4_a0a9_00751df46bcb,
                        &v33);
  if ( ActivationFactory >= 0 )
  {
    ActivationFactory = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v3 + 9))(
                          *((_QWORD *)v3 + 9),
                          &GUID_1baf6522_5f64_42c5_8267_b9fe2215bfbd,
                          &v29);
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 112LL))(v29, &v32);
      if ( ActivationFactory >= 0 )
      {
        if ( !v32 )
        {
          ActivationFactory = -2147024809;
          goto LABEL_55;
        }
        string = 0LL;
        v5 = WindowsCreateStringReference(L"Windows.System.Internal.UserManager", 0x23u, &hstringHeader, &string);
        if ( v5 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
        }
        else
        {
          ActivationFactory = RoGetActivationFactory(string, &GUID_100eb64b_b24c_4c38_8964_720d926d05a4, &v34);
          if ( ActivationFactory < 0 )
            goto LABEL_55;
          ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v34 + 168LL))(
                                v34,
                                v32,
                                &v31);
          if ( ActivationFactory < 0 )
            goto LABEL_55;
          if ( a2 )
          {
            ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 48LL))(v31, &v30);
            if ( ActivationFactory < 0 || v30 != *a2 )
              goto LABEL_55;
          }
          v27 = 0;
          hstringHeader.Reserved.Reserved1 = (PVOID)*((_QWORD *)v3 + 17);
          v28 = 0LL;
          ActivationFactory = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v31 + 88LL))(
                                v31,
                                &v28);
          if ( ActivationFactory < 0 )
            goto LABEL_53;
          AccessibilitySettings = GetAccessibilitySettings(
                                    *((_QWORD *)v3 + 17),
                                    v28,
                                    v36,
                                    (unsigned __int64 *)&hstringHeader.Reserved.Reserved2[8],
                                    (unsigned __int8 *)&hstringHeader.Reserved.Reserved2[16],
                                    &v27);
          v7 = *v33;
          LOBYTE(v7) = v27;
          ActivationFactory = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v33 + 224))(v33, 1LL, v7);
          if ( ActivationFactory < 0 )
            goto LABEL_53;
          v8 = -1LL;
          v9 = &v38;
          if ( !AccessibilitySettings )
            v9 = InBuffer;
          v10 = InBuffer;
          if ( !AccessibilitySettings )
            v10 = &v38;
          *(_QWORD *)v9 = *((_QWORD *)v3 + 17);
          *(_QWORD *)v10 = 0LL;
          FileW = CreateFileW(L"\\\\.\\XboxGIP", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
          LODWORD(v3) = -2147024896;
          if ( FileW == (HANDLE)-1LL )
          {
            if ( (int)GetLastError() > 0 )
              ActivationFactory = (unsigned __int16)GetLastError() | 0x80070000;
            else
              ActivationFactory = GetLastError();
            if ( ActivationFactory < 0 )
              goto LABEL_53;
          }
          else
          {
            v8 = (__int64)FileW;
          }
          if ( DeviceIoControl((HANDLE)v8, 0x40001CE8u, &hstringHeader, 0x18u, 0LL, 0, 0LL, 0LL)
            || ((int)GetLastError() > 0
              ? (ActivationFactory = (unsigned __int16)GetLastError() | 0x80070000)
              : (ActivationFactory = GetLastError()),
                ActivationFactory >= 0) )
          {
            if ( DeviceIoControl((HANDLE)v8, 0x40001D14u, InBuffer, 0x10u, InBuffer, 0x10u, &BytesReturned, 0LL)
              || ((int)GetLastError() > 0
                ? (ActivationFactory = (unsigned __int16)GetLastError() | 0x80070000)
                : (ActivationFactory = GetLastError()),
                  ActivationFactory >= 0) )
            {
              if ( *(_QWORD *)v10 == v36[0]
                || (*(_QWORD *)v10 = v36[0], DeviceIoControl((HANDLE)v8, 0x40001D10u, InBuffer, 0x10u, 0LL, 0, 0LL, 0LL))
                || ((int)GetLastError() > 0
                  ? (ActivationFactory = (unsigned __int16)GetLastError() | 0x80070000)
                  : (ActivationFactory = GetLastError()),
                    ActivationFactory >= 0) )
              {
                if ( v8 != -1 && !CloseHandle((HANDLE)v8) )
                {
                  LastError = GetLastError();
                  v26 = (unsigned __int16)LastError | 0x80070000;
                  if ( LastError <= 0 )
                    v26 = (unsigned int)LastError;
                  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v26);
                  __debugbreak();
                }
              }
              else if ( v8 != -1 && !CloseHandle((HANDLE)v8) )
              {
                v23 = GetLastError();
                v24 = (unsigned __int16)v23 | 0x80070000;
                if ( v23 <= 0 )
                  v24 = (unsigned int)v23;
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v24);
                __debugbreak();
              }
            }
            else if ( v8 != -1 && !CloseHandle((HANDLE)v8) )
            {
              v21 = GetLastError();
              v22 = (unsigned __int16)v21 | 0x80070000;
              if ( v21 <= 0 )
                v22 = (unsigned int)v21;
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v22);
              __debugbreak();
            }
            goto LABEL_53;
          }
          if ( v8 == -1 || CloseHandle((HANDLE)v8) )
          {
LABEL_53:
            v12 = v28;
            if ( v28 )
            {
              v28 = 0LL;
              (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v12 + 16LL))(v12);
            }
            goto LABEL_55;
          }
        }
        v19 = GetLastError();
        v20 = (unsigned int)v3 | (unsigned __int16)v19;
        if ( v19 <= 0 )
          v20 = (unsigned int)v19;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v20);
        __debugbreak();
      }
    }
  }
LABEL_55:
  v13 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
  }
  v16 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)ActivationFactory;
}
