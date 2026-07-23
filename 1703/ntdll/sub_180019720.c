/*
 * XREFs of sub_180019720 @ 0x180019720
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019398 @ 0x180019398 (sub_180019398.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

LOGICAL __fastcall sub_180019720(__int64 a1)
{
  sub_180019398((_QWORD *)a1);
  ZwClose(*(HANDLE *)(a1 + 368));
  *(_QWORD *)(a1 + 448) = 0LL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 1835008, (PVOID)a1);
}
