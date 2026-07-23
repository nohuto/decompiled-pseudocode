/*
 * XREFs of sub_1800186C0 @ 0x1800186C0
 * Callers:
 *     sub_180016530 @ 0x180016530 (sub_180016530.c)
 * Callees:
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_1800186C0(PVOID BaseAddress)
{
  sub_1800186FC(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x200000, BaseAddress);
}
