/*
 * XREFs of FlushWorkItemRoutineKernelMode @ 0x14044C610
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x140030F08 (EnableFlushTimer.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     LookUpTableFlushPartial @ 0x14044C674 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1405CAEC8 (LookUpTableFlushComplete.c)
 */

signed __int16 __fastcall FlushWorkItemRoutineKernelMode(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int16 result; // ax

  if ( *(_BYTE *)(a1 + 428) )
  {
    *(_BYTE *)(a1 + 428) = 0;
    LookUpTableFlushComplete(a1, a2, a3);
  }
  else
  {
    LookUpTableFlushPartial();
  }
  if ( *(_DWORD *)(a1 + 256) )
    EnableFlushTimer(*(_QWORD *)(a1 + 416));
  result = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 320), 0, 1);
  if ( result == 2 )
    return KeSetEvent((PRKEVENT)(a1 + 296), 0, 0);
  return result;
}
