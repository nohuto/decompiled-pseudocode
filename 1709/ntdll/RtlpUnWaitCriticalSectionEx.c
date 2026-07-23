/*
 * XREFs of RtlpUnWaitCriticalSectionEx @ 0x18009F950
 * Callers:
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 */

int __fastcall RtlpUnWaitCriticalSectionEx(__int64 a1, void *a2)
{
  int result; // eax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 == (void *)-1LL )
  {
    _InterlockedOr(v3, 0);
    return RtlpWakeByAddress(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent(a2, 0LL);
    if ( result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
