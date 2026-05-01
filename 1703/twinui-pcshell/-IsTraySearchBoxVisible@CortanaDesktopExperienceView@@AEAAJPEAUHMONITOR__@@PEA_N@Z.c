/*
 * XREFs of ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1800C71D8
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800C5948 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800C7088 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800C727C (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1800C52EC (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::IsTraySearchBoxVisible(__int64 **this, HMONITOR a2, bool *a3)
{
  int EdgeUIManager; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct IEdgeUiManager *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+18h] BYREF
  struct IEdgeUiManager *v11; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v11 = 0LL;
  EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(this, a2, &v11);
  v5 = EdgeUIManager;
  if ( EdgeUIManager < 0 )
  {
    v6 = 2130LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)EdgeUIManager);
    goto LABEL_7;
  }
  EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, int *))(*(_QWORD *)v11 + 96LL))(v11, &v10);
  v5 = EdgeUIManager;
  if ( EdgeUIManager < 0 )
  {
    v6 = 2133LL;
    goto LABEL_5;
  }
  *a3 = v10 != 0;
  v5 = 0;
LABEL_7:
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IEdgeUiManager *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
