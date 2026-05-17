/*
 * XREFs of RtlpUnWaitCriticalSectionEx @ 0x18009F950
 * Callers:
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 */

signed __int64 __fastcall RtlpUnWaitCriticalSectionEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 result; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 == -1 )
  {
    _InterlockedOr(v5, 0);
    return RtlpWakeByAddress(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent(a2, 0LL, a3, a4);
    if ( (int)result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
