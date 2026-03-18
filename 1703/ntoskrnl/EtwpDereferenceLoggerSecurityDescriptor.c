/*
 * XREFs of EtwpDereferenceLoggerSecurityDescriptor @ 0x1404F1CD8
 * Callers:
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpDereferenceLoggerSecurityDescriptor(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 784));
  result = *(_QWORD *)(a1 + 784);
  if ( (a2 ^ (unsigned __int64)result) >= 0xF )
    return ObDereferenceSecurityDescriptor(a2);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 784), result + 1, result);
    if ( v3 == result )
      break;
    if ( (a2 ^ (unsigned __int64)result) >= 0xF )
      return ObDereferenceSecurityDescriptor(a2);
  }
  return result;
}
