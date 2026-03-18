/*
 * XREFs of EtwpIsWow64Logger @ 0x140558074
 * Callers:
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x140557C2C (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
