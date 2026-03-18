/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14025AAC0
 * Callers:
 *     MmShutdownSystem @ 0x1404853A0 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x14025A32C (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
