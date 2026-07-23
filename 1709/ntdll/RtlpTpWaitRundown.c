/*
 * XREFs of RtlpTpWaitRundown @ 0x180012E38
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180012A70 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitFinalizationCallback @ 0x180013120 (RtlpTpWaitFinalizationCallback.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

LOGICAL __fastcall RtlpTpWaitRundown(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
