/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00EDE40
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00FB0A8 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00FB168 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01DE768 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(
        CCD_TOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r8
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // r12
  unsigned int v19; // edi
  unsigned int i; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9

  v4 = (unsigned int)a2;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4) + 73);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v9, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       v8,
                                       CurrentProcessSessionId,
                                       v12,
                                       v13);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v15 = 216 * v4;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionDataForSpecifiedSession,
                               (const struct _LUID *)(216 * v4 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)));
    if ( SessionAdapterFromLuid )
    {
      v19 = *(_DWORD *)(v16 + 80);
      for ( i = 0; v19; v19 >>= 1 )
      {
        if ( (v19 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
          v34[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v15 + 4);
          v35 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          v34[4] = *(unsigned int *)(v35 + v15);
          v34[5] = i;
          v34[6] = (unsigned int)PsGetCurrentProcessSessionId(i, v35, v36, v37);
          v34[7] = -1073741790LL;
          WdLogEvent5_WdError(v34);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v15 + 80) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v15 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
      v29[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v15 + 4);
      v30 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
      v31 = *(unsigned int *)(v30 + 216 * v4);
      v29[4] = v31;
      v29[5] = (unsigned int)PsGetCurrentProcessSessionId(v31, v30, v32, v33);
      v29[6] = -1073741790LL;
      WdLogEvent5_WdError(v29);
      return 3221225506LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v24 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v26, v25, v27, v28);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
}
