/*
 * XREFs of ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800D858C
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800D77C8 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1800D716C (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::GetStuckPlace(
        __int64 **this,
        HMONITOR a2,
        enum EDGEUI_TRAYSTUCKPLACE *a3)
{
  int EdgeUIManager; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IEdgeUiManager *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IEdgeUiManager *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(this, a2, &v10);
  v5 = EdgeUIManager;
  if ( EdgeUIManager < 0 )
  {
    v6 = 1753LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)EdgeUIManager);
    goto LABEL_7;
  }
  EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v10 + 80LL))(
                    v10,
                    a3);
  v5 = EdgeUIManager;
  if ( EdgeUIManager < 0 )
  {
    v6 = 1754LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IEdgeUiManager *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
