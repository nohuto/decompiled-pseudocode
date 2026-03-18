/*
 * XREFs of EtwpCheckSystemTraceAccess @ 0x140628A28
 * Callers:
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x1407A9CB0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x14058DC64 (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x14058F1B4 (EtwpCheckLoggerControlAccess.c)
 */

__int64 __fastcall EtwpCheckSystemTraceAccess(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 832) & 0x20) != 0 )
    return EtwpCheckLoggerControlAccess(a2, a1);
  else
    return EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, a2, 0LL);
}
