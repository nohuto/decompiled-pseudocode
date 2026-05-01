/*
 * XREFs of ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1800647E4
 * Callers:
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800636F8 (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     _lambda_247c8fcfe50b088ef26dcb1d3d4c79f5_::operator() @ 0x1800935A4 (_lambda_247c8fcfe50b088ef26dcb1d3d4c79f5_--operator().c)
 * Callees:
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800648B8 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::GetEdgeUIManager(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        struct IEdgeUiManager **a3)
{
  int v3; // esi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = (int)a3;
  *a3 = 0LL;
  v6 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5BC,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6,
      v12);
    return v7;
  }
  v14 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 14) + 24LL))(
         *((_QWORD *)this + 14),
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &v14);
  v7 = v8;
  if ( v8 < 0 )
  {
    v11 = 1470LL;
  }
  else
  {
    v12 = v3;
    v8 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *))(*(_QWORD *)v14 + 72LL))(
           v14,
           a2,
           &SID_EdgeUi,
           &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v11 = 1471LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v8,
    v12);
LABEL_5:
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
