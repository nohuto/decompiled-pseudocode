/*
 * XREFs of sub_1800594E0 @ 0x1800594E0
 * Callers:
 *     sub_1800575F0 @ 0x1800575F0 (sub_1800575F0.c)
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

LOGICAL __fastcall sub_1800594E0(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
