/*
 * XREFs of ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180066130
 * Callers:
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180067A80 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800643E4 (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064498 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Hide@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800681C0 (-Hide@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800732F4 (-StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180074480 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007451C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180074650 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180074690 (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::Hide(CortanaDesktopExperienceView *this)
{
  TwinUI::Cortana::ShellExperienceView *v2; // rcx
  void (*v3)(void); // rax
  int v4; // eax
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    v6,
    "CortanaExperienceManager_Hide");
  v6[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Hide::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_Hide *)v6);
  *((_BYTE *)this + 178) = 0;
  v2 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 15);
  v3 = *(void (**)(void))(*(_QWORD *)v2 + 96LL);
  if ( (char *)v3 == (char *)TwinUI::Cortana::ShellExperienceView::Hide )
    TwinUI::Cortana::ShellExperienceView::Hide(v2);
  else
    v3();
  v4 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded((CortanaDesktopExperienceView *)((char *)this - 24));
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x296,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      -2);
  CortanaDesktopExperienceView::UnregisterGlobalBackButton((CortanaDesktopExperienceView *)((char *)this - 24));
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
  v6[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Hide::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v6);
  return 0LL;
}
