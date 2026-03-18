/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x140596294
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1406981A8 (CmpSendUnsupportedOperationTelemetryEvent.c)
 */

__int64 CmpFlushUnsupportedOperationTelemetry()
{
  int v0; // ebx
  volatile __int32 *v1; // rdi
  __int64 result; // rax

  v0 = 0;
  v1 = (volatile __int32 *)&CmpUnsupportedOperationHits;
  do
  {
    if ( _InterlockedExchange(v1, 0) )
      result = CmpSendUnsupportedOperationTelemetryEvent((unsigned int)v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 24 );
  return result;
}
