/*
 * XREFs of ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800BCF2C
 * Callers:
 *     ?GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800BF280 (-GetExperienceManager@JumpViewExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspe.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x1801DBF58 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFact.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::RuntimeClassInitialize(
        CJumpViewExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rbx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rax
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rdx
  struct IServiceProviderVtbl *v16; // rbx
  __int64 *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  struct IServiceProviderVtbl *v20; // rbx
  __int64 *v21; // rax
  struct IServiceProviderVtbl *v22; // rbx
  __int64 *v23; // rax
  struct IServiceProviderVtbl *v24; // rbx
  __int64 *v25; // rax
  int HostExperiencePriorityManipulator; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  ExperienceManagerUtils *v31; // rcx
  __int64 v32; // rcx
  ExperienceManagerUtils *v33; // [rsp+38h] [rbp-29h] BYREF
  __int64 v34[2]; // [rsp+40h] [rbp-21h] BYREF
  HSTRING_HEADER v35; // [rsp+50h] [rbp-11h] BYREF
  HSTRING v36; // [rsp+68h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v34[1] = -2LL;
  v4 = (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.JumpView", 0x29u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v36 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v35, &v36);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize((HSTRING *)this + 16, v4, a2, v36, string);
  if ( v7 < 0 )
  {
    v8 = 190LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v35, (const WCHAR **)&off_180214848);
  v7 = CSingleViewShellExperience::AddTestAumid(
         (CJumpViewExperienceManager *)((char *)this + 128),
         *(HSTRING *)(v10 + 24));
  if ( v7 < 0 )
  {
    v8 = 191LL;
    goto LABEL_7;
  }
  *((_DWORD *)this + 47) = *((_DWORD *)this + 118);
  v34[0] = 0LL;
  lpVtbl = a2->lpVtbl;
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v34);
  v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &IID_IActiveZBandNotificationForMonitorService,
          &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
          v12);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v34[0] + 24LL))(
            v34[0],
            ((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            (char *)this + 384);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 196LL;
      goto LABEL_28;
    }
    v16 = a2->lpVtbl;
    v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 44);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v16->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v17);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 198LL;
      goto LABEL_28;
    }
    v18 = (_QWORD *)((char *)this + 360);
    v19 = *((_QWORD *)this + 45);
    if ( v19 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 44))(
            *((_QWORD *)this + 44),
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            (char *)this + 360);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 199LL;
      goto LABEL_28;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v18 + 24LL))(
            *v18,
            ((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            (char *)this + 376);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 200LL;
      goto LABEL_28;
    }
    v20 = a2->lpVtbl;
    v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 46);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v20->QueryService)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            v21);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 202LL;
      goto LABEL_28;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(**((_QWORD **)this + 46) + 24LL))(
            *((_QWORD *)this + 46),
            0LL,
            ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
            (char *)this + 380);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 203LL;
      goto LABEL_28;
    }
    v22 = a2->lpVtbl;
    v23 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 43);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v22->QueryService)(
            a2,
            &IID_IRealmActivationHistory,
            &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
            v23);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 205LL;
      goto LABEL_28;
    }
    v33 = 0LL;
    v24 = a2->lpVtbl;
    v25 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v33);
    HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v24->QueryService)(
                                          a2,
                                          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
                                          v25);
    v14 = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
    {
      v29 = *((_QWORD *)this + 15);
      if ( v29 )
      {
        *((_QWORD *)this + 15) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                            v33,
                                            (CJumpViewExperienceManager *)((char *)this + 120),
                                            v27);
      v14 = HostExperiencePriorityManipulator;
      if ( HostExperiencePriorityManipulator >= 0 )
      {
        if ( *((struct IServiceProvider **)this + 42) != a2 )
        {
          ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
          v30 = *((_QWORD *)this + 42);
          *((_QWORD *)this + 42) = a2;
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v14 = 0;
        goto LABEL_40;
      }
      v28 = 210LL;
    }
    else
    {
      v28 = 208LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
LABEL_40:
    v31 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(ExperienceManagerUtils *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    goto LABEL_42;
  }
  v15 = 195LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_42:
  v32 = v34[0];
  if ( v34[0] )
  {
    v34[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return v14;
}
