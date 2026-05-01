/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a632cef2db327014c3fb5d2881c4369e___::Run @ 0x1801B2B80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048D24 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a632cef2db327014c3fb5d2881c4369e___::Run(
        __int64 a1)
{
  HWND WindowW; // rax
  int v3; // eax
  void *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+48h] [rbp+10h] BYREF

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( WindowW && !GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    v6 = 0LL;
    v3 = CMarshaledInterface::_Unmarshal(
           (CMarshaledInterface *)(a1 + 16),
           &GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa,
           &v6,
           0);
    if ( v3 >= 0 )
      (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, 0LL, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EF,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = v6;
    if ( v6 )
    {
      v6 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
}
