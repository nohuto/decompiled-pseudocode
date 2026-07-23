/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x18000A930
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_18000A978 @ 0x18000A978 (sub_18000A978.c)
 *     sub_18000C1F4 @ 0x18000C1F4 (sub_18000C1F4.c)
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 */

int __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  void *v1; // rax
  int result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(void **)(a1 + 24);
  if ( !v1 )
    v1 = (void *)sub_18000C1F4();
  if ( v1 == (void *)-1LL )
  {
    _InterlockedOr(v4, 0);
    sub_18000A978(a1 + 8, 0LL);
    result = 0;
  }
  else
  {
    result = ZwSetEvent(v1, 0LL);
  }
  if ( result < 0 )
    RtlRaiseStatus(result);
  return result;
}
