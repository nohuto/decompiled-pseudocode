/*
 * XREFs of sub_18007F380 @ 0x18007F380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18007F380(__int64 a1)
{
  unsigned __int64 v2; // rdi

  v2 = a1 - 72;
  sub_1800142F8(*(_QWORD *)(a1 + 144), 0xFFFFFFFF);
  *(_QWORD *)(v2 + 56) = 0LL;
  sub_1800186FC(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x80000, v2);
}
