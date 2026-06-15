/*
 * XREFs of ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002F04C
 * Callers:
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$0 @ 0x1400202D0 (_CAudioDeviceGraph--Initialize_--_1_--dtor$0.c)
 *     _CAudioDeviceGraph::UpdateLoopbackConstrictionLevel_::_1_::dtor$0 @ 0x1400405B5 (_CAudioDeviceGraph--UpdateLoopbackConstrictionLevel_--_1_--dtor$0.c)
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::AddData_::_1_::dtor$0 @ 0x140059A4D (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCountValues_enu.c)
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::Clear_::_1_::dtor$0 @ 0x140059C61 (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCo_ea_140059C61.c)
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::Log_::_1_::dtor$0 @ 0x140059D90 (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCo_ea_140059D90.c)
 *     _CAggregateTelemetryLazyUpdate_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::SetPeriod_::_1_::dtor$0 @ 0x14005AE44 (_CAggregateTelemetryLazyUpdate_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCount.c)
 * Callees:
 *     <none>
 */

void __fastcall CSAutoLock<1>::~CSAutoLock<1>(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
