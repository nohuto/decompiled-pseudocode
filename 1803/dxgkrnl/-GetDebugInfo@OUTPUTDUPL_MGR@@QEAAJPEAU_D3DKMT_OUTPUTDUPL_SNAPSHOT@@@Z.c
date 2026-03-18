/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01C93A8
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C01CD520 (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01C8184 (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C01C9F0C (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v5; // edx
  unsigned __int64 NumOutputDuplContexts; // rcx
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r13
  char *v12; // r15
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rax
  struct DXGFASTMUTEX *const *v18; // rcx
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  v5 = this[13];
  NumOutputDuplContexts = 56 * v5 * this[2] + 24LL;
  if ( a2->Size < NumOutputDuplContexts )
  {
    a2->Size = 56 * v5 * this[2] + 24;
    return 1075707914LL;
  }
  v7 = 0LL;
  a2->NumVidPnSources = v5;
  for ( a2->NumOutputDuplContexts = this[2]; (unsigned int)v7 < a2->NumVidPnSources; v7 = (unsigned int)(v7 + 1) )
  {
    v8 = *((_QWORD *)this + 2);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *(struct DXGFASTMUTEX *const *)(v8 + 24 * v7), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v9 = *(__int64 **)(v8 + 24 * v7 + 8);
    v10 = 0;
    NumOutputDuplContexts = a2->NumOutputDuplContexts;
    if ( (_DWORD)NumOutputDuplContexts )
    {
      do
      {
        v11 = *v9;
        v12 = (char *)a2 + 56 * v10 + 56 * (_DWORD)NumOutputDuplContexts * (_DWORD)v7;
        if ( *v9 )
        {
          *((_DWORD *)v12 + 6) = (*(_DWORD *)(v11 + 288) != 0) + 1;
          *((_QWORD *)v12 + 4) = PsGetProcessId(*(PEPROCESS *)(v11 + 24));
          *((_DWORD *)v12 + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 272) + 8LL) + 4LL);
          *((_QWORD *)v12 + 7) = **(_QWORD **)(v11 + 272);
          *((_QWORD *)v12 + 6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 272) + 8LL) + 8LL);
          *((_OWORD *)v12 + 4) = *(_OWORD *)PsGetProcessImageFileName(*(_QWORD *)(v11 + 24));
        }
        else
        {
          memset(v12 + 24, 0, 0x38uLL);
        }
        NumOutputDuplContexts = a2->NumOutputDuplContexts;
        ++v10;
        ++v9;
      }
      while ( v10 < (unsigned int)NumOutputDuplContexts );
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(NumOutputDuplContexts) + 74);
  if ( v14 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = 2178LL;
LABEL_19:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v18 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v18 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 2185LL;
    goto LABEL_19;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v18, a2);
  return 0LL;
}
