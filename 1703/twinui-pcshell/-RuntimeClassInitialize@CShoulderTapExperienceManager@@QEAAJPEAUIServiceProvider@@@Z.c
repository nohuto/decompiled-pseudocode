/*
 * XREFs of ?RuntimeClassInitialize@CShoulderTapExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A6F30
 * Callers:
 *     ?GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800A7CB0 (-GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIIn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18018023C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180180944 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CShoulderTapExperienceManager::RuntimeClassInitialize(
        CShoulderTapExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // esi
  __int64 v8; // rdx
  HRESULT v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  HSTRING_HEADER v14; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v15; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( *((struct IServiceProvider **)this + 30) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ShoulderTap", 0x2Cu, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v15 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", 0x38u, &v14, &v15);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize(
         (HSTRING *)this + 5,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
         a2,
         v15,
         string);
  if ( v7 < 0 )
  {
    v8 = 87LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v15 = 0LL;
  v10 = WindowsCreateStringReference(L"PeopleExperienceHostVS_1sybxpkk05vjp!App", 0x28u, &v14, &v15);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  v7 = CSingleViewShellExperience::AddTestAumid((CShoulderTapExperienceManager *)((char *)this + 40), v15);
  if ( v7 < 0 )
  {
    v8 = 90LL;
    goto LABEL_12;
  }
  v11 = *((_QWORD *)this + 31);
  if ( v11 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
          a2,
          &GUID_a1ae3363_f729_466f_b0f2_2ed6e5bfaa68,
          &GUID_a1ae3363_f729_466f_b0f2_2ed6e5bfaa68,
          (char *)this + 248);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  return v13;
}
