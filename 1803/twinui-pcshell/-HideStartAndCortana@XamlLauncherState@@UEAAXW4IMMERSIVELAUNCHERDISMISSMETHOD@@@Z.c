/*
 * XREFs of ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800789B0
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180078AA0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?Hide@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180067A80 (-Hide@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1800776B0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x1800796C4 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180079EF4 (--0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18007A1F8 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18007A2A4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180094D2C (--$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F6E34 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18022F578 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::HideStartAndCortana(__int64 a1, unsigned int a2)
{
  XamlLauncherState *v4; // rsi
  CStartExperienceManager *v5; // rcx
  __int64 (__fastcall *v6)(CStartExperienceManager *, int); // rax
  CortanaSharedExperienceManager *v7; // rcx
  void (*v8)(void); // rax
  __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+40h] [rbp-C8h]
  _BYTE v15[40]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v16; // [rsp+78h] [rbp-90h]
  _BYTE v17[320]; // [rsp+188h] [rbp+80h] BYREF

  v14 = -2LL;
  DWORD2(v11) = *(_DWORD *)(a1 + 40);
  v4 = (XamlLauncherState *)(a1 - 24);
  v12 = a1 - 24;
  LOBYTE(v13) = 1;
  if ( DWORD2(v11) == 5 )
  {
LABEL_2:
    *(_DWORD *)(a1 + 40) = 9;
    v5 = *(CStartExperienceManager **)(a1 + 56);
    v6 = *(__int64 (__fastcall **)(CStartExperienceManager *, int))(*(_QWORD *)v5 + 64LL);
    if ( v6 == CStartExperienceManager::Hide )
      CStartExperienceManager::Hide(v5, a2);
    else
      v6(v5, a2);
    v7 = *(CortanaSharedExperienceManager **)(a1 + 64);
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 88LL);
    if ( (char *)v8 == (char *)CortanaSharedExperienceManager::Hide )
      CortanaSharedExperienceManager::Hide(v7);
    else
      v8();
    goto LABEL_6;
  }
  if ( DWORD2(v11) == 3 )
    goto LABEL_14;
  if ( SDWORD2(v11) <= 11 )
    goto LABEL_22;
  if ( SDWORD2(v11) <= 14 )
    goto LABEL_2;
  if ( DWORD2(v11) == 16 )
  {
    *(_DWORD *)(a1 + 40) = 17;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
    goto LABEL_6;
  }
  if ( DWORD2(v11) == 20 )
  {
LABEL_14:
    CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v15);
    if ( **(_DWORD **)(a1 + 312) == 1 && a2 == 7 )
    {
      v10 = CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(a1 + 264, v17);
      CommonStartTelemetry::LauncherInvokeActivity::operator=(v15, v10);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v17);
      CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v15);
    }
    *(_DWORD *)(a1 + 40) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
    if ( *v16 == 1 && a2 == 7 )
      XamlLauncherState::CompleteStartShowTelemetry(v4, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v15);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v15);
  }
  else
  {
LABEL_22:
    *(_BYTE *)(a1 + 941) = a2 == 7;
    if ( a2 == 7 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
LABEL_6:
  LOBYTE(v13) = 0;
  return StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
           (char *)&v11 + 8,
           (char *)v4 + 64);
}
