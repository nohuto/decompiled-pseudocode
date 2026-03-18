/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00B63F8
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00A0410 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00A2578 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C0225328 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r8
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // r12
  unsigned int v12; // edi
  unsigned int i; // esi
  __int64 v14; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rbx

  v2 = a2;
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 74);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v8 = 316 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionDataForSpecifiedSession,
                               (const struct _LUID *)(316 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)));
    if ( SessionAdapterFromLuid )
    {
      v12 = *(_DWORD *)(v9 + 80);
      for ( i = 0; v12; v12 >>= 1 )
      {
        if ( (v12 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v20[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
          v20[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
          v20[5] = i;
          v20[6] = (unsigned int)PsGetCurrentProcessSessionId(i);
          v20[7] = -1073741790LL;
          WdLogEvent5_WdError(v20);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 80) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v18[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v19 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 316 * v2);
      v18[4] = v19;
      v18[5] = (unsigned int)PsGetCurrentProcessSessionId(v19);
      v18[6] = -1073741790LL;
      WdLogEvent5_WdError(v18);
      return 3221225506LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v16 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17);
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
}
