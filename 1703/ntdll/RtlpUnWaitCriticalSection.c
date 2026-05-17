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

__int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    v1 = sub_18000C1F4();
  if ( v1 == -1 )
  {
    _InterlockedOr(v4, 0);
    sub_18000A978(a1 + 8, 0LL);
    result = 0LL;
  }
  else
  {
    result = ZwSetEvent(v1, 0LL);
  }
  if ( (int)result < 0 )
    RtlRaiseStatus(result);
  return result;
}
