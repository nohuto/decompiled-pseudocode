/*
 * XREFs of RaspRectangleCreate @ 0x140174DC0
 * Callers:
 *     BgpRasPrintGlyph @ 0x140173ACC (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x140174560 (RaspScanConvert.c)
 * Callees:
 *     BgpGxInitializeRectangle @ 0x140165B0C (BgpGxInitializeRectangle.c)
 *     RaspAllocateMemory @ 0x1401758F4 (RaspAllocateMemory.c)
 */

__int64 __fastcall RaspRectangleCreate(int *a1, int a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 Memory; // r8
  __int64 result; // rax
  __int64 v9; // r8

  v6 = ((unsigned int)(a2 * *a1 * a1[1] + 7) >> 3) + 72;
  Memory = RaspAllocateMemory(v6);
  if ( !Memory )
    return 3221225495LL;
  result = BgpGxInitializeRectangle(a1, a2, Memory, v6);
  *a3 = v9;
  return result;
}
