/*
 * XREFs of RtlDeleteSecurityObject @ 0x180081F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteSecurityObject(unsigned __int64 *a1)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1);
  return 0LL;
}
