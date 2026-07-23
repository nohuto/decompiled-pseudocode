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

int __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  void *v1; // rax
  int result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(void **)(a1 + 24);
  if ( !v1 )
    v1 = (void *)sub_18004AE34(a1);
  if ( v1 == (void *)-1LL )
  {
    _InterlockedOr(v4, 0);
    sub_18004A8A8(a1 + 8, 0LL);
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
