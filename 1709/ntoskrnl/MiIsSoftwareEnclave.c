/*
 * XREFs of MiIsSoftwareEnclave @ 0x14011D7E8
 * Callers:
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x40000) != 0 && (*(_BYTE *)(a1 + 64) & 1) == 0;
}
