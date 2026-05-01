/*
 * XREFs of ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18004C210
 * Callers:
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180081540 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180082130 (-OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___ptr64_::Invoke @ 0x18008E700 (CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__-___ptr64_--Invoke.c)
 * Callees:
 *     ?IsPresentationMinimized@CFrameApplicationPresentation@@UEBA_NXZ @ 0x180013800 (-IsPresentationMinimized@CFrameApplicationPresentation@@UEBA_NXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800483C4 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18005D0A0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18012D79C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1801308E0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 */

__int64 __fastcall CImmersiveApp::OnFramePositionChanged(CImmersiveApp *this)
{
  CImmersiveApp **v1; // rbx
  HWND *v2; // rcx
  __int64 (*v3)(void); // rax
  char IsPresentationMinimized; // al
  __int64 v5; // r8
  int v6; // edi
  CImmersiveApp *v7; // r8
  __int64 (__fastcall *v8)(CFrameApplicationPresentation *, bool *); // rax
  char v9; // cl
  int v11; // eax
  int v12; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[40]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (CImmersiveApp **)((char *)this + 152);
  v2 = (HWND *)*((_QWORD *)this + 36);
  v3 = (__int64 (*)(void))*((_QWORD *)*v2 + 27);
  if ( (char *)v3 == (char *)CFrameApplicationPresentation::IsPresentationMinimized )
    IsPresentationMinimized = CFrameApplicationPresentation::IsPresentationMinimized(v2);
  else
    IsPresentationMinimized = v3();
  if ( IsPresentationMinimized != *((_BYTE *)v1 + 185) )
  {
    *((_BYTE *)v1 + 185) = IsPresentationMinimized;
    if ( IsPresentationMinimized )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v1, 0LL, 0LL);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v1, 0LL, v5);
    CImmersiveApp::_UpdateAppStateAndSendNotifications(v1[18]);
  }
  v6 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
         (CImmersiveApp::CImmersiveWindowCollection *)v1,
         (struct APPLICATION_VIEW_DATA_UPDATE *)v13);
  if ( v6 >= 0 )
  {
    v7 = v1[17];
    v8 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, bool *))(*(_QWORD *)v7 + 240LL);
    if ( v8 == CFrameApplicationPresentation::IsPillarBoxed )
    {
      v9 = *((_BYTE *)v7 + 54);
      LOBYTE(v12) = v9;
    }
    else
    {
      if ( (int)v8(v1[17], (bool *)&v12) < 0 )
      {
LABEL_8:
        CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo(
          v1,
          v13,
          (unsigned int)((*((_DWORD *)v1 + 49) & 2) != 0) + 1);
        return (unsigned int)v6;
      }
      v9 = v12;
    }
    if ( v9 != *((_BYTE *)v1 + 186) )
    {
      v11 = (*(__int64 (__fastcall **)(CImmersiveApp *, _QWORD))(*(_QWORD *)v1[17] + 232LL))(
              v1[17],
              (unsigned int)(v9 != 0) - 1);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D1B,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v11,
          v12);
      *((_BYTE *)v1 + 186) = v12;
    }
    goto LABEL_8;
  }
  return (unsigned int)v6;
}
