/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01ACB28
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C01B01F0 (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01ABCB4 (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C01AD2EC (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  __int64 v4; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 *v11; // r15
  UINT i; // edi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v25; // rax
  struct DXGFASTMUTEX *const *v26; // rcx
  _BYTE v27[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  v6 = this[13];
  v7 = 56 * (unsigned int)v6 * this[2];
  v8 = v7 + 24;
  if ( a2->Size < (unsigned __int64)(v7 + 24) )
  {
    a2->Size = v7 + 24;
    return 1075707914LL;
  }
  v9 = 0LL;
  a2->NumVidPnSources = v6;
  for ( a2->NumOutputDuplContexts = this[2]; (unsigned int)v9 < a2->NumVidPnSources; v9 = (unsigned int)(v9 + 1) )
  {
    v10 = *((_QWORD *)this + 2);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, *(struct DXGFASTMUTEX *const *)(v10 + 24 * v9), v7, v4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    v11 = *(__int64 **)(v10 + 24 * v9 + 8);
    for ( i = 0; i < a2->NumOutputDuplContexts; ++v11 )
    {
      v13 = *v11;
      v14 = i + (_DWORD)v9 * a2->NumOutputDuplContexts;
      if ( *v11 )
      {
        v15 = v14;
        a2->OutputDuplDebugInfos[v14].Status = (*(_DWORD *)(v13 + 288) != 0) + 1;
        a2->OutputDuplDebugInfos[v15].ProcessID = PsGetProcessId(*(PEPROCESS *)(v13 + 24));
        a2->OutputDuplDebugInfos[v15].AccumulatedPresents = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 272) + 8LL) + 4LL);
        a2->OutputDuplDebugInfos[v15].LastMouseTime.QuadPart = **(_QWORD **)(v13 + 272);
        a2->OutputDuplDebugInfos[v15].LastPresentTime.QuadPart = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 272) + 8LL)
                                                                           + 8LL);
        *(_OWORD *)a2->OutputDuplDebugInfos[v15].ProcessName = *(_OWORD *)PsGetProcessImageFileName(*(_QWORD *)(v13 + 24));
      }
      else
      {
        memset(&a2->OutputDuplDebugInfos[v14], 0, sizeof(a2->OutputDuplDebugInfos[v14]));
      }
      ++i;
    }
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v6, v7, v4);
  }
  v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v6, v7, v4) + 73);
  if ( v18 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16, v19, v20);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       v18,
                                       CurrentProcessSessionId,
                                       v22,
                                       v23);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v25 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v25 + 24) = 2097LL;
LABEL_19:
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v26 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v26 )
  {
    v25 = WdLogNewEntry5_WdError(0LL, v16);
    *(_QWORD *)(v25 + 24) = 2104LL;
    goto LABEL_19;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v26, a2, v19, v20);
  return 0LL;
}
