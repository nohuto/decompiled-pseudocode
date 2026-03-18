/*
 * XREFs of ExDeletePoolTagTable @ 0x14025AD88
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExDeletePoolTagTable(unsigned int a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // al

  v1 = a1;
  v2 = (__int64)*(&ExPoolTagTables + a1);
  v3 = 40 * (PoolTrackTableSize + 1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  *(&ExPoolTagTables + v1) = 0LL;
  __writecr8(CurrentIrql);
  return MmFreeIndependentPages(v2, v3);
}
