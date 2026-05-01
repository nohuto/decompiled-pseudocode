/*
 * XREFs of ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180186880
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180073FC8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F69F4 (--0-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180184DBC (--1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801862DC (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?StartActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801876B8 (-StartActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAAX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::OnPearlRectChanged(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"CortanaExperienceManager_PearlRectMayHaveChanged");
  v5[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *)v5);
  CortanaDesktopExperienceView::NotifySpeechTextInputHeightChange((CortanaDesktopExperienceView *)((char *)this - 16));
  v2 = CortanaDesktopExperienceView::PositionCortanaWindow((CortanaDesktopExperienceView *)((char *)this - 16), 1, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::~CortanaExperienceManager_PearlRectMayHaveChanged((CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *)v5);
  return v3;
}
