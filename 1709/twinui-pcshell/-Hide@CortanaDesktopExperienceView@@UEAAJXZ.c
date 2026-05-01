/*
 * XREFs of ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800D4DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FD98 (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A6988 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A70B8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800D3644 (-StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D75B0 (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D76C4 (-ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::Hide(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  _QWORD v4[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+50h] [rbp-B0h]
  int *v6; // [rsp+58h] [rbp-A8h]
  int *v7; // [rsp+60h] [rbp-A0h]
  int v8; // [rsp+68h] [rbp-98h] BYREF
  char v9; // [rsp+6Ch] [rbp-94h]
  int v10; // [rsp+90h] [rbp-70h] BYREF
  const char *v11; // [rsp+98h] [rbp-68h]
  __int64 v12; // [rsp+A0h] [rbp-60h]
  char v13; // [rsp+A8h] [rbp-58h]
  __int64 v14; // [rsp+B0h] [rbp-50h]
  _BYTE v15[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v16; // [rsp+148h] [rbp+48h]
  __int64 v17; // [rsp+150h] [rbp+50h]
  __int64 v18; // [rsp+158h] [rbp+58h]
  __int64 v19; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v4[1] = 0LL;
  v4[2] = v4;
  v4[3] = 0LL;
  v5 = 0;
  v6 = &v10;
  v7 = &v8;
  v8 = 0;
  v9 = 0;
  v13 = 0;
  v10 = 0;
  v11 = "CortanaExperienceManager_Hide";
  v12 = 0LL;
  v14 = 1LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(v15, 0, sizeof(v15));
  v18 = 0LL;
  v19 = 0LL;
  v4[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Hide::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_Hide *)v4);
  *((_BYTE *)this + 178) = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 96LL))(*((_QWORD *)this + 15));
  v2 = CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded((CortanaDesktopExperienceView *)((char *)this - 24));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x27D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  CortanaDesktopExperienceView::UnregisterGlobalBackButton((CortanaDesktopExperienceView *)((char *)this - 24));
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v4);
  v4[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Hide::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v4);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v4);
  return 0LL;
}
