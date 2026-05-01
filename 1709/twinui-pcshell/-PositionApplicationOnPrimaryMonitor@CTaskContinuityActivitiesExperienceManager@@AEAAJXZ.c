/*
 * XREFs of ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x1800AB60C
 * Callers:
 *     ?OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AB150 (-OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AB190 (-OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x1801D0D98 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D0E34 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::PositionApplicationOnPrimaryMonitor(
        CTaskContinuityActivitiesExperienceManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  HWND WindowW; // rax
  IUnknown *v10; // rbx
  __int64 *v11; // rax
  HRESULT Service; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  IUnknown *v16; // rcx
  __int64 v17; // rcx
  IUnknown *v19; // rcx
  __int64 v20; // rcx
  IUnknown *punk; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v24; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v23[1] = -2LL;
  if ( !*((_QWORD *)this + 12) )
    return 0LL;
  v23[0] = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 35);
  v3 = *v2;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v23);
  v5 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v3 + 24))(
         v2,
         &SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    punk = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v23[0] + 88LL))(v23[0], &punk);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 244LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_23:
      v16 = punk;
      if ( punk )
      {
        punk = 0LL;
        ((void (__fastcall *)(IUnknown *))v16->lpVtbl->Release)(v16);
      }
      goto LABEL_25;
    }
    *(_QWORD *)&v24.left = 0LL;
    *(_QWORD *)&v24.right = 0LL;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      v22 = 0LL;
      v10 = punk;
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
      Service = IUnknown_QueryService(
                  v10,
                  (const GUID *const)&SID_EdgeUi,
                  &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
                  (void **)v11);
      v6 = Service;
      if ( Service < 0 )
      {
        v13 = 251LL;
        goto LABEL_12;
      }
      Service = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v22 + 152LL))(v22, &v24);
      v6 = Service;
      if ( Service < 0 )
      {
        v13 = 252LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
          (const char *)(unsigned int)Service);
        v14 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        goto LABEL_23;
      }
      v15 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    else
    {
      v7 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v24);
      v6 = v7;
      if ( v7 < 0 )
      {
        v8 = 256LL;
        goto LABEL_22;
      }
    }
    v7 = CSingleViewShellExperience::SetPosition(
           (CTaskContinuityActivitiesExperienceManager *)((char *)this + 72),
           &v24);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 259LL;
      goto LABEL_22;
    }
    v7 = CSingleViewShellExperience::ShowBorder((char *)this + 72, 0LL, 3LL, 0LL, 0LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 260LL;
      goto LABEL_22;
    }
    v19 = punk;
    if ( punk )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
    }
    v20 = v23[0];
    if ( v23[0] )
    {
      v23[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xF1,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_25:
  v17 = v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v6;
}
