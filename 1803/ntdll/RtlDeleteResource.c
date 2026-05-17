/*
 * XREFs of RtlDeleteResource @ 0x180029F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

void *__fastcall RtlDeleteResource(void *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  RtlDeleteCriticalSection((__int64 *)a1, a2, a3, a4);
  ZwClose(*((_QWORD *)a1 + 5));
  ZwClose(*((_QWORD *)a1 + 7));
  sub_180029EA4(*((PSLIST_ENTRY *)a1 + 11));
  return memset(a1, 0, 0x60uLL);
}
