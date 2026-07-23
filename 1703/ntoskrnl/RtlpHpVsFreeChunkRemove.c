/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x140245ED0
 * Callers:
 *     RtlpHpVsChunkCoalesce @ 0x140245060 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x14024552C (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkComputeCost @ 0x1402451E4 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 8), (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 - (unsigned __int16)(a3 ^ RtlpHeapKey ^ *(_DWORD *)a3) + v6;
  *(_QWORD *)(a1 + 48) -= result;
  return result;
}
