/*
 * XREFs of ?InitializeJumpViewExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18014BDB0
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18014B890 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::InitializeJumpViewExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  HRESULT v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v12; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v13; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11[1] = -2LL;
  v11[0] = 0LL;
  v13 = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.JumpView", 0x29u, &v12, &v13);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, HSTRING, _QWORD *))(*(_QWORD *)a2 + 48LL))(
         a2,
         v13,
         v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 589LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v8 = *((_QWORD *)this + 13);
  if ( v8 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v11[0])(
         v11[0],
         &GUID_58a98b87_ed3c_4e12_b5df_c72bf4470aee,
         (char *)this + 104);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 590LL;
    goto LABEL_9;
  }
  v6 = 0;
LABEL_11:
  v9 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
