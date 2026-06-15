/*
 * XREFs of ??_G?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAPEAXI@Z @ 0x1400597D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAA@XZ @ 0x140059654 (--1-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger.c)
 */

void *__fastcall CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::~CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
