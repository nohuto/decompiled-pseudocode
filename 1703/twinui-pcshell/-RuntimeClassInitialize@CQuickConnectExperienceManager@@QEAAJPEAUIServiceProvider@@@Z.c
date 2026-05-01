/*
 * XREFs of ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800AC488
 * Callers:
 *     ?GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800AE190 (-GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?ExperienceManager_StartedLifeTime@QuickConnectTelemetry@@SAXXZ @ 0x1800A8204 (-ExperienceManager_StartedLifeTime@QuickConnectTelemetry@@SAXXZ.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18018023C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180180944 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQuickConnectExperienceManager::RuntimeClassInitialize(HSTRING *this, struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rdi
  HRESULT v5; // eax
  HRESULT v6; // eax
  CSingleViewShellExperience *v7; // rsi
  int v8; // eax
  unsigned int v9; // edi
  HSTRING v11; // rcx
  HSTRING v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  HRESULT v15; // eax
  int v16; // eax
  HSTRING_HEADER v17; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v18; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = (struct IWeakReferenceSource *)((unsigned __int64)(this + 2) & -(__int64)(this != 0LL));
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.QuickConnect", 0x2Du, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v18 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v17, &v18);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = (CSingleViewShellExperience *)(this + 9);
  v8 = CSingleViewShellExperience::RuntimeClassInitialize(this + 9, v4, a2, v18, string);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_DWORD *)this + 33) = 13;
    if ( this[7] != (HSTRING)this )
    {
      (*((void (__fastcall **)(HSTRING *))*this + 1))(this);
      v11 = this[7];
      this[7] = (HSTRING)this;
      if ( v11 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
    }
    QuickConnectTelemetry::ExperienceManager_StartedLifeTime();
    v12 = this[50];
    if ( v12 )
    {
      this[50] = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, HSTRING *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IRealmActivationHistory,
            &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
            this + 50);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v18 = 0LL;
      v15 = WindowsCreateStringReference(L"ShellExperienceHostVS_ccv6fwk6gx0xp!App", 0x27u, &v17, &v18);
      if ( v15 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
      v16 = CSingleViewShellExperience::AddTestAumid(v7, v18);
      v14 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x223,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x21F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    }
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x218,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
