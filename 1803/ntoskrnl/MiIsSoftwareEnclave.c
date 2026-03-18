/*
 * XREFs of MiIsSoftwareEnclave @ 0x1400BB998
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x10000) != 0 && (*(_BYTE *)(a1 + 64) & 1) == 0;
}
