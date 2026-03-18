/*
 * XREFs of OutputDuplProcessTerminate @ 0x1C00AA958
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009CCCC (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00AAA98 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00AAB1C (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E1AFC (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall OutputDuplProcessTerminate(__int64 a1, PERESOURCE *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  OUTPUTDUPL_SESSION_MGR *v20; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v26[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v27[40]; // [rsp+48h] [rbp-30h] BYREF

  v3 = (int)a1;
  if ( !(_DWORD)a1
    && (!a3
     || !a2
     || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a3)
     || DXGADAPTER::IsCoreResourceExclusiveOwner(a2)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 2981LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( DXGPROCESS::GetCurrent() )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v25,
      (struct DXGADAPTER *const)a2,
      (struct DXGADAPTER *const)a3);
    if ( !(_DWORD)v3 )
    {
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25) >= 0 )
        ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
          *(ADAPTER_DISPLAY **)(a3 + 2456),
          (int (*)(struct OUTPUTDUPL_MGR *, void *))lambda_77b62ca48c87c620acb82d9376f9f1ce_::_lambda_invoker_cdecl_,
          0LL);
      goto LABEL_11;
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( RemoteOutputDuplMgr )
    {
      OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      v14[3] = v3;
      v14[4] = a2;
      v14[5] = a3;
    }
    v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v15) + 74);
    if ( v17 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v17, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v20 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
      if ( v20 )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
        OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v20, CurrentProcess);
LABEL_11:
        COREACCESS::~COREACCESS((COREACCESS *)v27);
        COREACCESS::~COREACCESS((COREACCESS *)v26);
        return;
      }
      v24 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v24 + 24) = 3041LL;
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v24 + 24) = 3034LL;
    }
    WdLogEvent5_WdError(v24);
    goto LABEL_11;
  }
  v23 = WdLogNewEntry5_WdWarning(v7, v6, v8);
  *(_QWORD *)(v23 + 24) = 2987LL;
  WdLogEvent5_WdWarning(v23);
}
