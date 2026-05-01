/*
 * XREFs of ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B1078
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B25B0 (--$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvide.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarJumpViewExperienceManager::RuntimeClassInitialize(
        CPeopleBarJumpViewExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  HRESULT v6; // eax
  HRESULT v7; // eax
  int v8; // esi
  __int64 v9; // rdx
  HRESULT v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  HSTRING_HEADER v15; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v16; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( *((CPeopleBarJumpViewExperienceManager **)this + 32) != this )
  {
    if ( this )
      (*(void (__fastcall **)(CPeopleBarJumpViewExperienceManager *))(*(_QWORD *)this + 8LL))(this);
    v4 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = this;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( *((struct IServiceProvider **)this + 34) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v5 = *((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 29) = 13;
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"Windows.Internal.ShellExperience.PeopleBarJumpView",
         0x32u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v16 = 0LL;
  v7 = WindowsCreateStringReference(L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", 0x38u, &v15, &v16);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  v8 = CSingleViewShellExperience::RuntimeClassInitialize(
         (HSTRING *)this + 7,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
         a2,
         v16,
         string);
  if ( v8 < 0 )
  {
    v9 = 97LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v16 = 0LL;
  v11 = WindowsCreateStringReference(L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", 0x28u, &v15, &v16);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
  v8 = CSingleViewShellExperience::AddTestAumid((CPeopleBarJumpViewExperienceManager *)((char *)this + 56), v16);
  if ( v8 < 0 )
  {
    v9 = 98LL;
    goto LABEL_17;
  }
  v12 = *((_QWORD *)this + 33);
  if ( v12 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
          a2,
          &GUID_69f7be28_e794_47d3_8ec4_e9386520c172,
          &GUID_69f7be28_e794_47d3_8ec4_e9386520c172,
          (char *)this + 264);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  return v14;
}
