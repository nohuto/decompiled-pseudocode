/*
 * XREFs of ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x180076E74
 * Callers:
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076730 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180076B2C (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800772B0 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800773D0 (-OnViewCloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800776B0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180174424 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180077F80 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
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
  int v9; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(XamlLauncher *__hidden, struct IImmersiveMonitor **); // rax
  int Monitor; // eax
  int v13; // eax
  HRESULT v14; // eax
  HWND WindowW; // rax
  LANGID ThreadUILanguage; // ax
  bool v17; // bl
  void *v18; // rcx
  IUnknown *v19; // rcx
  XamlLauncher *v20; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-61h]
  IUnknown *punk; // [rsp+30h] [rbp-51h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-49h] BYREF
  XamlLauncher *v28; // [rsp+40h] [rbp-41h] BYREF
  int v29; // [rsp+48h] [rbp-39h] BYREF
  WCHAR LCData[2]; // [rsp+4Ch] [rbp-35h] BYREF
  __int128 v31; // [rsp+50h] [rbp-31h] BYREF
  __int64 v32; // [rsp+60h] [rbp-21h]
  struct tagRECT v33; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v34; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v32 = -2LL;
  v31 = 0uLL;
  *a3 = 0uLL;
  *(_DWORD *)a4 = 3;
  *a5 = 0;
  if ( a6 )
  {
    v31 = 0uLL;
    *a6 = 0uLL;
  }
  if ( a7 )
    *a7 = 0LL;
  v28 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, XamlLauncher **))(**((_QWORD **)this + 63) + 24LL))(
         *((_QWORD *)this + 63),
         &SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FC,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v9,
      v25);
    goto LABEL_27;
  }
  punk = 0LL;
  v11 = *(__int64 (__fastcall **)(XamlLauncher *__hidden, struct IImmersiveMonitor **))(*(_QWORD *)v28 + 88LL);
  if ( v11 == XamlLauncher::GetMonitor )
    Monitor = XamlLauncher::GetMonitor(v28, (struct IImmersiveMonitor **)&punk);
  else
    Monitor = v11(v28, (struct IImmersiveMonitor **)&punk);
  v10 = Monitor;
  if ( Monitor < 0 )
  {
    v22 = (unsigned int)Monitor;
    v23 = 768LL;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[1].Release)(punk, &v31);
    v10 = v13;
    if ( v13 >= 0 )
    {
      ppvOut = 0LL;
      v14 = IUnknown_QueryService(
              punk,
              (const GUID *const)&SID_EdgeUi,
              &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
              &ppvOut);
      v10 = v14;
      if ( v14 < 0 )
      {
        v24 = 775LL;
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v29);
        v10 = v14;
        if ( v14 < 0 )
        {
          v24 = 777LL;
        }
        else
        {
          v14 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 112LL))(ppvOut, &v34);
          v10 = v14;
          if ( v14 < 0 )
          {
            v24 = 779LL;
          }
          else
          {
            WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
            if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
            {
              v14 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v33);
              v10 = v14;
              if ( v14 >= 0 )
                goto LABEL_16;
              v24 = 786LL;
            }
            else
            {
              v14 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v33);
              v10 = v14;
              if ( v14 >= 0 )
              {
LABEL_16:
                *a3 = v33;
                *(_DWORD *)a4 = v29;
                ThreadUILanguage = GetThreadUILanguage();
                v17 = 0;
                if ( GetLocaleInfoW(ThreadUILanguage, 0x20000070u, LCData, 2) > 0 )
                  v17 = *(_DWORD *)LCData == 1;
                *a5 = v17;
                if ( a6 )
                  *a6 = v34;
                if ( a7 )
                  *a7 = (HMONITOR)v31;
                v10 = 0;
                goto LABEL_23;
              }
              v24 = 790LL;
            }
          }
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v14,
        v25);
LABEL_23:
      v18 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_25;
    }
    v22 = (unsigned int)v13;
    v23 = 770LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)v22,
    v25);
LABEL_25:
  v19 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
  }
LABEL_27:
  v20 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(XamlLauncher *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v10;
}
