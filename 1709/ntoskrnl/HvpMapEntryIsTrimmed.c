/*
 * XREFs of HvpMapEntryIsTrimmed @ 0x140016914
 * Callers:
 *     HvpFindFreeCell @ 0x14047A364 (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsTrimmed(__int64 a1)
{
  return (*(_BYTE *)(a1 + 8) & 4) != 0;
}
