/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x18006F6A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x18006F6E8 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18006F920 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 DeferredCriticalSectionEvent; // rax
  __int64 result; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(_QWORD *)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == -1 )
  {
    _InterlockedOr(v7, 0);
    RtlpWakeByAddress(a1 + 8, 0LL);
    result = 0LL;
  }
  else
  {
    result = ZwSetEvent(DeferredCriticalSectionEvent, 0LL, a3, a4);
  }
  if ( (int)result < 0 )
    RtlRaiseStatus(result);
  return result;
}
