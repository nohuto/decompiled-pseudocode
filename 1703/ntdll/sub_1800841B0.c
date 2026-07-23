/*
 * XREFs of sub_1800841B0 @ 0x1800841B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 */

LOGICAL __fastcall sub_1800841B0(_QWORD *a1)
{
  sub_1800186FC(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x200000, a1);
}
