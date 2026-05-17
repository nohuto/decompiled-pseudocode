/*
 * XREFs of RtlDeleteResource @ 0x180061430
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x180061594 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

void *__fastcall RtlDeleteResource(HANDLE *a1)
{
  RtlDeleteCriticalSection(a1);
  NtClose(a1[5]);
  NtClose(a1[7]);
  RtlpFreeDebugInfo(a1[11]);
  return memset(a1, 0, 0x60uLL);
}
