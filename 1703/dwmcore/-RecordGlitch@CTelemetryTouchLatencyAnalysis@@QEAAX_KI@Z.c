/*
 * XREFs of ?RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800C2FF8
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180065DC0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18013DB18 (-RetireFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RecordGlitch(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 v3; // r9
  char v4; // al
  _WORD *v5; // rcx
  __int16 v6; // ax

  v3 = 10LL;
  v4 = 0;
  v5 = (_WORD *)((char *)this + 148);
  do
  {
    if ( *((_DWORD *)v5 - 26) && a2 >= *(_QWORD *)(v5 - 26) )
    {
      ++*v5;
      v6 = a3;
      v5[2] += a3;
      if ( v5[1] > (unsigned __int16)a3 )
        v6 = v5[1];
      v5[1] = v6;
      v4 = 1;
    }
    v5 += 100;
    --v3;
  }
  while ( v3 );
  if ( v4 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd(v5, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_RECORDGLITCH_EVENT, a2, a3);
  }
}
