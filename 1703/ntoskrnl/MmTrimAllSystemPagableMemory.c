/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x140215BA0
 * Callers:
 *     MmShutdownSystem @ 0x140419790 (MmShutdownSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(0, a1);
}
