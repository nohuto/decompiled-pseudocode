/*
 * XREFs of sub_180082B14 @ 0x180082B14
 * Callers:
 *     sub_180013438 @ 0x180013438 (sub_180013438.c)
 *     sub_180082A08 @ 0x180082A08 (sub_180082A08.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

NTSTATUS __fastcall sub_180082B14(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  ZwClose(*(HANDLE *)(a1 + 32));
  v2 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  result = ZwClose(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
