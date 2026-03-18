/*
 * XREFs of FlushWorkItemRoutineKernelMode @ 0x1C0203680
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1C0037F5C (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x1C0123C84 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C0203704 (LookUpTableFlushPartial.c)
 */

signed __int16 __fastcall FlushWorkItemRoutineKernelMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int16 result; // ax

  if ( *(_BYTE *)(a1 + 372) )
  {
    *(_BYTE *)(a1 + 372) = 0;
    LookUpTableFlushComplete(a1);
  }
  else
  {
    LookUpTableFlushPartial(a1, a2, a3, a4);
  }
  if ( *(_DWORD *)(a1 + 256) )
    EnableFlushTimer(*(_QWORD *)(a1 + 360), *(_DWORD *)(a1 + 368));
  result = _InterlockedCompareExchange16((volatile signed __int16 *)(*(_QWORD *)(a1 + 264) + 56LL), 0, 1);
  if ( result == 2 )
    return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 264) + 32LL), 0, 0);
  return result;
}
