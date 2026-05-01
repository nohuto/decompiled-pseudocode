/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f11545691eb1c18d1795497ebae59dd5___::Run @ 0x1801858C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048D24 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f11545691eb1c18d1795497ebae59dd5___::Run(
        __int64 a1)
{
  CMarshaledInterface *v1; // rbx
  HWND WindowW; // rax
  __int64 v3; // rcx
  int v4; // eax
  void *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CMarshaledInterface *)(a1 + 16);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW || GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    (*((void (__fastcall **)(__int64))v1 + 1))(v3);
  }
  else
  {
    v7 = 0LL;
    v4 = CMarshaledInterface::_Unmarshal(v1, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, &v7, 0);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v4);
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
}
