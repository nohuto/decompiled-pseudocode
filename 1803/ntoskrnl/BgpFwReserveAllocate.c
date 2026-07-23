/*
 * XREFs of BgpFwReserveAllocate @ 0x14016572C
 * Callers:
 *     BgpFwAllocateMemory @ 0x1401655A0 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_1403CDC40, v1, dword_1403CDC38);
  v3 = dword_1403CDC50;
  if ( ClearBitsAndSet > dword_1403CDC50 - 16 )
  {
    dword_1403CDC38 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_1403CDC40, v1, 0);
    v3 = dword_1403CDC50;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  dword_1403CDC38 = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_1403CDC30 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
