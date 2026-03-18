/*
 * XREFs of CmpFlushUnsupportedOperationTelemetry @ 0x14057DD64
 * Callers:
 *     CmpDoReconcileNextHive @ 0x14049A6D0 (CmpDoReconcileNextHive.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 * Callees:
 *     CmpSendUnsupportedOperationTelemetryEvent @ 0x1406FB32C (CmpSendUnsupportedOperationTelemetryEvent.c)
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
