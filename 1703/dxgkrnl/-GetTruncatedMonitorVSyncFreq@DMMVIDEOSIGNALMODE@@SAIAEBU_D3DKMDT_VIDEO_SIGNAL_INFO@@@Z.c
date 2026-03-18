/*
 * XREFs of ?GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0045DF8
 * Callers:
 *     ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01E8C34 (-_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  UINT Denominator; // r8d

  Denominator = a1->VSyncFreq.Denominator;
  if ( Denominator )
    return a1->VSyncFreq.Numerator / Denominator;
  else
    return 0xFFFFFFFFLL;
}
