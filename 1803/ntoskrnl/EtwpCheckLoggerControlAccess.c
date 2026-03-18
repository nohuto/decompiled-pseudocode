/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x14058F1B4
 * Callers:
 *     EtwTraceRaw @ 0x1402ADB24 (EtwTraceRaw.c)
 *     EtwpFlushTrace @ 0x140580054 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14058B85C (EtwpQueryTrace.c)
 *     EtwpUpdateEnableMask @ 0x14058F384 (EtwpUpdateEnableMask.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     EtwpCheckSystemTraceAccess @ 0x140628A28 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1407AE8BC (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x1407B9774 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1407BA2B0 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14058F208 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140591ABC (EtwpReferenceLoggerSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess, 0LL);
  EtwpDereferenceLoggerSecurityDescriptor(a2, v4);
  return v5;
}
