/*
 * XREFs of HvpGetCellPaged @ 0x140506A10
 * Callers:
 *     <none>
 * Callees:
 *     HvpFaultCellWithClustering @ 0x14008D090 (HvpFaultCellWithClustering.c)
 *     HvpMapEntryGetBlockAddress @ 0x14008D0E0 (HvpMapEntryGetBlockAddress.c)
 */

__int64 __fastcall HvpGetCellPaged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  if ( HvShutdownComplete == 1 )
    return 0LL;
  HvpMapEntryGetBlockAddress(
    5LL * ((a2 >> 12) & 0x1FF),
    (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(632 * ((unsigned __int64)a2 >> 31) + a1 + 1408)
                                         + 8LL * ((a2 >> 21) & 0x3FF))
                             + 40LL * ((a2 >> 12) & 0x1FF)),
    (_WORD *)(a3 + 4));
  HvpFaultCellWithClustering();
  result = v5 + 4;
  *(_DWORD *)a3 = a2;
  return result;
}
