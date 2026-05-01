/*
 * XREFs of ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009581C
 * Callers:
 *     ?GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009AB80 (-GetExperienceManager@ActionCenterExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180095CA0 (-Close@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096D0C (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1801DBEA0 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize(
        CActionCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  struct IWeakReferenceSource *v4; // rbx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  char v9; // r12
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct IServiceProviderVtbl *v15; // rbx
  __int64 *v16; // rax
  _QWORD *v17; // r15
  struct IServiceProviderVtbl *v18; // rbx
  __int64 *v19; // rax
  struct IServiceProviderVtbl *v20; // rbx
  __int64 *v21; // rax
  int HostExperiencePriorityManipulator; // eax
  __int64 v23; // rdx
  int v24; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-29h] BYREF
  HSTRING string; // [rsp+70h] [rbp-11h] BYREF
  HSTRING_HEADER v33; // [rsp+78h] [rbp-9h] BYREF
  HSTRING v34; // [rsp+90h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v4 = (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v34 = 0LL;
  v6 = WindowsCreateStringReference(L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App", 0x37u, &v33, &v34);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize((HSTRING *)this + 15, v4, a2, v34, string);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x142,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  hstringHeader.Reserved.Reserved1 = this;
  v9 = 1;
  hstringHeader.Reserved.Reserved2[8] = 1;
  lpVtbl = a2->lpVtbl;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 67);
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          v11);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 329LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_44;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 67) + 32LL))(
          *((_QWORD *)this + 67),
          ((unsigned __int64)this + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          (char *)this + 544);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 330LL;
    goto LABEL_25;
  }
  v14 = *((_QWORD *)this + 69);
  if ( v14 )
  {
    *((_QWORD *)this + 69) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
          a2,
          &SID_InputHostLayout,
          &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
          (char *)this + 552);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 332LL;
    goto LABEL_25;
  }
  v15 = a2->lpVtbl;
  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 76);
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v15->QueryService)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          v16);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 334LL;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 76) + 24LL))(
          *((_QWORD *)this + 76),
          ((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          (char *)this + 584);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 335LL;
    goto LABEL_25;
  }
  v17 = (_QWORD *)((char *)this + 600);
  v18 = a2->lpVtbl;
  v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 75);
  v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v18->QueryService)(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
          v19);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 339LL;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v17 + 24LL))(
          *v17,
          0LL,
          ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
          (char *)this + 576);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 341LL;
    goto LABEL_25;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v17 + 24LL))(
          *v17,
          26LL,
          ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
          (char *)this + 580);
  v8 = v12;
  if ( v12 < 0 )
  {
    v13 = 342LL;
    goto LABEL_25;
  }
  v20 = a2->lpVtbl;
  v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 79);
  HostExperiencePriorityManipulator = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v20->QueryService)(
                                        a2,
                                        &IID_IRealmActivationHistory,
                                        &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
                                        v21);
  v8 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    v23 = 345LL;
LABEL_38:
    v26 = (unsigned int)HostExperiencePriorityManipulator;
    goto LABEL_39;
  }
  v24 = RtlSubscribeWnfStateChangeNotification(
          (char *)this + 496,
          WNF_SHEL_SESSION_LOGON_COMPLETE,
          0LL,
          CActionCenterExperienceManager::ShellReadyCallback,
          this,
          0LL,
          0,
          1);
  v8 = v24 | 0x10000000;
  if ( v24 >= 0 )
  {
    v27 = *((_QWORD *)this + 14);
    if ( v27 )
    {
      *((_QWORD *)this + 14) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                          (ExperienceManagerUtils *)a2,
                                          (struct IServiceProvider *)this + 14,
                                          v25);
    v8 = HostExperiencePriorityManipulator;
    if ( HostExperiencePriorityManipulator >= 0 )
    {
      HostExperiencePriorityManipulator = CActionCenterExperienceManager::OnDpiOrHighContrastChanged(this);
      v8 = HostExperiencePriorityManipulator;
      if ( HostExperiencePriorityManipulator >= 0 )
      {
        v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)&v33,
                (const WCHAR **)&off_1802146A8);
        HostExperiencePriorityManipulator = CSingleViewShellExperience::AddTestAumid(
                                              (CActionCenterExperienceManager *)((char *)this + 120),
                                              *(HSTRING *)(v28 + 24));
        v8 = HostExperiencePriorityManipulator;
        if ( HostExperiencePriorityManipulator >= 0 )
        {
          if ( *((struct IServiceProvider **)this + 74) != a2 )
          {
            ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
            v29 = *((_QWORD *)this + 74);
            *((_QWORD *)this + 74) = a2;
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v9 = 0;
          v8 = 0;
          goto LABEL_44;
        }
        v23 = 354LL;
      }
      else
      {
        v23 = 352LL;
      }
    }
    else
    {
      v23 = 349LL;
    }
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E0,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v8);
  v26 = v8;
  v23 = 347LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v23,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v26);
LABEL_44:
  if ( v9 )
    CActionCenterExperienceManager::Close((CActionCenterExperienceManager *)((char *)this + 72));
  return v8;
}
