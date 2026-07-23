/*
 * XREFs of sub_18007F380 @ 0x18007F380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800142F8 @ 0x1800142F8 (sub_1800142F8.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_18007F380(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 - 9;
  sub_1800142F8(a1[18], 0xFFFFFFFF);
  v2[7] = 0LL;
  sub_1800186FC(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x80000, v2);
}
