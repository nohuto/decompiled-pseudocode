/*
 * XREFs of BgpFwReserveAllocate @ 0x14013E858
 * Callers:
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1400BB560 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_14038D030, v1, dword_14038D028);
  v3 = dword_14038D040;
  if ( ClearBitsAndSet > dword_14038D040 - 16 )
  {
    dword_14038D028 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_14038D030, v1, 0);
    v3 = dword_14038D040;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  dword_14038D028 = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_14038D020 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
