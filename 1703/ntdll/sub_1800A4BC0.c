/*
 * XREFs of sub_1800A4BC0 @ 0x1800A4BC0
 * Callers:
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 */

int __fastcall sub_1800A4BC0(__int64 a1, void *a2)
{
  int result; // eax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 == (void *)-1LL )
  {
    _InterlockedOr(v3, 0);
    return sub_18000A978(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent(a2, 0LL);
    if ( result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
