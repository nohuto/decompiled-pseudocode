/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800B8010
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800B68A0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7830 (-OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7A30 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B8324 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1800B8A6C (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1800B8DA0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::GetMonitorInformation(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4,
        bool *a5,
        struct tagRECT *a6,
        HMONITOR *a7)
{
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  IUnknown *v16; // rbx
  __int64 *v17; // rax
  HRESULT Service; // eax
  __int64 v19; // rdx
  HWND WindowW; // rax
  LANGID ThreadUILanguage; // ax
  bool v22; // bl
  __int64 v23; // rcx
  IUnknown *v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+38h] [rbp-51h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-49h] BYREF
  __int64 v29; // [rsp+48h] [rbp-41h] BYREF
  int v30; // [rsp+50h] [rbp-39h] BYREF
  WCHAR LCData[2]; // [rsp+54h] [rbp-35h] BYREF
  __int128 v32; // [rsp+58h] [rbp-31h] BYREF
  __int64 v33; // [rsp+68h] [rbp-21h]
  struct tagRECT v34; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v35; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]

  v33 = -2LL;
  v32 = 0uLL;
  *a3 = 0uLL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
  {
    v32 = 0uLL;
    *a6 = 0uLL;
  }
  if ( a7 )
    *a7 = 0LL;
  v29 = 0LL;
  v9 = (__int64 *)*((_QWORD *)this + 63);
  v10 = *v9;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v29);
  v12 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v10 + 24))(
          v9,
          &SID_ImmersiveLauncher,
          &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
          v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x333,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_36;
  }
  punk = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v29 + 88LL))(v29, &punk);
  v13 = v14;
  if ( v14 >= 0 )
  {
    v14 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[1].Release)(punk, &v32);
    v13 = v14;
    if ( v14 < 0 )
    {
      v15 = 825LL;
      goto LABEL_11;
    }
    v27 = 0LL;
    v16 = punk;
    v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
    Service = IUnknown_QueryService(
                v16,
                (const GUID *const)&SID_EdgeUi,
                &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                (void **)v17);
    v13 = Service;
    if ( Service >= 0 )
    {
      Service = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 80LL))(v27, &v30);
      v13 = Service;
      if ( Service >= 0 )
      {
        Service = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v27 + 112LL))(v27, &v35);
        v13 = Service;
        if ( Service >= 0 )
        {
          WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
          if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
          {
            Service = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v27 + 152LL))(v27, &v34);
            v13 = Service;
            if ( Service < 0 )
            {
              v19 = 841LL;
              goto LABEL_24;
            }
          }
          else
          {
            Service = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v34);
            v13 = Service;
            if ( Service < 0 )
            {
              v19 = 845LL;
              goto LABEL_24;
            }
          }
          *a3 = v34;
          *(_DWORD *)a4 = v30;
          ThreadUILanguage = GetThreadUILanguage();
          v22 = 0;
          if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, LCData, 2) > 0 )
            v22 = *(_DWORD *)LCData == 1;
          *a5 = v22;
          if ( a6 )
            *a6 = v35;
          if ( a7 )
            *a7 = (HMONITOR)v32;
          v13 = 0;
          goto LABEL_32;
        }
        v19 = 834LL;
      }
      else
      {
        v19 = 832LL;
      }
    }
    else
    {
      v19 = 830LL;
    }
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)Service);
LABEL_32:
    v23 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_34;
  }
  v15 = 823LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
LABEL_34:
  v24 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v24->lpVtbl->Release)(v24);
  }
LABEL_36:
  v25 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v13;
}
