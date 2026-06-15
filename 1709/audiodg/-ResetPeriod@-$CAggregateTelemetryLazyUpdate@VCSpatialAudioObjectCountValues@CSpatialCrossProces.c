/*
 * XREFs of ?ResetPeriod@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x14005D950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::ResetPeriod(
        __int64 *a1)
{
  __int64 v1; // rax

  v1 = *a1;
  a1[4] = 0LL;
  return (*(__int64 (**)(void))(v1 + 16))();
}
