/*
 * XREFs of ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x180001DA8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTelemetryFrameStatistics::UpdateFrameStatistics(
        CTelemetryFrameStatistics *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        bool a7)
{
  double v7; // xmm1_8
  double v8; // xmm1_8

  if ( a7 )
  {
    ++*((_DWORD *)this + 8);
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 6) += a3 - a2;
    if ( (unsigned __int64)(a3 - a2) > *((_QWORD *)this + 7) )
      *((_QWORD *)this + 7) = a3 - a2;
    if ( a3 - *((_QWORD *)this + 2) > (unsigned __int64)(4 * a4) )
      ++*((_DWORD *)this + 9);
    *((_QWORD *)this + 2) = a3;
    if ( a5 )
      ++*((_DWORD *)this + 10);
    if ( a6 )
      ++*((_DWORD *)this + 11);
    v8 = (double)((int)a3 - *(_DWORD *)this);
    if ( a3 - *(_QWORD *)this < 0 )
      v8 = v8 + 1.844674407370955e19;
    if ( v8 / ((double)(int)g_qpcFrequency.LowPart / 1000.0) >= 60000.0 )
      CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(this, a3);
  }
  else if ( ++*((_DWORD *)this + 6) > 0x3Cu )
  {
    if ( !*((_QWORD *)this + 1) )
      goto LABEL_7;
    v7 = (double)((int)a2 - *((_DWORD *)this + 2));
    if ( a2 - *((_QWORD *)this + 1) < 0 )
      v7 = v7 + 1.844674407370955e19;
    if ( v7 / ((double)(int)g_qpcFrequency.LowPart / 1000.0) > 600000.0 )
LABEL_7:
      CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(this, a2);
  }
}
