/*
 * XREFs of ExDeletePoolTagTable @ 0x1402B8AEC
 * Callers:
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 */

__int64 __fastcall ExDeletePoolTagTable(unsigned int a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // al

  v1 = a1;
  v2 = 56 * (PoolTrackTableSize + 1);
  v3 = (unsigned __int64)*(&ExPoolTagTables + a1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  *(&ExPoolTagTables + v1) = 0LL;
  __writecr8(CurrentIrql);
  return MmFreeIndependentPages(v3, v2);
}
