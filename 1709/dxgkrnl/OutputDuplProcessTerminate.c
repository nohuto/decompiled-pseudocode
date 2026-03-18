/*
 * XREFs of OutputDuplProcessTerminate @ 0x1C00F77D4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009077C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0090AB0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00AC068 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00FAECC (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall OutputDuplProcessTerminate(__int64 a1, PERESOURCE *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  OUTPUTDUPL_CONTEXT **RemoteOutputDuplMgr; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v21; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v23; // rax
  OUTPUTDUPL_SESSION_MGR *v24; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _BYTE v26[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v27[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v28[40]; // [rsp+48h] [rbp-30h] BYREF

  v3 = (int)a1;
  if ( !(_DWORD)a1
    && (!a3
     || !a2
     || DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a3)
     || DXGADAPTER::IsCoreResourceExclusiveOwner(a2)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v10 + 24) = 2981LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( DXGPROCESS::GetCurrent(a1, (__int64)a2) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v26,
      (struct DXGADAPTER *const)a2,
      (struct DXGADAPTER *const)a3);
    if ( !(_DWORD)v3 )
    {
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26) >= 0 )
        ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
          *(ADAPTER_DISPLAY **)(a3 + 2304),
          (__int64 (__fastcall *)(__int64, __int64))lambda_77b62ca48c87c620acb82d9376f9f1ce_::_lambda_invoker_cdecl_,
          0LL);
      goto LABEL_10;
    }
    RemoteOutputDuplMgr = (OUTPUTDUPL_CONTEXT **)FindRemoteOutputDuplMgr(v9);
    if ( RemoteOutputDuplMgr )
    {
      OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
      v15[3] = v3;
      v15[4] = a2;
      v15[5] = a3;
    }
    v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16) + 73);
    if ( v19 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         v19,
                                         CurrentProcessSessionId,
                                         v21);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      v24 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
      if ( v24 )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v18, v17);
        OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v24, CurrentProcess);
        goto LABEL_10;
      }
      v23 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v23 + 24) = 3041LL;
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v23 + 24) = 3034LL;
    }
    WdLogEvent5_WdError(v23);
LABEL_10:
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    return;
  }
  v11 = WdLogNewEntry5_WdWarning(v7, v6, v8);
  *(_QWORD *)(v11 + 24) = 2987LL;
  WdLogEvent5_WdWarning(v11);
}
