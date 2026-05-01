/*
 * XREFs of ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800D4970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FE80 (--1-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A5CC4 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A60D8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?StartActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800D2C0C (-StartActivity@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAAX.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800D9474 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800DA514 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::OnPearlRectChanged(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD v5[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+50h] [rbp-B0h]
  int *v7; // [rsp+58h] [rbp-A8h]
  int *v8; // [rsp+60h] [rbp-A0h]
  int v9; // [rsp+68h] [rbp-98h] BYREF
  char v10; // [rsp+6Ch] [rbp-94h]
  int v11; // [rsp+90h] [rbp-70h] BYREF
  const char *v12; // [rsp+98h] [rbp-68h]
  __int64 v13; // [rsp+A0h] [rbp-60h]
  char v14; // [rsp+A8h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp-50h]
  _BYTE v16[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+148h] [rbp+48h]
  __int64 v18; // [rsp+150h] [rbp+50h]
  __int64 v19; // [rsp+158h] [rbp+58h]
  __int64 v20; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v5[1] = 0LL;
  v5[2] = v5;
  v5[3] = 0LL;
  v6 = 0;
  v7 = &v11;
  v8 = &v9;
  v9 = 0;
  v10 = 0;
  v14 = 0;
  v11 = 0;
  v12 = "CortanaExperienceManager_PearlRectMayHaveChanged";
  v13 = 0LL;
  v15 = 1LL;
  v17 = 0LL;
  v18 = 0LL;
  memset(v16, 0, sizeof(v16));
  v19 = 0LL;
  v20 = 0LL;
  v5[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *)v5);
  CortanaDesktopExperienceView::NotifySpeechTextInputHeightChange((CortanaDesktopExperienceView *)((char *)this - 16));
  v2 = CortanaDesktopExperienceView::PositionCortanaWindow((CortanaDesktopExperienceView *)((char *)this - 16), 1, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x21C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  }
  v5[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  return v3;
}
