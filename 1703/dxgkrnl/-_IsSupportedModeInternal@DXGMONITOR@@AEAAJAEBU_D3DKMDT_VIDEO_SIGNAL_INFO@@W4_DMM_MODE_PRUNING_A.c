/*
 * XREFs of ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F98E8
 * Callers:
 *     ?_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F9AD8 (-_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNI.c)
 * Callees:
 *     ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F99A0 (-_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 *     ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01E8A30 (-_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 *     ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01E8B2C (-_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_AL.c)
 *     ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01E8C34 (-_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUN.c)
 */

__int64 __fastcall DXGMONITOR::_IsSupportedModeInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        _DWORD *a6)
{
  char v6; // r14
  unsigned int v7; // ebp
  int IsModeSupportedByDriver; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int IsModeInPixelRateRange; // eax
  __int64 v23; // r8
  __int64 v24; // rax
  int IsModeSupportedByMonitorMode; // eax
  __int64 v26; // rax
  int IsModeInActiveSizeRange; // eax
  __int64 v28; // rax
  __int64 v29; // rax

  v6 = a4;
  v7 = a3;
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a5 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a6 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  LOBYTE(a4) = v6;
  *a6 = 0;
  IsModeSupportedByDriver = DXGMONITOR::_IsModeSupportedByDriver(a1, a2, v7, a4, a5, a6);
  v15 = IsModeSupportedByDriver;
  if ( IsModeSupportedByDriver < 0 )
    goto LABEL_10;
  if ( *a5 )
    return 0LL;
  if ( *a6 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !v6 )
  {
    IsModeInPixelRateRange = DXGMONITOR::_IsModeInPixelRateRange(a1, a2, v7, a5, a6);
    v15 = IsModeInPixelRateRange;
    if ( IsModeInPixelRateRange < 0 )
      goto LABEL_10;
    if ( !*a5 )
      goto LABEL_27;
    if ( *a6 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v12, v11, v23, v14);
      WdLogEvent5_WdAssertion(v24);
    }
  }
  LOBYTE(v14) = v6;
  IsModeSupportedByMonitorMode = DXGMONITOR::_IsModeSupportedByMonitorMode(a1, a2, v7, v14, a5, a6);
  v15 = IsModeSupportedByMonitorMode;
  if ( IsModeSupportedByMonitorMode >= 0 )
  {
    if ( *a5 )
      goto LABEL_27;
    if ( *a6 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v12, v11, v23, v14);
      WdLogEvent5_WdAssertion(v26);
    }
    IsModeInActiveSizeRange = DXGMONITOR::_IsModeInActiveSizeRange(a1, a2, v7, a5, a6);
    v15 = IsModeInActiveSizeRange;
    if ( IsModeInActiveSizeRange >= 0 )
    {
      if ( !*a5 )
      {
        if ( *a6 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v12, v11, v23, v14);
          WdLogEvent5_WdAssertion(v28);
        }
        *a5 = 0;
        *a6 = 1;
        return 0LL;
      }
LABEL_27:
      if ( !*a6 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v12, v11, v23, v14);
        WdLogEvent5_WdAssertion(v29);
      }
      return 0LL;
    }
  }
LABEL_10:
  v20 = WdLogNewEntry5_WdError(v12, v11);
  *(_QWORD *)(v20 + 24) = v15;
  WdLogEvent5_WdError(v20);
  return (unsigned int)v15;
}
