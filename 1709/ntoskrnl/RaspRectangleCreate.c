/*
 * XREFs of RaspRectangleCreate @ 0x14013D700
 * Callers:
 *     BgpRasPrintGlyph @ 0x14013C14C (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x14013CED0 (RaspScanConvert.c)
 * Callees:
 *     BgpGxInitializeRectangle @ 0x14013D774 (BgpGxInitializeRectangle.c)
 *     RaspAllocateMemory @ 0x14013E2C0 (RaspAllocateMemory.c)
 */

__int64 __fastcall RaspRectangleCreate(_DWORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 Memory; // r8
  __int64 result; // rax
  __int64 v9; // r8

  v6 = ((a2 * *a1 * a1[1] + 7) >> 3) + 72;
  Memory = RaspAllocateMemory(v6);
  if ( !Memory )
    return 3221225495LL;
  result = BgpGxInitializeRectangle(a1, a2, Memory, v6);
  *a3 = v9;
  return result;
}
