/*
 * XREFs of sub_180004D20 @ 0x180004D20
 * Callers:
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_180004D20(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 432) )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v3 = 0LL;
    return ZwFreeVirtualMemory(-1LL, a1 + 440, &v3, 0x8000LL);
  }
  return result;
}
