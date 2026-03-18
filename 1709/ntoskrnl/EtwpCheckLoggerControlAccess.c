/*
 * XREFs of EtwpCheckLoggerControlAccess @ 0x14048E46C
 * Callers:
 *     EtwTraceRaw @ 0x14027A94C (EtwTraceRaw.c)
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpUpdateEnableMask @ 0x14048E324 (EtwpUpdateEnableMask.c)
 *     EtwpQueryTrace @ 0x1404ED7B8 (EtwpQueryTrace.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x1405959E0 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140748538 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14074CCA4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpCheckSystemTraceAccess @ 0x140751BD8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpGetSoftRestartInformation @ 0x1407529D8 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140753500 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14048E3EC (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x14048E4C0 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
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
