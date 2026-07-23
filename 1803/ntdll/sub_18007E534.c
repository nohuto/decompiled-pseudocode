/*
 * XREFs of sub_18007E534 @ 0x18007E534
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall sub_18007E534(_DWORD *BaseAddress)
{
  struct _TEB *result; // rax

  if ( BaseAddress )
  {
    BaseAddress[2] |= 4u;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 2883584, BaseAddress);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
