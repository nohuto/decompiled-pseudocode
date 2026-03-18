/*
 * XREFs of ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B7F00
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B7E54 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C00033B8 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeSupportedByDriver(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        int a3,
        char a4,
        _BYTE *a5,
        _DWORD *a6)
{
  _QWORD *v9; // rsi
  _QWORD *i; // rax
  _QWORD *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a6 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  v9 = (_QWORD *)(a1 + 216);
  for ( i = (_QWORD *)*v9; ; i = (_QWORD *)v11[12] )
  {
    if ( i == v9 )
      goto LABEL_14;
    v11 = i - 12;
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_14:
      *a5 = 0;
      return 0LL;
    }
    if ( *((_DWORD *)v11 + 21) == 5
      && DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
           a2,
           (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v11 + 1),
           a4) )
    {
      break;
    }
  }
  *a6 = 7;
  *a5 = 1;
  return 0LL;
}
