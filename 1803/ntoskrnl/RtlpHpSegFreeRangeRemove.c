/*
 * XREFs of RtlpHpSegFreeRangeRemove @ 0x140297FE0
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140298508 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeRemove(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  __int64 result; // rax

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 56), (PRTL_BALANCED_NODE)a2);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = ~(unsigned __int16)(*(_DWORD *)(a2 + 28) >> 8);
  *(_DWORD *)a2 = -857879331;
  v5 = v4;
  result = *(_QWORD *)(a1 + 72);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + 16), -v5);
  return result;
}
