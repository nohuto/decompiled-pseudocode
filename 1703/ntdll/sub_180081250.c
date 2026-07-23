/*
 * XREFs of sub_180081250 @ 0x180081250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 */

LOGICAL __fastcall sub_180081250(_QWORD *a1)
{
  sub_1800142F8(a1[18], 0xFFFFFFFF);
  *(a1 - 2) = 0LL;
  sub_1800186FC(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3407872, a1 - 9);
}
