/*
 * XREFs of ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180091414
 * Callers:
 *     ?GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180095060 (-GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800919A0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800927AC (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18018023C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180180944 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x18018CA1C (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize(
        CActionCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rbx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // eax
  unsigned int LastError; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct IServiceProviderVtbl *v14; // rbx
  __int64 *v15; // rax
  struct IServiceProviderVtbl *v16; // rbx
  __int64 *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  const char *v20; // r9
  HMONITOR v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 *v24; // rax
  _QWORD *v25; // rdi
  struct IServiceProviderVtbl *v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rcx
  int HostExperiencePriorityManipulator; // eax
  __int64 v30; // rdx
  int v31; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v32; // r8
  unsigned __int64 v33; // r9
  __int64 v34; // rcx
  HSTRING_HEADER *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  CActionCenterExperienceManager *v39; // [rsp+48h] [rbp-39h] BYREF
  __int64 v40[2]; // [rsp+50h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-21h] BYREF
  HSTRING string; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER v43; // [rsp+80h] [rbp-1h] BYREF
  HSTRING v44; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v40[1] = -2LL;
  v4 = (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v44 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v43, &v44);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize((HSTRING *)this + 14, v4, a2, v44, string);
  LastError = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return LastError;
  }
  v39 = this;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&hstringHeader, &v39);
  lpVtbl = a2->lpVtbl;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 56);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          v10);
  LastError = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 56) + 32LL))(
            *((_QWORD *)this + 56),
            ((unsigned __int64)this + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            (char *)this + 456);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 278LL;
      goto LABEL_19;
    }
    v13 = *((_QWORD *)this + 58);
    if ( v13 )
    {
      *((_QWORD *)this + 58) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &SID_InputHostLayout,
            &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
            (char *)this + 464);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 280LL;
      goto LABEL_19;
    }
    v14 = a2->lpVtbl;
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 65);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v14->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            v15);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 282LL;
      goto LABEL_19;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 65) + 24LL))(
            *((_QWORD *)this + 65),
            ((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            (char *)this + 496);
    LastError = v11;
    if ( v11 < 0 )
    {
      v12 = 283LL;
      goto LABEL_19;
    }
    v40[0] = 0LL;
    v16 = a2->lpVtbl;
    v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v40);
    v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v16->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v17);
    LastError = v18;
    if ( v18 < 0 )
    {
      v19 = 286LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_53;
    }
    v39 = 0LL;
    v21 = MonitorFromPoint(0LL, 1u);
    if ( v21 == (HMONITOR)-1LL )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x122,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
                    v20);
      goto LABEL_53;
    }
    v22 = v40[0];
    v23 = *(_QWORD *)v40[0];
    v24 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 59);
    v18 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(v23 + 72))(
            v22,
            v21,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v24);
    LastError = v18;
    if ( v18 < 0 )
    {
      v19 = 291LL;
      goto LABEL_32;
    }
    v25 = (_QWORD *)((char *)this + 512);
    v26 = a2->lpVtbl;
    v27 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 64);
    v18 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v26->QueryService)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
            v27);
    LastError = v18;
    if ( v18 < 0 )
    {
      v19 = 295LL;
      goto LABEL_32;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v25 + 24LL))(
            *v25,
            0LL,
            ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
            (char *)this + 488);
    LastError = v18;
    if ( v18 < 0 )
    {
      v19 = 297LL;
      goto LABEL_32;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v25 + 24LL))(
            *v25,
            26LL,
            ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
            (char *)this + 492);
    LastError = v18;
    if ( v18 < 0 )
    {
      v19 = 298LL;
      goto LABEL_32;
    }
    v39 = 0LL;
    v28 = *((_QWORD *)this + 68);
    if ( v28 )
    {
      *((_QWORD *)this + 68) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                          a2,
                                          &IID_IRealmActivationHistory,
                                          &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
                                          (char *)this + 544);
    LastError = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
    {
      v31 = RtlSubscribeWnfStateChangeNotification(
              (char *)this + 416,
              WNF_SHEL_SESSION_LOGON_COMPLETE,
              0LL,
              CActionCenterExperienceManager::ShellReadyCallback,
              this,
              0LL,
              0,
              1);
      LastError = v31 | 0x10000000;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x382,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)LastError);
        v33 = LastError;
        v30 = 303LL;
LABEL_48:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v30,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)v33);
LABEL_53:
        v37 = v40[0];
        if ( v40[0] )
        {
          v40[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        }
        goto LABEL_55;
      }
      v34 = *((_QWORD *)this + 13);
      if ( v34 )
      {
        *((_QWORD *)this + 13) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                            (ExperienceManagerUtils *)a2,
                                            (struct IServiceProvider *)this + 13,
                                            v32);
      LastError = HostExperiencePriorityManipulator;
      if ( HostExperiencePriorityManipulator >= 0 )
      {
        HostExperiencePriorityManipulator = CActionCenterExperienceManager::OnDpiOrHighContrastChanged(this);
        LastError = HostExperiencePriorityManipulator;
        if ( HostExperiencePriorityManipulator >= 0 )
        {
          v35 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BCFE8);
          HostExperiencePriorityManipulator = CSingleViewShellExperience::AddTestAumid(
                                                (CActionCenterExperienceManager *)((char *)this + 112),
                                                (HSTRING)v35[1].Reserved.Reserved1);
          LastError = HostExperiencePriorityManipulator;
          if ( HostExperiencePriorityManipulator >= 0 )
          {
            if ( *((struct IServiceProvider **)this + 63) != a2 )
            {
              ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
              v36 = *((_QWORD *)this + 63);
              *((_QWORD *)this + 63) = a2;
              if ( v36 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
            }
            hstringHeader.Reserved.Reserved2[8] = 0;
            LastError = 0;
            goto LABEL_53;
          }
          v30 = 310LL;
        }
        else
        {
          v30 = 308LL;
        }
      }
      else
      {
        v30 = 305LL;
      }
    }
    else
    {
      v30 = 301LL;
    }
    v33 = (unsigned int)HostExperiencePriorityManipulator;
    goto LABEL_48;
  }
  v12 = 277LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_55:
  if ( hstringHeader.Reserved.Reserved2[8] )
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)hstringHeader.Reserved.Reserved1
                                                                           + 72));
  return LastError;
}
