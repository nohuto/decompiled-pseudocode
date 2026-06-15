/*
 * XREFs of ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005E97C
 * Callers:
 *     ?EmptyBufferMonitorThreadThunk@CSpatialCrossProcessServerEndpoint@@CAKPEAX@Z @ 0x14005EA80 (-EmptyBufferMonitorThreadThunk@CSpatialCrossProcessServerEndpoint@@CAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x140046B10 (-ResetEngineThreadPriority@@YAJPEAPEAX@Z.c)
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x140046B5C (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 *     ?LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005A14C (-LogPulseEndpoint@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AC28 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GetEmptyBufferCount@CSpatialCrossProcessBaseEndpoint@@IEAAIXZ @ 0x14005EA90 (-GetEmptyBufferCount@CSpatialCrossProcessBaseEndpoint@@IEAAIXZ.c)
 *     ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F068 (-SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ.c)
 */

void __fastcall CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThread(HANDLE *this)
{
  __int64 v2; // rcx
  bool v3; // di
  DWORD v4; // eax
  const GUID *v5; // r8
  DWORD v6; // esi
  const GUID *v7; // r9
  DWORD v8; // esi
  HANDLE Handles[3]; // [rsp+20h] [rbp-38h] BYREF

  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThread", 335);
  Handles[0] = this[117];
  Handles[1] = this[115];
  Handles[2] = this[116];
  SetEngineThreadPriority(v2, this + 119);
  SetEvent(this[118]);
  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = WaitForMultipleObjects(3u, Handles, 0, 0xFFFFFFFF);
      LOBYTE(v5) = v3;
      v6 = v4;
      CSpatialCrossProcessEndpointTraceLogger::LogPulseEndpoint(
        (CSpatialCrossProcessEndpointTraceLogger *)(this + 48),
        v4,
        v5,
        v7);
      v8 = v6 - 1;
      if ( v8 )
        break;
      v3 = 0;
LABEL_7:
      if ( CSpatialCrossProcessBaseEndpoint::GetEmptyBufferCount((CSpatialCrossProcessBaseEndpoint *)this) )
        v3 = CSpatialCrossProcessServerEndpoint::SignalCompletionEvent((CSpatialCrossProcessServerEndpoint *)this);
    }
    if ( v8 != 1 )
      break;
    if ( !v3 )
      goto LABEL_7;
  }
  ResetEngineThreadPriority(this + 119);
}
