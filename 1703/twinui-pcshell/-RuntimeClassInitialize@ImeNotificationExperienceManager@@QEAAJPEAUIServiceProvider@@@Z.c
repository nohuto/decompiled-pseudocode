/*
 * XREFs of ?RuntimeClassInitialize@ImeNotificationExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009F678
 * Callers:
 *     ??$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800A02A8 (--$MakeAndInitialize@VImeNotificationExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18018023C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImeNotificationExperienceManager::RuntimeClassInitialize(HSTRING *this, struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rdi
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  HSTRING v10; // rcx
  HSTRING_HEADER v11; // [rsp+38h] [rbp-50h] BYREF
  HSTRING v12; // [rsp+50h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-30h] BYREF
  HSTRING string; // [rsp+70h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (struct IWeakReferenceSource *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL));
  v12 = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ImeStatusNotification", 0x36u, &v11, &v12);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
         0x37u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize(this + 6, v4, a2, string, v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *((_DWORD *)this + 27) = 4;
    if ( this[31] != (HSTRING)this )
    {
      (*((void (__fastcall **)(HSTRING *))*this + 1))(this);
      v10 = this[31];
      this[31] = (HSTRING)this;
      if ( v10 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x49,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
