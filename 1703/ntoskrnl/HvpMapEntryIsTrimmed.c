/*
 * XREFs of HvpMapEntryIsTrimmed @ 0x140052FF4
 * Callers:
 *     HvpFindFreeCell @ 0x14048D43C (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsTrimmed(__int64 a1)
{
  return (*(unsigned __int8 *)(a1 + 8) >> 2) & 1;
}
