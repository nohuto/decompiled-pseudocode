/*
 * XREFs of ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800642E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002A8F0 (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NXZ @ 0x18004F0D4 (-IsEnabled@CAppManagerTelemetry@@SA_NXZ.c)
 *     WPP_SF_q @ 0x180050080 (WPP_SF_q.c)
 *     ?PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@@Z @ 0x180060CFC (-PushForcedGlobalReportingState@CReportWindowVisibilityChange@@QEAAXW4REPORT_VISIBILITY_STATE@1@.c)
 *     WPP_SF_lq @ 0x180062E7C (WPP_SF_lq.c)
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180064818 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x180065248 (--$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::SetVisibility(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  bool v5; // zf
  char v6; // cl
  unsigned __int8 v7; // si
  char *Ptr; // rax
  __int64 v9; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 )
  {
    v5 = *(_DWORD *)(a1 + 120) == 2;
    *(_DWORD *)(a1 + 120) = a2;
    v6 = v5;
    v7 = (_DWORD)a2 == 2;
    v5 = *(_QWORD *)(a1 + 48) == 0LL;
    *(_BYTE *)(a1 + 56) = (_DWORD)a2 != 2;
    if ( v5 )
    {
      if ( v6 != v7 )
      {
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_lq(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, v7, *(_QWORD *)(a1 + 32));
        v13 = v7;
        if ( CAppManagerTelemetry::IsEnabled() )
        {
          if ( !v13 )
            ++*(_DWORD *)(a1 + 140);
          v12 = *(_DWORD *)(a1 + 32);
          CAppManagerTelemetry::SetViewVisibility<bool &,unsigned int,unsigned int &>(&v13, &v12, a1 + 140);
        }
        CReportWindowVisibilityChange::PushForcedGlobalReportingState(
          (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
          1);
        CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
          (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
          *(HWND *)(a1 + 32),
          0xDu,
          0LL,
          *(struct IImmersiveApplicationInternal **)(a1 + 128),
          v3 == 2);
        Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
        if ( Ptr )
          CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = Ptr - 1;
      }
    }
    else
    {
      CTaskWindow::_ReconcileViewWithVisibility((CTaskWindow *)(a1 - 8));
    }
    if ( *(_BYTE *)(a1 + 92) && !*(_DWORD *)(a1 + 120) )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_ced7fd5ef5c7321a3730b1ba434d18ec_Traceguids, v9);
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 464LL))(
              *(_QWORD *)(a1 + 48),
              (*(_DWORD *)(a1 + 96) & 1u) + 1);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B4,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
          (const char *)(unsigned int)v10);
      *(_BYTE *)(a1 + 92) = 0;
    }
  }
}
