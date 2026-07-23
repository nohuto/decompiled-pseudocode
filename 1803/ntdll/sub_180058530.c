/*
 * XREFs of sub_180058530 @ 0x180058530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180058CA0 @ 0x180058CA0 (sub_180058CA0.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

LOGICAL __fastcall sub_180058530(__int64 a1)
{
  sub_180058CA0();
  ZwClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 1835008, (PVOID)a1);
}
