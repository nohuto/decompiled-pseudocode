/*
 * XREFs of ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x140031CA0
 * Callers:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x14002FD30 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     ??0?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@_K11@Z @ 0x140031D84 (--0-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClus.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessEndpointTraceLogger *__fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger(
        CCrossProcessEndpointTraceLogger *this)
{
  *(_QWORD *)this = &CCrossProcessEndpointTraceLogger::`vftable';
  *(GUID *)((char *)this + 8) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 8) = (char *)this + 8;
  memset((char *)this + 72, 0, 0x20uLL);
  *((_QWORD *)this + 3) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>(
    (char *)this + 104,
    (char *)this + 24);
  return this;
}
