/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01C6580
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C01C9FAC (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01C5700 (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C01C6DE4 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v5; // edx
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // r15
  UINT i; // edi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v17; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v19; // rax
  struct DXGFASTMUTEX *const *v20; // rcx
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  v5 = this[13];
  v6 = 56 * v5 * this[2] + 24LL;
  if ( a2->Size < v6 )
  {
    a2->Size = 56 * v5 * this[2] + 24;
    return 1075707914LL;
  }
  v7 = 0LL;
  a2->NumVidPnSources = v5;
  for ( a2->NumOutputDuplContexts = this[2]; (unsigned int)v7 < a2->NumVidPnSources; v7 = (unsigned int)(v7 + 1) )
  {
    v8 = *((_QWORD *)this + 2);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, *(struct DXGFASTMUTEX *const *)(v8 + 24 * v7));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    v9 = *(__int64 **)(v8 + 24 * v7 + 8);
    for ( i = 0; i < a2->NumOutputDuplContexts; ++v9 )
    {
      v11 = *v9;
      v12 = i + (_DWORD)v7 * a2->NumOutputDuplContexts;
      if ( *v9 )
      {
        v13 = v12;
        a2->OutputDuplDebugInfos[v12].Status = (*(_DWORD *)(v11 + 288) != 0) + 1;
        a2->OutputDuplDebugInfos[v13].ProcessID = PsGetProcessId(*(PEPROCESS *)(v11 + 24));
        a2->OutputDuplDebugInfos[v13].AccumulatedPresents = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 272) + 8LL) + 4LL);
        a2->OutputDuplDebugInfos[v13].LastMouseTime.QuadPart = **(_QWORD **)(v11 + 272);
        a2->OutputDuplDebugInfos[v13].LastPresentTime.QuadPart = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 272) + 8LL)
                                                                           + 8LL);
        *(_OWORD *)a2->OutputDuplDebugInfos[v13].ProcessName = *(_OWORD *)PsGetProcessImageFileName(*(_QWORD *)(v11 + 24));
      }
      else
      {
        memset(&a2->OutputDuplDebugInfos[v12], 0, sizeof(a2->OutputDuplDebugInfos[v12]));
      }
      ++i;
    }
    if ( v21[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  }
  v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 73);
  if ( v15 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v15, CurrentProcessSessionId, v17);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v19 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v19 + 24) = 2178LL;
LABEL_19:
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  v20 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v20 )
  {
    v19 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v19 + 24) = 2185LL;
    goto LABEL_19;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v20, a2);
  return 0LL;
}
