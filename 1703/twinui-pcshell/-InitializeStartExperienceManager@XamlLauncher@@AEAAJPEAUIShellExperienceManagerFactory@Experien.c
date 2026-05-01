/*
 * XREFs of ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18014BB1C
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18014B890 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_3740d3b01fc7905a4dc3a6d1438f472c___ @ 0x18014F7E8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Exper.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_b459ff12bad0437e5f2edde67f38b2be___ @ 0x18014F824 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014F824.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105___ @ 0x18014F980 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18014F980.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncher::InitializeStartExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  HRESULT v4; // eax
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdx
  IUnknown **v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  IUnknown *v14; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v16; // rbx
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // [rsp+20h] [rbp-60h] BYREF
  XamlLauncher *v21; // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v24[1] = -2LL;
  v20 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.StartMenu", 0x2Au, &hstringHeader, &string);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, HSTRING, _QWORD))(*(_QWORD *)a2 + 48LL))(
         a2,
         string,
         &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 536LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_23;
  }
  v8 = (IUnknown **)((char *)this + 88);
  v9 = *((_QWORD *)this + 11);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v5 = (**v20)(v20, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, (char *)this + 88);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 537LL;
    goto LABEL_9;
  }
  IUnknown_SetSite(*v8, *((IUnknown **)this + 1));
  v21 = this;
  Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_3740d3b01fc7905a4dc3a6d1438f472c___(
    &v22,
    &v21);
  v10 = v22;
  v11 = ((__int64 (__fastcall *)(IUnknown *, __int64, char *))(*v8)->lpVtbl[8].AddRef)(*v8, v22, (char *)this + 160);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v21 = this;
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_b459ff12bad0437e5f2edde67f38b2be___(
      &v23,
      &v21);
    v12 = v23;
    v13 = ((__int64 (__fastcall *)(IUnknown *, __int64, char *))(*v8)->lpVtbl[9].QueryInterface)(
            *v8,
            v23,
            (char *)this + 168);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v21 = this;
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_IInspectable_____ptr64___lambda_4e5ace4978557f95a503fdd97e32a105___(
        v24,
        &v21);
      v14 = *v8;
      lpVtbl = (*v8)->lpVtbl;
      v16 = v24[0];
      v17 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, char *))lpVtbl[7].Release)(v14, v24[0], (char *)this + 176);
      v6 = v17;
      if ( v17 >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x245,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v17);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x22F,
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
      (void *)0x224,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v11);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_23:
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v18)[2])(v18);
  }
  return v6;
}
