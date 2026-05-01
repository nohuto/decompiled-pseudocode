/*
 * XREFs of ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x18016106C
 * Callers:
 *     ?OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180160FF0 (-OnViewCreated@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180161030 (-OnViewShowing@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18006C0CC (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::PositionApplicationOnPrimaryMonitor(
        CTaskContinuityActivitiesExperienceManager *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  HWND WindowW; // rax
  HRESULT v9; // eax
  __int64 v10; // rdx
  IUnknown *punk; // [rsp+30h] [rbp-40h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14[1] = -2LL;
  if ( *((_QWORD *)this + 12) )
  {
    v14[0] = 0LL;
    v2 = *((_QWORD *)this + 35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    v3 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &SID_ImmersiveLauncher,
           &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
           v14);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
      return v4;
    }
    punk = 0LL;
    v5 = v14[0];
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
    v6 = (*(__int64 (__fastcall **)(__int64, IUnknown **))(*(_QWORD *)v5 + 88LL))(v5, &punk);
    v4 = v6;
    if ( v6 < 0 )
    {
      v7 = 244LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_21;
    }
    *(_QWORD *)&v15.left = 0LL;
    *(_QWORD *)&v15.right = 0LL;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( WindowW && GetPropW(WindowW, L"IsAutoHideEnabled") )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v9 = IUnknown_QueryService(
             punk,
             (const GUID *const)&SID_EdgeUi,
             &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
             &ppvOut);
      v4 = v9;
      if ( v9 < 0 )
      {
        v10 = 251LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_21:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
        goto LABEL_22;
      }
      v9 = (*(__int64 (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)ppvOut + 152LL))(ppvOut, &v15);
      v4 = v9;
      if ( v9 < 0 )
      {
        v10 = 252LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      v6 = ((__int64 (__fastcall *)(IUnknown *, struct tagRECT *))punk->lpVtbl[3].Release)(punk, &v15);
      v4 = v6;
      if ( v6 < 0 )
      {
        v7 = 256LL;
        goto LABEL_20;
      }
    }
    v6 = CSingleViewShellExperience::SetPosition(
           (CTaskContinuityActivitiesExperienceManager *)((char *)this + 72),
           &v15);
    v4 = v6;
    if ( v6 < 0 )
    {
      v7 = 259LL;
      goto LABEL_20;
    }
    v6 = CSingleViewShellExperience::ShowBorder((__int64)this + 72, 0LL, 3LL, 0LL, 0LL);
    v4 = v6;
    if ( v6 < 0 )
    {
      v7 = 260LL;
      goto LABEL_20;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  }
  return 0LL;
}
