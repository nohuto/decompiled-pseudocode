/*
 * XREFs of sub_18010E460 @ 0x18010E460
 * Callers:
 *     sub_18010E4A8 @ 0x18010E4A8 (sub_18010E4A8.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_18010E460(_QWORD *BaseAddress)
{
  void *v1; // r8
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    v1 = (void *)BaseAddress[1];
    if ( v1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
