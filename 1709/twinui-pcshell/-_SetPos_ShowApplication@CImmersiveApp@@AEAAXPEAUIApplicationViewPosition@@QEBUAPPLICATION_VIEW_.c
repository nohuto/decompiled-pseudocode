/*
 * XREFs of ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180059AC8
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800564F0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GenerateVisibilityChangedMessage@CImmersiveApp@@AEAAX_J@Z @ 0x180058858 (-_GenerateVisibilityChangedMessage@CImmersiveApp@@AEAAX_J@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18005953C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005962C (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005BA88 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@@Z @ 0x1800629EC (-PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_SetPos_ShowApplication(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  int updated; // edi
  char v7; // si
  int v8; // eax
  __int64 v9; // rdx
  char *Ptr; // rax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  updated = CImmersiveApp::_UpdateApplication(a1, a2, a3, a4);
  v13 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 112) + 464LL))(a1 + 112, &v13);
  if ( a5 && updated == 1 )
  {
    v7 = 1;
    CReportWindowVisibilityChange::PushForcedGlobalReportingState(&CApplicationManagerUtility::g_pIAMGlobals[1], 2LL);
  }
  else
  {
    v7 = 0;
  }
  *(_BYTE *)(a1 + 448) = 1;
  v8 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264));
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 400) + 72LL))(*(_QWORD *)(a1 + 400));
    if ( v8 >= 0 )
      goto LABEL_10;
    v9 = 7049LL;
  }
  else
  {
    v9 = 7046LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 660));
  if ( v7 )
  {
    Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
    if ( Ptr )
      CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = Ptr - 1;
    CImmersiveApp::_GenerateVisibilityChangedMessage((CImmersiveApp *)a1, 9LL);
    CImmersiveApp::_GenerateVisibilityChangedMessage((CImmersiveApp *)a1, 10LL);
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
