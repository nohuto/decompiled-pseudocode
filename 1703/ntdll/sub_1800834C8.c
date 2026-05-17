/*
 * XREFs of sub_1800834C8 @ 0x1800834C8
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall sub_1800834C8(unsigned __int64 a1)
{
  struct _TEB *result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) |= 4u;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 2883584, a1);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
