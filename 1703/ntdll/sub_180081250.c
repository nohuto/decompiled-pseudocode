/*
 * XREFs of sub_180081250 @ 0x180081250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 */

__int64 __fastcall sub_180081250(__int64 a1)
{
  sub_1800142F8(*(_QWORD *)(a1 + 144), 0xFFFFFFFF);
  *(_QWORD *)(a1 - 16) = 0LL;
  sub_1800186FC(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3407872, a1 - 72);
}
