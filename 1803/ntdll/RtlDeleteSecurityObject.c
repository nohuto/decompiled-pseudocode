/*
 * XREFs of RtlDeleteSecurityObject @ 0x18007D9C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteSecurityObject(unsigned __int64 *a1)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1);
  return 0LL;
}
