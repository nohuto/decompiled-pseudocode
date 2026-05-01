/*
 * XREFs of ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18014CC9C
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18014B890 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_e017888f44d5ff27eadb815527f2c0b4___ @ 0x18014FB80 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014FB80.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_9262982839a28cab179fa715a6d41adf___ @ 0x18014FBBC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014FBBC.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_f346c8761af3477dee55fae467d15d70___ @ 0x18014FBF8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014FBF8.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_f4f0d7756f20baa8e20e4c6b0584cdb8___ @ 0x18014FC34 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014FC34.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___lambda_ca2e54acfe7c58ca62c84e151e601d9f___ @ 0x18014FC70 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014FC70.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_64453e8f1d1795856607ef361707b1d3___ @ 0x18014FDCC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014FDCC.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlLauncher::InitializeCortanaExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  HRESULT v4; // eax
  int v5; // eax
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 **v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  char *v18; // r8
  __int64 v19; // rdi
  int v20; // eax
  XamlLauncher *v21; // r13
  __int64 *v22; // rcx
  __int64 v23; // rax
  XamlLauncher *v24; // rbx
  int v25; // eax
  __int64 (__fastcall ***v26)(_QWORD, GUID *, char *); // rcx
  XamlLauncher *v28; // [rsp+28h] [rbp-49h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, char *); // [rsp+30h] [rbp-41h] BYREF
  XamlLauncher *v30; // [rsp+38h] [rbp-39h] BYREF
  __int64 v31; // [rsp+40h] [rbp-31h] BYREF
  __int64 v32; // [rsp+48h] [rbp-29h] BYREF
  __int64 v33; // [rsp+50h] [rbp-21h] BYREF
  __int64 v34; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v35[1] = -2LL;
  v30 = this;
  v29 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Cortana", 0x28u, &hstringHeader, &string);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, HSTRING, _QWORD))(*(_QWORD *)a2 + 48LL))(
         a2,
         string,
         &v29);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 847LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_35;
  }
  v8 = (__int64 **)((char *)this + 96);
  v9 = *((_QWORD *)this + 12);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v5 = (**v29)(v29, &GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe, (char *)this + 96);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 848LL;
    goto LABEL_9;
  }
  v28 = this;
  Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_e017888f44d5ff27eadb815527f2c0b4___(
    &v31,
    &v28);
  v10 = v31;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(**v8 + 216))(*v8, v31, (char *)this + 184);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v28 = this;
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_9262982839a28cab179fa715a6d41adf___(
      &v32,
      &v28);
    v12 = v32;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(**v8 + 232))(*v8, v32, (char *)this + 192);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v28 = this;
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____ptr64___lambda_f346c8761af3477dee55fae467d15d70___(
        &v33,
        &v28);
      v14 = v33;
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(**v8 + 264))(*v8, v33, (char *)this + 200);
      v6 = v15;
      if ( v15 >= 0 )
      {
        v28 = this;
        Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_f4f0d7756f20baa8e20e4c6b0584cdb8___(
          &v34,
          &v28);
        v16 = v34;
        v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, char *))(**v8 + 280))(*v8, v34, (char *)this + 208);
        v6 = v17;
        if ( v17 >= 0 )
        {
          v28 = this;
          Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___lambda_ca2e54acfe7c58ca62c84e151e601d9f___(
            v35,
            &v28);
          v18 = (char *)this + 216;
          v19 = v35[0];
          v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(**v8 + 168))(*v8, v35[0], v18);
          v6 = v20;
          if ( v20 >= 0 )
          {
            v21 = v30;
            Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_64453e8f1d1795856607ef361707b1d3___(
              &v28,
              &v30);
            v22 = *v8;
            v23 = **v8;
            v24 = v28;
            v25 = (*(__int64 (__fastcall **)(__int64 *, XamlLauncher *, __int64))(v23 + 200))(
                    v22,
                    v28,
                    (__int64)v21 + 224);
            v6 = v25;
            if ( v25 >= 0 )
              v6 = 0;
            else
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x38D,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                (const char *)(unsigned int)v25);
            if ( v24 )
              (*(void (__fastcall **)(XamlLauncher *))(*(_QWORD *)v24 + 16LL))(v24);
          }
          else
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x37C,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
              (const char *)(unsigned int)v20);
          }
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x374,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)v17);
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x36A,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v15);
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x360,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v13);
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x358,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v11);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_35:
  v26 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v26)[2])(v26);
  }
  return v6;
}
