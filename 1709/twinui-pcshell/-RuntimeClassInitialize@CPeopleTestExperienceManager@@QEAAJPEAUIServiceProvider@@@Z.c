/*
 * XREFs of ?RuntimeClassInitialize@CPeopleTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B2AEC
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B3038 (--$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Det.c)
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
__int64 __fastcall CPeopleTestExperienceManager::RuntimeClassInitialize(
        CPeopleTestExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  HRESULT v5; // eax
  HRESULT v6; // eax
  CSingleViewShellExperience *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  HRESULT v10; // eax
  int v11; // eax
  HSTRING_HEADER v13; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v14; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( *((CPeopleTestExperienceManager **)this + 36) != this )
  {
    if ( this )
      (*(void (__fastcall **)(CPeopleTestExperienceManager *))(*(_QWORD *)this + 8LL))(this);
    v4 = *((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = this;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.PeopleTest", 0x2Bu, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v14 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", 0x38u, &v13, &v14);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = (CPeopleTestExperienceManager *)((char *)this + 88);
  v8 = CSingleViewShellExperience::RuntimeClassInitialize(
         (HSTRING *)this + 11,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
         a2,
         v14,
         string);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14 = 0LL;
    v10 = WindowsCreateStringReference(L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", 0x28u, &v13, &v14);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = CSingleViewShellExperience::AddTestAumid(v7, v14);
    v9 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peopletestexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x30,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peopletestexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  }
  return v9;
}
