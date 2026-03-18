/*
 * XREFs of ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B7E54
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00BE59C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B7F00 (-_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 *     ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C023C744 (-_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 *     ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C023C840 (-_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_AL.c)
 *     ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C023C948 (-_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUN.c)
 */

__int64 __fastcall DXGMONITOR::_IsSupportedModeInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5,
        int *a6)
{
  char v6; // r14
  int IsModeSupportedByDriver; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int IsModeInPixelRateRange; // eax
  int v21; // eax
  __int64 v22; // rax
  int IsModeSupportedByMonitorMode; // eax
  __int64 v24; // rax
  int IsModeInActiveSizeRange; // eax
  __int64 v26; // rax
  __int64 v27; // rax

  v6 = a4;
  if ( a3 - 1 > 1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a5 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a6 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
  }
  *a6 = 0;
  LOBYTE(a4) = v6;
  IsModeSupportedByDriver = DXGMONITOR::_IsModeSupportedByDriver(a1, a2, a3, a4, a5, a6);
  v13 = IsModeSupportedByDriver;
  if ( IsModeSupportedByDriver < 0 )
    goto LABEL_10;
  if ( *a5 )
    return 0LL;
  if ( *a6 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !v6 )
  {
    IsModeInPixelRateRange = DXGMONITOR::_IsModeInPixelRateRange(a1, a2, a3, a5, a6);
    v13 = IsModeInPixelRateRange;
    if ( IsModeInPixelRateRange < 0 )
      goto LABEL_10;
    v21 = *a6;
    if ( !*a5 )
      goto LABEL_27;
    if ( v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v22);
    }
  }
  LOBYTE(v12) = v6;
  IsModeSupportedByMonitorMode = DXGMONITOR::_IsModeSupportedByMonitorMode(a1, a2, a3, v12, a5, a6);
  v13 = IsModeSupportedByMonitorMode;
  if ( IsModeSupportedByMonitorMode >= 0 )
  {
    v21 = *a6;
    if ( *a5 )
      goto LABEL_27;
    if ( v21 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v24);
    }
    IsModeInActiveSizeRange = DXGMONITOR::_IsModeInActiveSizeRange(a1, a2, a3, a5, a6);
    v13 = IsModeInActiveSizeRange;
    if ( IsModeInActiveSizeRange >= 0 )
    {
      v21 = *a6;
      if ( !*a5 )
      {
        if ( v21 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v26);
        }
        *a5 = 0;
        *a6 = 1;
        return 0LL;
      }
LABEL_27:
      if ( !v21 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v27);
      }
      return 0LL;
    }
  }
LABEL_10:
  v18 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v18 + 24) = v13;
  WdLogEvent5_WdError(v18);
  return (unsigned int)v13;
}
