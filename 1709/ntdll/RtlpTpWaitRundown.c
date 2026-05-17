/*
 * XREFs of RtlpTpWaitRundown @ 0x180012E38
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180012A70 (RtlDeregisterWaitEx.c)
 *     RtlpTpWaitFinalizationCallback @ 0x180013120 (RtlpTpWaitFinalizationCallback.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

__int64 __fastcall RtlpTpWaitRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
    ZwSetEvent(v5, 0LL, a3, a4);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
