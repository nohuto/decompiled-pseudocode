/*
 * XREFs of MiEnumerateKernelLeafPtes @ 0x14040DFCC
 * Callers:
 *     MmMarkHiberPhase @ 0x14040D3A0 (MmMarkHiberPhase.c)
 *     MmUpdateHiberMappings @ 0x14040DF80 (MmUpdateHiberMappings.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x140079AD8 (MiEnumerateLeafPtes.c)
 */

unsigned __int64 __fastcall MiEnumerateKernelLeafPtes(
        __int64 (__fastcall *a1)(__int64, unsigned __int64, unsigned __int64),
        __int64 a2)
{
  return MiEnumerateLeafPtes(0xFFFF800000000000uLL, 0xFFFFFFFFFFFFFFFFuLL, a1, a2, 2);
}
