/*
 * XREFs of sub_18009A320 @ 0x18009A320
 * Callers:
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 */

int __fastcall sub_18009A320(__int64 a1, void *a2)
{
  int result; // eax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 == (void *)-1LL )
  {
    _InterlockedOr(v3, 0);
    return sub_18004A8A8(a1 + 8, 0);
  }
  else
  {
    result = ZwSetEvent(a2, 0LL);
    if ( result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
