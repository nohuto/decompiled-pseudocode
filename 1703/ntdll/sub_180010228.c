/*
 * XREFs of sub_180010228 @ 0x180010228
 * Callers:
 *     sub_180010200 @ 0x180010200 (sub_180010200.c)
 *     RtlDeregisterWaitEx @ 0x180012890 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_180010228(_QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[10];
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *a1 )
    ZwClose(*a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
}
