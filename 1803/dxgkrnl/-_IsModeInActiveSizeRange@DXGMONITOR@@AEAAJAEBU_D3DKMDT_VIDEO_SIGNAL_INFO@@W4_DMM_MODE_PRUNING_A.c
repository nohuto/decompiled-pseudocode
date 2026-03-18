/*
 * XREFs of ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C023C744
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B7E54 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     SupportedVideoSignal @ 0x1C023C5A0 (SupportedVideoSignal.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeInActiveSizeRange(__int64 a1, _DWORD *a2, int a3, char *a4, _DWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 i; // rcx
  int *v14; // rbx
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // rax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = a1 + 264;
  for ( i = *(_QWORD *)(a1 + 264); ; i = *((_QWORD *)v14 + 6) )
  {
    if ( i == v12 )
      goto LABEL_14;
    v14 = (int *)(i - 48);
    if ( !i )
      v14 = 0LL;
    if ( !v14 )
    {
LABEL_14:
      *a4 = 0;
      return 0LL;
    }
    if ( v14[9] == 1 )
      break;
  }
  v16 = SupportedVideoSignal(a2, (unsigned int *)v14, a3);
  *a4 = v16;
  if ( !v16 )
    return 0LL;
  if ( *v14 == 4 )
  {
    *a5 = 8;
    return 0LL;
  }
  v18 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v18 + 24) = *v14;
  WdLogEvent5_WdError(v18);
  return 3223192348LL;
}
