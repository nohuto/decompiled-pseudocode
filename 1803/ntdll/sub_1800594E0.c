/*
 * XREFs of sub_1800594E0 @ 0x1800594E0
 * Callers:
 *     sub_1800575F0 @ 0x1800575F0 (sub_1800575F0.c)
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_1800594E0(_QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[10];
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *a1 )
    ZwClose(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}
