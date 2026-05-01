/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4e7b8f516fbf6b27e467880778c2719___::Run @ 0x18016D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180047CE4 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4e7b8f516fbf6b27e467880778c2719___::Run(
        __int64 a1)
{
  CMarshaledInterface *v1; // rbx
  HWND WindowW; // rax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  void *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = (CMarshaledInterface *)(a1 + 16);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( WindowW && !GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    v10 = 0LL;
    v3 = CMarshaledInterface::_Unmarshal(v1, &GUID_bc5ec145_0464_42ff_aeda_cf0c82a89156, &v10, 0);
    v4 = retaddr;
    if ( v3 >= 0 )
    {
      v11 = 0LL;
      v6 = *((_QWORD *)v1 + 1);
      v7 = -1LL;
      do
        ++v7;
      while ( *(_WORD *)(v6 + 2 * v7) );
      MsgStringCreateShared(v6, v7, &v11);
      v3 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v10 + 24LL))(v10, v11);
      v4 = retaddr;
      if ( v3 >= 0 )
        goto LABEL_10;
      v5 = 436LL;
    }
    else
    {
      v5 = 432LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
LABEL_10:
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
}
