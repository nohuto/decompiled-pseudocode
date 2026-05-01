/*
 * XREFs of ?RuntimeClassInitialize@CTaskContinuityActivitiesExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800AAF14
 * Callers:
 *     ?GetExperienceManager@TaskContinuityActivitiesExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800AB8C0 (-GetExperienceManager@TaskContinuityActivitiesExperienceManagerFactory@@UEAAJPEAUIServiceProvide.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::RuntimeClassInitialize(
        HSTRING *this,
        struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rbx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  HSTRING v10; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  HSTRING v15; // rcx
  __int64 v16; // rcx
  __int64 v18[2]; // [rsp+38h] [rbp-19h] BYREF
  HSTRING_HEADER v19; // [rsp+48h] [rbp-9h] BYREF
  HSTRING v20; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  HSTRING string; // [rsp+80h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v18[1] = -2LL;
  v4 = (struct IWeakReferenceSource *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL));
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.ShellExperience.TaskContinuityActivities",
         0x39u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v20 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v19, &v20);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize(this + 9, v4, a2, v20, string);
  if ( v7 < 0 )
  {
    v8 = 80LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v19, (const WCHAR **)&off_180214718);
  v7 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)(this + 9), *(HSTRING *)(v9 + 24));
  if ( v7 < 0 )
  {
    v8 = 82LL;
    goto LABEL_7;
  }
  if ( this[8] != (HSTRING)this )
  {
    if ( this )
      (*((void (__fastcall **)(HSTRING *))*this + 1))(this);
    v10 = this[8];
    this[8] = (HSTRING)this;
    if ( v10 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v18[0] = 0LL;
  lpVtbl = a2->lpVtbl;
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v18);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &IID_IActiveZBandNotificationForMonitorService,
          &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
          v12);
  v7 = v13;
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v18[0] + 24LL))(
            v18[0],
            (unsigned __int64)(this + 3) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            (char *)this + 272);
    v7 = v13;
    if ( v13 >= 0 )
    {
      if ( this[35] != (HSTRING)a2 )
      {
        ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
        v15 = this[35];
        this[35] = (HSTRING)a2;
        if ( v15 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v7 = 0;
      goto LABEL_24;
    }
    v14 = 89LL;
  }
  else
  {
    v14 = 88LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_24:
  v16 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v7;
}
