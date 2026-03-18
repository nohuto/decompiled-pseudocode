/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x1404F1C84
 * Callers:
 *     EtwTraceRaw @ 0x140252FC0 (EtwTraceRaw.c)
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     EtwpUpdateEnableMask @ 0x1404F1D24 (EtwpUpdateEnableMask.c)
 *     EtwpQueryTrace @ 0x1405515A4 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405D8D94 (EtwpCheckSystemTraceAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x14070CEA0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14070FFFC (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpGetSoftRestartInformation @ 0x140713888 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140714364 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1404F1C0C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1404F1CD8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x1404F2AB8 (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckLoggerControlAccess(ACCESS_MASK DesiredAccess, __int64 a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx

  v4 = (void *)EtwpReferenceLoggerSecurityDescriptor(a2);
  v5 = EtwpAccessCheck(v4, DesiredAccess);
  EtwpDereferenceLoggerSecurityDescriptor(a2, v4);
  return v5;
}
