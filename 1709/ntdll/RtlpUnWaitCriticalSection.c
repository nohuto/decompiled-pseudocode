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

int __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  void *DeferredCriticalSectionEvent; // rax
  int result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(void **)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == (void *)-1LL )
  {
    _InterlockedOr(v4, 0);
    RtlpWakeByAddress(a1 + 8, 0LL);
    result = 0;
  }
  else
  {
    result = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
  }
  if ( result < 0 )
    RtlRaiseStatus(result);
  return result;
}
