/*
 * XREFs of RtlDeleteResource @ 0x180008CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

void *__fastcall RtlDeleteResource(__int64 a1)
{
  RtlDeleteCriticalSection((void *)a1);
  ZwClose(*(_QWORD *)(a1 + 40));
  ZwClose(*(_QWORD *)(a1 + 56));
  sub_180008E24(*(PSLIST_ENTRY *)(a1 + 88));
  return memset((void *)a1, 0, 0x60uLL);
}
