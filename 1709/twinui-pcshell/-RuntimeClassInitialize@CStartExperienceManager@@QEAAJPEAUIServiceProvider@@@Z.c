/*
 * XREFs of ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B6434
 * Callers:
 *     ?GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800B92B0 (-GetExperienceManager@StartExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspecta.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1801DBEA0 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::RuntimeClassInitialize(
        CStartExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rbx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int HostExperiencePriorityManipulator; // ebx
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r14
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v14; // rax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-60h] BYREF
  HSTRING string; // [rsp+50h] [rbp-48h] BYREF
  HSTRING_HEADER v20; // [rsp+58h] [rbp-40h] BYREF
  HSTRING v21; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (struct IWeakReferenceSource *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  v21 = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.StartMenu", 0x2Au, &v20, &v21);
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
  HostExperiencePriorityManipulator = CSingleViewShellExperience::RuntimeClassInitialize(
                                        (HSTRING *)this + 38,
                                        v4,
                                        a2,
                                        string,
                                        v21);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v8 = 212LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
    return (unsigned int)HostExperiencePriorityManipulator;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_1802147D0);
  HostExperiencePriorityManipulator = CSingleViewShellExperience::AddTestAumid(
                                        (CStartExperienceManager *)((char *)this + 304),
                                        *(HSTRING *)(v10 + 24));
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v8 = 213LL;
    goto LABEL_7;
  }
  *((_DWORD *)this + 91) = 6;
  if ( *((struct IServiceProvider **)this + 63) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v11 = *((_QWORD *)this + 63);
    *((_QWORD *)this + 63) = a2;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (_QWORD *)((char *)this + 528);
  lpVtbl = a2->lpVtbl;
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 66);
  HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
                                        a2,
                                        &IID_IImmersiveWindowMessageService,
                                        &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                                        v14);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v8 = 219LL;
    goto LABEL_7;
  }
  HostExperiencePriorityManipulator = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v12 + 24LL))(
                                        *v12,
                                        26LL,
                                        ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
                                        (char *)this + 512);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v8 = 220LL;
    goto LABEL_7;
  }
  HostExperiencePriorityManipulator = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v12 + 24LL))(
                                        *v12,
                                        1025LL,
                                        ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
                                        (char *)this + 516);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v8 = 221LL;
    goto LABEL_7;
  }
  HostExperiencePriorityManipulator = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v12 + 24LL))(
                                        *v12,
                                        798LL,
                                        ((unsigned __int64)this + 48) & -(__int64)(this != 0LL),
                                        (char *)this + 520);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v8 = 222LL;
    goto LABEL_7;
  }
  v16 = *((_QWORD *)this + 37);
  if ( v16 )
  {
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        (ExperienceManagerUtils *)a2,
                                        (struct IServiceProvider *)this + 37,
                                        v15);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v8 = 224LL;
    goto LABEL_7;
  }
  v17 = *((_QWORD *)this + 67);
  if ( v17 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                        a2,
                                        &SID_TransitionCoordinator,
                                        &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
                                        (char *)this + 536);
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v8 = 225LL;
    goto LABEL_7;
  }
  return 0LL;
}
