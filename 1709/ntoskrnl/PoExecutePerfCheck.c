/*
 * XREFs of PoExecutePerfCheck @ 0x140093910
 * Callers:
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 */

__int64 PoExecutePerfCheck()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  signed __int64 v2; // r9
  __int64 result; // rax

  v0 = PpmCheckLastExecutionTime;
  if ( PpmCheckLastExecutionTime )
  {
    v1 = (unsigned int)KeTimeIncrement;
    if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeTimeIncrement )
      v1 = PpmCheckPeriod;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( (unsigned __int64)(v1 + PpmCheckLastExecutionTime) <= MEMORY[0xFFFFF78000000008] )
    {
      if ( PpmCheckLastExecutionTime != 1
        && PpmCheckLastExecutionTime + v1 + (unsigned __int64)KeMaximumIncrement > MEMORY[0xFFFFF78000000008] )
      {
        v2 = v1 + PpmCheckLastExecutionTime;
      }
      result = _InterlockedCompareExchange64(&PpmCheckLastExecutionTime, v2, PpmCheckLastExecutionTime);
      if ( v0 == result )
        return KiInsertQueueDpc((ULONG_PTR)&PpmCheckStartDpc, 0);
    }
  }
  return result;
}
