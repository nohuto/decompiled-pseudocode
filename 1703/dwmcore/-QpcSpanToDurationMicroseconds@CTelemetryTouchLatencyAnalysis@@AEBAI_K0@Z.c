/*
 * XREFs of ?QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18002794C
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x1800C3144 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        __int64 a3)
{
  double v3; // xmm1_8
  __int64 result; // rax
  __int64 v5; // r8
  double v6; // xmm0_8

  v3 = *((double *)this + 284);
  result = 0LL;
  if ( v3 != 0.0 )
  {
    v5 = a3 - a2;
    v6 = (double)(int)v5;
    if ( v5 < 0 )
      v6 = v6 + 1.844674407370955e19;
    return (unsigned int)(int)(v6 / v3);
  }
  return result;
}
