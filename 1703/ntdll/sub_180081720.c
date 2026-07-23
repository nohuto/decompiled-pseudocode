/*
 * XREFs of sub_180081720 @ 0x180081720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_180081720(_QWORD *BaseAddress)
{
  sub_1800142F8(BaseAddress[18], 0xFFFFFFFF);
  BaseAddress[32] = 0LL;
  sub_1800186FC(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x40000, BaseAddress);
}
