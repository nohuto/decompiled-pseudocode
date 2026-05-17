/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x18004A860
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004A8A8 @ 0x18004A8A8 (sub_18004A8A8.c)
 *     sub_18004AE34 @ 0x18004AE34 (sub_18004AE34.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    v1 = sub_18004AE34(a1);
  if ( v1 == -1 )
  {
    _InterlockedOr(v4, 0);
    sub_18004A8A8(a1 + 8, 0LL);
    result = 0LL;
  }
  else
  {
    result = ZwSetEvent(v1, 0LL);
  }
  if ( (int)result < 0 )
    RtlRaiseStatus((unsigned int)result);
  return result;
}
