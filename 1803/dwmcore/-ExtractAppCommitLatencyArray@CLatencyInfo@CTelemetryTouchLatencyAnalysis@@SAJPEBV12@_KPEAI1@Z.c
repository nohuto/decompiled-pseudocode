/*
 * XREFs of ?ExtractAppCommitLatencyArray@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@SAJPEBV12@_KPEAI1@Z @ 0x18014D6EC
 * Callers:
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014DABC (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CLatencyInfo::ExtractAppCommitLatencyArray(
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a1,
        unsigned __int64 a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rax
  unsigned int *v6; // rdx
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( !a1 )
  {
    v9 = 118;
LABEL_3:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v9);
    return v3;
  }
  if ( !a3 )
  {
    v9 = 119;
    goto LABEL_3;
  }
  if ( a2 - 1 > 4 )
  {
    v9 = 122;
    goto LABEL_3;
  }
  v5 = 0LL;
  if ( a2 )
  {
    v6 = (unsigned int *)((char *)a1 + 12);
    do
    {
      v7 = *v6;
      v6 += 6;
      a3[v5++] = v7;
    }
    while ( v5 < a2 );
  }
  return v3;
}
