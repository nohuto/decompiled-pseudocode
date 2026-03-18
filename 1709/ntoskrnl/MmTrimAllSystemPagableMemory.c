/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14021EC70
 * Callers:
 *     MmShutdownSystem @ 0x14042EF70 (MmShutdownSystem.c)
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x14021E570 (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
