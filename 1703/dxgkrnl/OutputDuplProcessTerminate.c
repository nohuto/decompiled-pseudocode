/*
 * XREFs of OutputDuplProcessTerminate @ 0x1C00A3D28
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008BFBC (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C00DDE5C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E6A04 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 */

void __fastcall OutputDuplProcessTerminate(__int64 a1, PERESOURCE *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGSESSIONMGR *v21; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v24; // rax
  struct DXGFASTMUTEX *const *v25; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE v29[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v30[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v31[40]; // [rsp+48h] [rbp-30h] BYREF

  v4 = (int)a1;
  if ( !(_DWORD)a1
    && (!a3
     || !a2
     || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a3)
     || DXGADAPTER::IsCoreResourceExclusiveOwner(a2)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 2900LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( DXGPROCESS::GetCurrent() )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v29,
      (struct DXGADAPTER *const)a2,
      (struct DXGADAPTER *const)a3);
    if ( !(_DWORD)v4 )
    {
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29) >= 0 )
        ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
          *(ADAPTER_DISPLAY **)(a3 + 2280),
          lambda_77b62ca48c87c620acb82d9376f9f1ce_::_lambda_invoker_cdecl_,
          0LL);
      goto LABEL_10;
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( RemoteOutputDuplMgr )
    {
      OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v18[3] = v4;
      v18[4] = a2;
      v18[5] = a3;
    }
    v21 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
    if ( v21 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v21, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v25 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
      if ( v25 )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
        OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v25, CurrentProcess, v27, v28);
        goto LABEL_10;
      }
      v24 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v24 + 24) = 2960LL;
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v24 + 24) = 2953LL;
    }
    WdLogEvent5_WdError(v24);
LABEL_10:
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    return;
  }
  v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
  *(_QWORD *)(v12 + 24) = 2906LL;
  WdLogEvent5_WdWarning(v12);
}
