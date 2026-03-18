/*
 * XREFs of _lambda_352933434268f97f7896632aa298aa71_::_lambda_invoker_cdecl_ @ 0x1C00DD620
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00DD060 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00DDEC0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

__int64 __fastcall lambda_352933434268f97f7896632aa298aa71_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_MGR *this,
        PERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v20; // rax
  OUTPUTDUPL_MGR *v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax

  if ( *(_QWORD *)this )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 144)) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      *(_QWORD *)(v23 + 24) = 1393LL;
      WdLogEvent5_WdAssertion(v23);
    }
  }
  if ( !*((_DWORD *)a2 + 18) )
    ExIsResourceAcquiredExclusiveLite(a2[13]);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, (struct DXGDEVICE *)a2, 0);
  v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9, v11, v12) + 73);
  if ( !v15
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v16, v17),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, CurrentProcessSessionId)) == 0LL) )
  {
    v24 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v24 + 24) = 3578LL;
    goto LABEL_15;
  }
  v20 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v20 )
  {
    v24 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v24 + 24) = 3585LL;
LABEL_15:
    WdLogEvent5_WdError(v24);
    return 0LL;
  }
  v21 = *(OUTPUTDUPL_MGR **)(v20 + 40);
  if ( v21 )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(v21, (struct DXGDEVICE *)a2, 0);
  return 0LL;
}
