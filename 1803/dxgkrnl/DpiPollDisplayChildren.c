/*
 * XREFs of DpiPollDisplayChildren @ 0x1C01EFC94
 * Callers:
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0166404 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkSetDisplayMode @ 0x1C0194F30 (DxgkSetDisplayMode.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019FE84 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000B870 (DpiCheckForOutstandingD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiPollDisplayChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax

  v3 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, File, 1u, 0x20u);
  v11 = v7;
  if ( v7 < 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdWarning(v12);
    return (unsigned int)v11;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
    DpiCheckForOutstandingD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  if ( *(_DWORD *)(v3 + 236) != 2 )
  {
    LODWORD(v11) = -1073741823;
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 32) = -1073741823LL;
LABEL_11:
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v3 + 3808) == 1 || *(_DWORD *)(v3 + 284) != 1 )
  {
    LODWORD(v11) = -1073741661;
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 32) = -1073741661LL;
    goto LABEL_11;
  }
  LODWORD(v11) = DpiFdoInvalidateChildRelations(a1, a2, a3);
LABEL_12:
  if ( *(_BYTE *)(v3 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), 0LL, 0x20u);
  return (unsigned int)v11;
}
