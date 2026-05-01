/*
 * XREFs of ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18005745C
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180054140 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GenerateVisibilityChangedMessage@CImmersiveApp@@AEAAX_J@Z @ 0x180056268 (-_GenerateVisibilityChangedMessage@CImmersiveApp@@AEAAX_J@Z.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180056F30 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180057020 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059230 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@@Z @ 0x180060CFC (-PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_SetPos_ShowApplication(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  int updated; // edi
  char v7; // si
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  updated = CImmersiveApp::_UpdateApplication(a1, a2, a3, a4);
  v12 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 88) + 464LL))(a1 + 88, &v12);
  if ( a5 && updated == 1 )
  {
    v7 = 1;
    CReportWindowVisibilityChange::PushForcedGlobalReportingState(&CApplicationManagerUtility::g_pIAMGlobals[1], 2LL);
  }
  else
  {
    v7 = 0;
  }
  *(_BYTE *)(a1 + 408) = 1;
  v8 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 224));
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 72LL))(*(_QWORD *)(a1 + 360));
    if ( v8 >= 0 )
      goto LABEL_10;
    v9 = 6992LL;
  }
  else
  {
    v9 = 6989LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 620));
  if ( v7 )
  {
    if ( CApplicationManagerUtility::g_pIAMGlobals[2].Ptr )
      --CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
    CImmersiveApp::_GenerateVisibilityChangedMessage((CImmersiveApp *)a1, 9LL);
    CImmersiveApp::_GenerateVisibilityChangedMessage((CImmersiveApp *)a1, 10LL);
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
