/*
 * XREFs of CiSystemDetectIdleProcessors @ 0x1C0003A94
 * Callers:
 *     CiSchedulerWait @ 0x1C00038B4 (CiSchedulerWait.c)
 * Callees:
 *     <none>
 */

void CiSystemDetectIdleProcessors()
{
  int v0; // ebx
  unsigned int v1; // ebp
  int v2; // esi
  unsigned int v3; // edi
  __int64 v4; // r14

  if ( !CiSchedulerDisallowLazyMode )
  {
    v0 = 0;
    v1 = byte_1C0006218;
    v2 = 0;
    v3 = 0;
    if ( !byte_1C0006218 )
      goto LABEL_8;
    v4 = 0LL;
    do
    {
      if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v3, v4 + CiLastIdleTime) )
        ++v2;
      ++v3;
      v4 += 8LL;
    }
    while ( v3 < v1 );
    if ( !v2 )
LABEL_8:
      v0 = (2 * CiProcessorIdleHistoryBits) | 1;
    CiProcessorIdleHistoryBits = CiSchedulerIdleCycleBitMask & v0;
  }
}
