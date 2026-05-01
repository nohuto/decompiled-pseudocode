/*
 * XREFs of ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A1A68
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800A3CE0 (--$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18018023C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180180944 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::RuntimeClassInitialize(
        CPeopleBarFlyoutExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  int v10; // eax
  HSTRING_HEADER v12; // [rsp+40h] [rbp-21h] BYREF
  HSTRING v13; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-1h] BYREF
  HSTRING string; // [rsp+78h] [rbp+17h] BYREF
  HSTRING_HEADER v16; // [rsp+80h] [rbp+1Fh] BYREF
  HSTRING v17; // [rsp+98h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( *((struct IServiceProvider **)this + 32) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
         0x38u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v13 = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.PeopleBarFlyout", 0x30u, &v12, &v13);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize(
         (HSTRING *)this + 6,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         string,
         v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v17 = 0LL;
    v9 = WindowsCreateStringReference(L"PeopleExperienceHostVS_1sybxpkk05vjp!App", 0x28u, &v16, &v17);
    if ( v9 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    v10 = CSingleViewShellExperience::AddTestAumid((CPeopleBarFlyoutExperienceManager *)((char *)this + 48), v17);
    v8 = v10;
    if ( v10 >= 0 )
    {
      *((_DWORD *)this + 27) = 4;
      return 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x44,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
  return v8;
}
