/*
 * XREFs of ?BucketLatencyByPerformance@CTelemetryTouchLatencyAnalysis@@CAJGPEBGGPEAGM@Z @ 0x180028A24
 * Callers:
 *     ?BucketLatenciesByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@_N@Z @ 0x180027630 (-BucketLatenciesByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::BucketLatencyByPerformance(
        unsigned __int16 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        float a5)
{
  unsigned int v5; // r8d
  unsigned int v6; // r10d
  int v7; // eax

  v5 = 0;
  if ( !a2 || (v6 = 0, !a4) )
    v6 = -2147467261;
  if ( a2 && a4 )
  {
    while ( 1 )
    {
      LOWORD(v7) = *a2;
      if ( a5 > 0.0 )
        v7 = (int)(float)((float)(unsigned __int16)v7 * a5);
      if ( a1 <= (unsigned __int16)v7 )
        break;
      ++v5;
      ++a2;
      if ( v5 >= 5 )
        return v6;
    }
    ++a4[v5];
  }
  return v6;
}
