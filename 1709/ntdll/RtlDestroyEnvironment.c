/*
 * XREFs of RtlDestroyEnvironment @ 0x180082200
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDestroyEnvironment(unsigned __int64 a1)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
