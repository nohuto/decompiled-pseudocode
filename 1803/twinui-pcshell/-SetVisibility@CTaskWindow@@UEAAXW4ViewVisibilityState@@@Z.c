/*
 * XREFs of ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800475B0
 * Callers:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180004038 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180053360 (-SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@S.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x180108814 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180112A04 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x180131A64 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     WPP_SF_q @ 0x180132BE4 (WPP_SF_q.c)
 *     ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x18013438C (--$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z.c)
 *     WPP_SF_lq @ 0x1801351C8 (WPP_SF_lq.c)
 */

void __fastcall CTaskWindow::SetVisibility(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // ecx
  bool v5; // di
  bool v6; // zf
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  _BOOL8 v9; // rdx
  __int64 (__fastcall *v10)(__int64, _BOOL8); // rax
  __int64 v11; // rcx
  unsigned __int8 v12; // cl
  _DWORD *v13; // r8
  PSRWLOCK v14; // rdi
  char *Ptr; // rdx
  _DWORD *v16; // rdx
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF
  bool v24; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 120);
  if ( v4 == (_DWORD)a2 )
    return;
  *(_DWORD *)(a1 + 120) = a2;
  v5 = (_DWORD)a2 == 2;
  v6 = *(_QWORD *)(a1 + 48) == 0LL;
  *(_BYTE *)(a1 + 56) = (_DWORD)a2 != 2;
  if ( v6 )
  {
    if ( (v4 == 2) != v5 )
    {
      v12 = (unsigned __int8)WPP_GLOBAL_Control;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_lq(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, v5, *(_QWORD *)(a1 + 32));
      v24 = v5;
      if ( CAppManagerTelemetry::IsEnabled(v12, a2) )
      {
        v13 = (_DWORD *)(a1 + 140);
        if ( !v24 )
          ++*v13;
        LODWORD(v23) = *(_DWORD *)(a1 + 32);
        CAppManagerTelemetry::SetViewVisibility<bool &,unsigned int,unsigned int &>(&v24, &v23, v13);
      }
      v14 = CApplicationManagerUtility::g_pIAMGlobals;
      Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
      if ( Ptr != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
        || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                  &CApplicationManagerUtility::g_pIAMGlobals[1],
                  Ptr + 1) >= 0 )
      {
        v16 = (char *)v14[1].Ptr + 4 * (__int64)v14[2].Ptr++;
        if ( v16 )
          *v16 = 1;
      }
      v21 = *(_QWORD *)(a1 + 128);
      CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
        &CApplicationManagerUtility::g_pIAMGlobals[1],
        *(_QWORD *)(a1 + 32),
        13LL);
      v17 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
      if ( v17 )
        CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v17 - 1;
    }
    goto LABEL_9;
  }
  CTaskWindow::s_UpdateNavigationLevel(
    *(struct IImmersiveApplicationInternal **)(a1 + 128),
    (struct CTaskWindow::TASK_WINDOW *)(a1 + 32));
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48);
  v23 = 0LL;
  v8 = (**v7)(v7, &GUID_35f1648c_265f_402c_b575_c9a325451df5, &v23);
  if ( v8 < 0 )
  {
    v18 = 1155LL;
LABEL_28:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v8,
      v21);
    goto LABEL_7;
  }
  v9 = *(_DWORD *)(a1 + 120) == 2;
  v10 = *(__int64 (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)v23 + 88LL);
  if ( v10 == ViewWrapperBase::SetActivationTimeoutPolicy )
    v8 = ViewWrapperBase::SetActivationTimeoutPolicy(v23, v9);
  else
    v8 = v10(v23, v9);
  if ( v8 < 0 )
  {
    v18 = 1159LL;
    goto LABEL_28;
  }
LABEL_7:
  v11 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_9:
  if ( *(_BYTE *)(a1 + 92) && !*(_DWORD *)(a1 + 120) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_c7112eb849c034c9bca4c47c1b6552d2_Traceguids, v19);
    }
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 464LL))(
            *(_QWORD *)(a1 + 48),
            (*(_DWORD *)(a1 + 96) & 1u) + 1);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3BA,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v20,
        v21);
    *(_BYTE *)(a1 + 92) = 0;
  }
}
