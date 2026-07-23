/*
 * XREFs of sub_18007E9AC @ 0x18007E9AC
 * Callers:
 *     sub_1800583B8 @ 0x1800583B8 (sub_1800583B8.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

NTSTATUS __fastcall sub_18007E9AC(__int64 a1)
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
